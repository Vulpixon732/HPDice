// Copyright 2019 DownToCode. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.IO;
using System.Collections.Generic;

public class EmailPlugin : ModuleRules
{
    private string ModulePath
    {
        get { return ModuleDirectory; }
    }

    private string PluginPath
    {
        get { return Path.Combine(PluginDirectory, "Source/"); }
    }

    private string ThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(PluginPath, "EmailPlugin/ThirdParty/")); }
    }

    private string ThirdPartyIncludePath
    {
        get { return Path.GetFullPath(Path.Combine(PluginPath, "ThirdParty/include")); }
    }

    public EmailPlugin(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        bEnableExceptions = true;
        PublicDefinitions.Add("CURL_STATICLIB");

        PublicIncludePaths.AddRange(
            new string[] {
                Path.Combine(PluginPath, "EmailPlugin/Public"),
                ThirdPartyIncludePath,
				// ... add public include paths required here ...
			}
            );


        PrivateIncludePaths.AddRange(
            new string[] {
                "EmailPlugin/Private",
				// ... add other private include paths required here ...
			}
            );


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
                "CoreUObject",
                "Engine",
                "Core",
                "OpenSSL"
            }
        );

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicDefinitions.Add("_WINSOCK_DEPRECATED_NO_WARNINGS");
#if UE_4_27_OR_LATER
            PublicAdditionalLibraries.Add(ThirdPartyPath + "lib/Windows427/CSmtp.lib");
#else
            PublicAdditionalLibraries.Add(ThirdPartyPath + "lib/Windows/CSmtp.lib");
#endif
        }
        else if (Target.Platform == UnrealTargetPlatform.Android)
        {
            PublicAdditionalLibraries.Add("stdc++");
            
            var defaultEngineIniFile = new IniFile(Path.Combine(Target.ProjectFile.Directory.FullName, "Config/DefaultEngine.ini"));
            // var defaultEngineIniFile = new IniFile(System.IO.Path.GetFullPath(System.IO.Path.Combine(ModuleDirectory, "../../../../")) + "Config/DefaultEngine.ini");
            bool bBuildForArmV7 = defaultEngineIniFile.GetBoolean("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings", "bBuildForArmV7", true);
            bool bBuildForArm64 = defaultEngineIniFile.GetBoolean("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings", "bBuildForArm64", false);

#if UE_4_27_OR_LATER
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "EmailPlugin/EmailPlugin_APL427.xml"));
            if (bBuildForArmV7) PublicAdditionalLibraries.Add(ThirdPartyPath + "lib/Android427/armeabi-v7a/libcSmtp.so");
            if (bBuildForArm64) PublicAdditionalLibraries.Add(ThirdPartyPath + "lib/Android427/arm64-v8a/libcSmtp.so");
#elif UE_4_25_OR_LATER
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "EmailPlugin/EmailPlugin_APL425.xml"));
            if (bBuildForArmV7) PublicAdditionalLibraries.Add(ThirdPartyPath + "lib/Android425/armeabi-v7a/libcSmtp.so");
            if (bBuildForArm64) PublicAdditionalLibraries.Add(ThirdPartyPath + "lib/Android425/arm64-v8a/libcSmtp.so");
#else
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "EmailPlugin/EmailPlugin_APL.xml"));
            if (bBuildForArmV7) PublicAdditionalLibraries.Add(ThirdPartyPath + "lib/Android/armeabi-v7a/libcSmtp.so");
            if (bBuildForArm64) PublicAdditionalLibraries.Add(ThirdPartyPath + "lib/Android/arm64-v8a/libcSmtp.so");
#endif
        }


        DynamicallyLoadedModuleNames.AddRange(
        new string[]
        {
			// ... add any modules that your module loads dynamically here ...
		}
        );
    }
}

/// <summary>
/// A class for reading values by section and key from a standard ".ini" initialization file.
/// </summary>
/// <remarks>
/// Section and key names are not case-sensitive. Values are loaded into a hash table for fast access.
/// Use <see cref="GetAllValues"/> to read multiple values that share the same section and key.
/// Sections in the initialization file must have the following form:
/// <code>
///     ; comment line
///     [section]
///     key=value
/// </code>
/// </remarks>
public class IniFile
{
    /// <summary>
    /// Initializes a new instance of the <see cref="IniFile"/> class.
    /// </summary>
    /// <param name="file">The initialization file path.</param>
    /// <param name="commentDelimiter">The comment delimiter string (default value is ";").
    /// </param>
    public IniFile(string file, string commentDelimiter = ";")
    {
        CommentDelimiter = commentDelimiter;
        TheFile = file;
    }

    /// <summary>
    /// Initializes a new instance of the <see cref="IniFile"/> class.
    /// </summary>
    public IniFile()
    {
        CommentDelimiter = ";";
    }

    /// <summary>
    /// The comment delimiter string (default value is ";").
    /// </summary>
    public string CommentDelimiter { get; set; }

    private string theFile;

    /// <summary>
    /// The initialization file path.
    /// </summary>
    public string TheFile
    {
        get
        {
            return theFile;
        }
        set
        {
            theFile = null;
            dictionary.Clear();
            if (File.Exists(value))
            {
                theFile = value;
                using (StreamReader sr = new StreamReader(theFile))
                {
                    string line, section = "";
                    while ((line = sr.ReadLine()) != null)
                    {
                        line = line.Trim();
                        if (line.Length == 0) continue;  // empty line
                        if (!String.IsNullOrEmpty(CommentDelimiter) && line.StartsWith(CommentDelimiter))
                            continue;  // comment

                        if (line.StartsWith("[") && line.Contains("]"))  // [section]
                        {
                            int index = line.IndexOf(']');
                            section = line.Substring(1, index - 1).Trim();
                            continue;
                        }

                        if (line.Contains("="))  // key=value
                        {
                            int index = line.IndexOf('=');
                            string key = line.Substring(0, index).Trim();
                            string val = line.Substring(index + 1).Trim();
                            string key2 = String.Format("[{0}]{1}", section, key).ToLower();

                            if (val.StartsWith("\"") && val.EndsWith("\""))  // strip quotes
                                val = val.Substring(1, val.Length - 2);

                            if (dictionary.ContainsKey(key2))  // multiple values can share the same key
                            {
                                index = 1;
                                string key3;
                                while (true)
                                {
                                    key3 = String.Format("{0}~{1}", key2, ++index);
                                    if (!dictionary.ContainsKey(key3))
                                    {
                                        dictionary.Add(key3, val);
                                        break;
                                    }
                                }
                            }
                            else
                            {
                                dictionary.Add(key2, val);
                            }
                        }
                    }
                }
            }
        }
    }

    // "[section]key"   -> "value1"
    // "[section]key~2" -> "value2"
    // "[section]key~3" -> "value3"
    private Dictionary<string, string> dictionary = new Dictionary<string, string>();

    private bool TryGetValue(string section, string key, out string value)
    {
        string key2;
        if (section.StartsWith("["))
            key2 = String.Format("{0}{1}", section, key);
        else
            key2 = String.Format("[{0}]{1}", section, key);

        return dictionary.TryGetValue(key2.ToLower(), out value);
    }

    /// <summary>
    /// Gets a string value by section and key.
    /// </summary>
    /// <param name="section">The section.</param>
    /// <param name="key">The key.</param>
    /// <param name="defaultValue">The default value.</param>
    /// <returns>The value.</returns>
    /// <seealso cref="GetAllValues"/>
    public string GetValue(string section, string key, string defaultValue = "")
    {
        string value;
        if (!TryGetValue(section, key, out value))
            return defaultValue;

        return value;
    }

    /// <summary>
    /// Gets a string value by section and key.
    /// </summary>
    /// <param name="section">The section.</param>
    /// <param name="key">The key.</param>
    /// <returns>The value.</returns>
    /// <seealso cref="GetValue"/>
    public string this[string section, string key]
    {
        get
        {
            return GetValue(section, key);
        }
    }

    /// <summary>
    /// Gets an integer value by section and key.
    /// </summary>
    /// <param name="section">The section.</param>
    /// <param name="key">The key.</param>
    /// <param name="defaultValue">The default value.</param>
    /// <param name="minValue">Optional minimum value to be enforced.</param>
    /// <param name="maxValue">Optional maximum value to be enforced.</param>
    /// <returns>The value.</returns>
    public int GetInteger(string section, string key, int defaultValue = 0,
        int minValue = int.MinValue, int maxValue = int.MaxValue)
    {
        string stringValue;
        if (!TryGetValue(section, key, out stringValue))
            return defaultValue;

        int value;
        if (!int.TryParse(stringValue, out value))
        {
            double dvalue;
            if (!double.TryParse(stringValue, out dvalue))
                return defaultValue;
            value = (int)dvalue;
        }

        if (value < minValue)
            value = minValue;
        if (value > maxValue)
            value = maxValue;
        return value;
    }

    /// <summary>
    /// Gets a double floating-point value by section and key.
    /// </summary>
    /// <param name="section">The section.</param>
    /// <param name="key">The key.</param>
    /// <param name="defaultValue">The default value.</param>
    /// <param name="minValue">Optional minimum value to be enforced.</param>
    /// <param name="maxValue">Optional maximum value to be enforced.</param>
    /// <returns>The value.</returns>
    public double GetDouble(string section, string key, double defaultValue = 0,
        double minValue = double.MinValue, double maxValue = double.MaxValue)
    {
        string stringValue;
        if (!TryGetValue(section, key, out stringValue))
            return defaultValue;

        double value;
        if (!double.TryParse(stringValue, out value))
            return defaultValue;

        if (value < minValue)
            value = minValue;
        if (value > maxValue)
            value = maxValue;
        return value;
    }

    /// <summary>
    /// Gets a boolean value by section and key.
    /// </summary>
    /// <param name="section">The section.</param>
    /// <param name="key">The key.</param>
    /// <param name="defaultValue">The default value.</param>
    /// <returns>The value.</returns>
    public bool GetBoolean(string section, string key, bool defaultValue = false)
    {
        string stringValue;
        if (!TryGetValue(section, key, out stringValue))
            return defaultValue;

        return (stringValue != "0" && !stringValue.StartsWith("f", true, null));
    }

    /// <summary>
    /// Gets an array of string values by section and key.
    /// </summary>
    /// <param name="section">The section.</param>
    /// <param name="key">The key.</param>
    /// <returns>The array of values, or null if none found.</returns>
    /// <seealso cref="GetValue"/>
    public string[] GetAllValues(string section, string key)
    {
        string key2, key3, value;
        if (section.StartsWith("["))
            key2 = String.Format("{0}{1}", section, key).ToLower();
        else
            key2 = String.Format("[{0}]{1}", section, key).ToLower();

        if (!dictionary.TryGetValue(key2, out value))
            return null;

        List<string> values = new List<string>();
        values.Add(value);
        int index = 1;
        while (true)
        {
            key3 = String.Format("{0}~{1}", key2, ++index);
            if (!dictionary.TryGetValue(key3, out value))
                break;
            values.Add(value);
        }

        return values.ToArray();
    }
}
