// Copyright 2019 DownToCode. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class EmailPluginEditor : ModuleRules
{
    private string PluginPath
    {
        get { return Path.Combine(PluginDirectory, "Source/"); }
    }

    public EmailPluginEditor(ReadOnlyTargetRules rules) : base(rules)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.Add(Path.Combine(PluginPath, "EmailPluginEditor/Public"));
        PrivateIncludePaths.Add(Path.Combine(PluginPath, "EmailPluginEditor/Private"));

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
				// ... add other public dependencies that you statically link with here ...
                
            }
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "UnrealEd",
                "PropertyEditor",
                "LevelEditor",
                "Projects",
                "RHI",
                "RenderCore",
                "KismetWidgets",
                "KismetCompiler",
                "BlueprintGraph",
                "GraphEditor",
                "EditorStyle",
                "Kismet",
                "EmailPlugin",
                "OpenSSL",
                "AndroidRuntimeSettings",
                "AssetTools"
            }
            );
        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
				// ... add any modules that your module loads dynamically here ...
			}
            );
    }
}
