import { NitroConfig } from '../../config/NitroConfig.js'
import { createFileMetadataString } from '../../syntax/helpers.js'
import type { SourceFile } from '../../syntax/SourceFile.js'

export interface GradleFile extends Omit<SourceFile, 'language'> {
  language: 'gradle'
}

export function createGradleExtension(): GradleFile {
  const name = NitroConfig.getAndroidCxxLibName()

  const code = `
${createFileMetadataString(`${name}+autolinking.gradle`)}

/// This is a Gradle file that adds all files generated by Nitrogen
/// to the current Gradle project.
///
/// To use it, add this to your build.gradle:
/// \`\`\`gradle
/// apply from: '../nitrogen/generated/android/${name}+autolinking.gradle'
/// \`\`\`

logger.warn("[NitroModules] ${name} is boosted by nitro! 🔥")

android {
  sourceSets {
    main {
      java.srcDirs += [
        // Nitrogen files
        "\${project.projectDir}/../nitrogen/generated/android/kotlin"
      ]
    }
  }
}
  `.trim()
  return {
    content: code,
    language: 'gradle',
    name: `${name}+autolinking.gradle`,
    platform: 'android',
    subdirectory: [],
  }
}
