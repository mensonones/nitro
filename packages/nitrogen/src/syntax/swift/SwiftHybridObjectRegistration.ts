import { NitroConfig } from '../../config/NitroConfig.js'
import { indent } from '../../utils.js'
import { getHybridObjectName } from '../getHybridObjectName.js'
import type { SourceImport } from '../SourceFile.js'
import { HybridObjectType } from '../types/HybridObjectType.js'
import { SwiftCxxBridgedType } from './SwiftCxxBridgedType.js'

interface Props {
  /**
   * The name of the Hybrid Object under which it should be registered and exposed to JS to.
   */
  hybridObjectName: string
  /**
   * The name of the Swift class that will be default-constructed
   */
  swiftClassName: string
}

interface SwiftHybridObjectRegistration {
  cppCode: string
  swiftFunction: string
  requiredImports: SourceImport[]
}

export function createSwiftHybridObjectRegistration({
  hybridObjectName,
  swiftClassName,
}: Props): SwiftHybridObjectRegistration {
  const autolinkingClassName = `${NitroConfig.getIosModuleName()}Autolinking`
  const swiftNamespace = NitroConfig.getIosModuleName()
  const { HybridTSpecCxx, HybridTSpecSwift, HybridTSpec } =
    getHybridObjectName(hybridObjectName)

  const type = new HybridObjectType(hybridObjectName)
  const bridge = new SwiftCxxBridgedType(type)

  return {
    swiftFunction: `
/**
 * Creates an instance of a Swift class that implements \`${HybridTSpec}\`,
 * and wraps it in a Swift class that can directly interop with C++ (\`${HybridTSpecCxx}\`)
 *
 * This is generated by Nitrogen and will initialize the class specified
 * in the \`"autolinking"\` property of \`nitro.json\` (in this case, \`${swiftClassName}\`).
 */
public static func create${hybridObjectName}() -> ${bridge.getTypeCode('swift')} {
  let hybridObject = ${swiftClassName}()
  return ${indent(bridge.parseFromSwiftToCpp('hybridObject', 'swift'), '  ')}
}
    `.trim(),
    requiredImports: [
      { name: `${HybridTSpecSwift}.hpp`, language: 'c++', space: 'user' },
    ],
    cppCode: `
HybridObjectRegistry::registerHybridObjectConstructor(
  "${hybridObjectName}",
  []() -> std::shared_ptr<HybridObject> {
    ${type.getCode('c++')} hybridObject = ${swiftNamespace}::${autolinkingClassName}::create${hybridObjectName}();
    return hybridObject;
  }
);
      `.trim(),
  }
}
