import { NitroConfig } from '../../config/NitroConfig.js'
import { includeHeader } from '../../syntax/c++/includeNitroHeader.js'
import { getAllKnownTypes } from '../../syntax/createType.js'
import {
  createFileMetadataString,
  isNotDuplicate,
} from '../../syntax/helpers.js'
import type { SourceFile } from '../../syntax/SourceFile.js'
import { getReferencedTypes } from '../../syntax/getReferencedTypes.js'
import { SwiftCxxBridgedType } from '../../syntax/swift/SwiftCxxBridgedType.js'
import { filterDuplicateHelperBridges, indent } from '../../utils.js'

const SWIFT_BRIDGE_NAMESPACE = ['bridge', 'swift']

export function createSwiftCxxBridge(): SourceFile[] {
  const moduleName = NitroConfig.getIosModuleName()
  const bridgeName = `${moduleName}-Swift-Cxx-Bridge`

  const types = getAllKnownTypes().map((t) => new SwiftCxxBridgedType(t))

  const bridges = types
    .flatMap((t) => {
      const referenced = getReferencedTypes(t.type)
      return referenced.map((r) => {
        const bridge = new SwiftCxxBridgedType(r)
        return bridge.getRequiredBridge()
      })
    })
    .filter((b) => b != null)
    .filter(filterDuplicateHelperBridges)
  const helperFunctionsHeader = bridges
    .map((b) => b.header.cxxCode)
    .filter(isNotDuplicate)
    .join('\n\n')
  const helperFunctionsImplementation = bridges
    .map((b) => b.implementation?.cxxCode)
    .filter((f) => f != null)
    .filter(isNotDuplicate)
    .join('\n\n')

  const requiredImports = bridges.flatMap((b) => b.requiredIncludes)
  const allIncludes = requiredImports
    .map((i) => includeHeader(i, false))
    .filter(isNotDuplicate)
  const forwardDeclarations = requiredImports
    .map((i) => i.forwardDeclaration)
    .filter((f) => f != null)
    .filter(isNotDuplicate)
  const namespace = NitroConfig.getCxxNamespace(
    'c++',
    ...SWIFT_BRIDGE_NAMESPACE
  )

  const header = `
${createFileMetadataString(`${bridgeName}.hpp`)}

#pragma once

// Forward declarations of C++ defined types
${forwardDeclarations.sort().join('\n')}

// Include C++ defined types that cannot be forward-declared
${allIncludes.sort().join('\n')}

/**
 * Contains specialized versions of C++ templated types so they can be accessed from Swift,
 * as well as helper functions to interact with those C++ types from Swift.
 */
namespace ${namespace} {

  ${indent(helperFunctionsHeader, '  ')}

} // namespace ${namespace}
`

  const source = `
${createFileMetadataString(`${bridgeName}.cpp`)}

#include "${bridgeName}.hpp"

namespace ${namespace} {

  ${indent(helperFunctionsImplementation, '  ')}

} // namespace ${namespace}
`

  const files: SourceFile[] = []
  files.push({
    content: header,
    language: 'c++',
    name: `${bridgeName}.hpp`,
    platform: 'ios',
    subdirectory: [],
  })
  files.push({
    content: source,
    language: 'c++',
    name: `${bridgeName}.cpp`,
    platform: 'ios',
    subdirectory: [],
  })
  return files
}
