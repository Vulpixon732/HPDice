// Copyright 2022 DownToCode. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

//Third party library cSmtp includes define buffer_size so undef needed to include Engine.h
#ifdef BUFFER_SIZE
#undef BUFFER_SIZE
#endif
//#endif

#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "Runtime/Core/Public/HAL/PlatformFilemanager.h"
#include "Runtime/Core/Public/Misc/Base64.h"
#include "SendEmailLatent.h"
#include "EmailPluginLogs.h"
#include "EmailDetailsObject.h"
#include "EmailDetailsAsset.h"

#include "EmailFL.generated.h"

UCLASS()
class EMAILPLUGIN_API UEmailFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	/**
	 *Send email
	 *@param EmailDetails This is the struct EmailDetails which contains all the information needed for sending an email
	 *@param EmailService The email service (SMTP server) that is used to send an email. If you are using a @gmail.com email this would be set to GMAIL
	 *@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?
	 */
	UFUNCTION(BlueprintCallable, Category = "Email Library | Send", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void SendEmail(UObject* WorldContextObject, FEmailDetails EmailDetails, EEmailType EmailService, ECharSet CharacterSet, ESecurityType SecurityType, EEmailResult& OutResult, FString& OutError, struct FLatentActionInfo LatentInfo);

	/**
	 *Send email using an email details object
	 *@param EmailDetailsObject The email details object contains all the information needed to send an email. The only way to construct this object is by using the MakeEmailDetailsFromAsset node or MakeEmailDetails node
	 *@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?
	 */
	UFUNCTION(BlueprintCallable, Category = "Email Library | Send", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo", DisplayName = "Send Email (Email Details Object)"))
	static void SendEmailV2(UObject* WorldContextObject, UEmailDetailsObject* EmailDetailsObject, ECharSet CharacterSet, ESecurityType SecurityType, EEmailResult& OutResult, FString& OutError, struct FLatentActionInfo LatentInfo);

	/**
	 *Send email and specify a custom SMTP server
	 *@param EmailDetails This is the struct EmailDetails which contains all the information needed for sending an email
	 *@param Username This would be a dedicated username that you may need to use the SMTP server from an external application. E.g. Amazon SES gives you a generated username and password, the username must be entered here.
	 *@param ServerName This is the name of the SMTP server. For instance the gmail one would be smtp.gmail.com (gmail is already included in the default ones)
	 *@param Port This is the port number of the SMTP server. 587 for GMAIL, OUTLOOK and YAHOO
	 *@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?
	 */
	UFUNCTION(BlueprintCallable, Category = "Email Library | Send", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo", DisplayName = "Send Email (Custom SMTP Server)"))
	static void SendEmailV3(UObject* WorldContextObject, FEmailDetails EmailDetails, FString Username, FString ServerName, int32 Port, ECharSet CharacterSet, ESecurityType SecurityType, EEmailResult& OutResult, FString& OutError, struct FLatentActionInfo LatentInfo);

	/**
	 *Send email using an email details object and specify a custom SMTP server 
	 *@param EmailDetailsObject The email details object contains all the information needed to send an email. The only way to construct this object is by using the MakeEmailDetailsFromAsset node or MakeEmailDetails node
	 *@param Username This would be a dedicated username that you may need to use the SMTP server from an external application. E.g. Amazon SES gives you a generated username and password, the username must be entered here.
	 *@param ServerName This is the name of the SMTP server. For instance the gmail one would be smtp.gmail.com (gmail is already included in the default ones)
	 *@param Port This is the port number of the SMTP server. 587 for GMAIL, OUTLOOK and YAHOO
	 *@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?
	 */
	UFUNCTION(BlueprintCallable, Category = "Email Library | Send", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo", DisplayName = "Send Email (Custom SMTP Server Email Details Object)"))
	static void SendEmailV4(UObject* WorldContextObject, UEmailDetailsObject* EmailDetailsObject, FString Username, FString ServerName, int32 Port, ECharSet CharacterSet, ESecurityType SecurityType, EEmailResult& OutResult, FString& OutError, struct FLatentActionInfo LatentInfo);

	/**
	 *Save Capture Component 2D to an image
	 *@param SceneCaptureComponent2D The scene capture component 2D that will be used to take the picture in the scene
	 *@param ImagePath The full image path including the file extension
	 *@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?
	 */
	UFUNCTION(BlueprintCallable, Category = "Email Library | Image Processing", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void SaveCaptureComponent2D(UObject* WorldContextObject, class USceneCaptureComponent2D* SceneCaptureComponent2D, FString ImagePath, EEmailResult& OutResult, struct FLatentActionInfo LatentInfo);

public:
	/**Helper methods*/

	/**
	 *Make Email Details From Asset
	 *@param SelectedUser The user details from the list of users inside the email detail asset selected
	 *@param EmailDetailsAsset A reference to an email detail asset. It can be created in the content browser under Miscellaneous
	 *@param ReceiverEmail The email of the receiver
	 *@param Subject The subject of the email
	 *@param Message The message that the email will contain
	 *@param Attachments The attachment files
	 *@param bUsesHTML Should the email be formatted as an HTML page. If the option is on you will have to take care of the whole formatting yourself including breaking up the text into lines using <br>. To split a text into lines use the ConvertToArrayLines node.
	 *@return Returns a reference to an Email Details Object that can be fed into the Send Email (Email Details Object) node
	 */
	UFUNCTION(BlueprintPure, Category = "Email Library | Utilities", meta = (HidePin = "SelectedUserInternal", AutoCreateRefTerm = "Attachments, CC, BCC", AdvancedDisplay = 3))
	static UEmailDetailsObject* MakeEmailDetailsFromAsset(FName SelectedUser, FString SelectedUserInternal, UEmailDetailsAsset* EmailDetailsAsset, FString ReceiverEmail, TArray<FString> CC, TArray<FString> BCC, FString Subject, FString Message, TArray<FString> Attachments, bool bUsesHTML);

	/**
	 *Get Users From Email Detail Asset
	 *@param EmailDetailsAsset A reference to the email details asset to query
	 *@return Returns a list of users created inside the Email Details Asset
	 */
	UFUNCTION(BlueprintPure, Category = "Email Library | Utilities")
	static TArray<FName> GetUsersFromEmailDetailsAsset(UEmailDetailsAsset* EmailDetailsAsset);

	/**
 	 *Alternative to the default make EmailDetails struct. This version hides the password from the user.
 	 *@param SenderEmail The address used for sending the email
	 *@param Password The password of the address used to send the email
	 *@param SenderName The name shown on the email as the person who sent it
	 *@param ReceiverEmail The address the email will be sent to 
	 *@param Subject The subject of the email
	 *@param Message The message that the email will contain
	 *@param Attachments The attachment files
	 *@param EmailService The email service (SMTP server) that is used to send an email. If you are using a @gmail.com email this would be set to GMAIL
	 *@param bUsesHTML Should the email be formatted as an HTML page. If the option is on you will have to take care of the whole formatting yourself including breaking up the text into lines using <br>. To split a text into lines use the ConvertToArrayLines node.
	 */
	UFUNCTION(BlueprintPure, Category = "Email Library | Utilities", meta = (AutoCreateRefTerm = "Attachments, CC, BCC", AdvancedDisplay = 2))
	static UEmailDetailsObject* MakeEmailDetails(FString SenderEmail, FString Password, FString SenderName, FString ReceiverEmail, TArray<FString> CC, TArray<FString> BCC, FString Subject, FString Message, TArray<FString> Attachments, EEmailType EmailService, bool bUsesHTML);
	
	/**
	 *Constructs an HTML page containing an <img> tag which references an attachment. Optionally adds a number of <br> tags before and after the image.
	 *@param Attachment The attachment file to reference in the <img> tag. The name of the file not the full path.
	 *@param Size The size the image will be displayed at in pixels
	 *@param NumSpacesBeforePic Optional number of spaces before the image. 
	 *@param NumSpacesAfterPic Optional number of spaces after the image
	 *@return The generated HTML page containing the <img> tag.
	 */
	UFUNCTION(BlueprintPure, Category = "Email Library | Utilities", meta = (DisplayName = "Get HTML For Embedded Attachment", AdvancedDisplay = "NumSpacesBeforePic, NumSpacesAfterPic"))
	static FString GetHTMLForEmbeddedAttachement(FString Attachment = FString(""), FVector2D Size = FVector2D(200, 200), int32 NumSpacesBeforePic = 1, int32 NumSpacesAfterPic = 1);

	/**
	 *Constructs an HTML page <img> tag which references a URL. Optionally adds a number of <br> tags before and after the image.
	 *@param URL The url to reference in the <img> tag. The name of the file not the full path.
	 *@param Size The size the image will be displayed at in pixels
	 *@param NumSpacesBeforePic Optional number of spaces before the image.
	 *@param NumSpacesAfterPic Optional number of spaces after the image
	 *@return The generated HTML page containing the <img> tag.
	 */
	UFUNCTION(BlueprintPure, Category = "Email Library | Utilities", meta = (AdvancedDisplay = "NumSpacesBeforePic, NumSpacesAfterPic"))
	static FString GetHTMLForOnlineEmbeddedAttachment(FString URL = FString(""), FVector2D Size = FVector2D(200, 200), int32 NumSpacesBeforePic = 1, int32 NumSpacesAfterPic = 1);

	/**
	 * Constructs an <img> tag which references an attachment. Optionally adds a number of </br> tags before and after the image.
	 * @param Attachment The attachment file to reference <img> tag. The name of the file not the full path.
	 * @param Size The size the image will be displayed at in pixels.
	 * @return The generated <img> tag.
	 */
	UFUNCTION(BlueprintPure, Category = "Email Library | Utilities")
	static FString GetIMGTagForEmbeddedAttachment(FString Attachment = FString(""), FVector2D Size = FVector2D(200, 200));
	
	/**
	 * Constructs an <img> tag which references a URL. 
	 * @param URL The url to reference in the <img> tag. The name of the file not the full path.
	 * @param Size The size the image will be displayed at in pixels.
	 * @return The generated <img> tag.
	 */
	UFUNCTION(BlueprintPure, Category = "Email Library | Utilities")
	static FString GetIMGTagForOnlineEmbeddedAttachment(FString URL = FString(""), FVector2D Size = FVector2D(200, 200));
	
	/**
	 *Convert string into lines stored in the array returned
	 *@param String The string that should be split into lines using LINE_TERMINATORs
	 *@return An array of strings in which each entry is a line
	 */
	UFUNCTION(BlueprintPure, Category = "Email Library | Utilities")
	static TArray<FString> ConvertToArrayLines(FString String);

	/**
	 *Check if file exists on disk
	 *@param Path The full path of the file to check 
	 *@return True if the file exist otherwise false
	 */
	UFUNCTION(BlueprintPure, Category = "Email Library | Image Processing")
	static bool DoesFileExist(const FString Path);

	/**
	 *Deletes file
	 *@param FilePath The full path of the file to delete
	 *@return True if successful
	 */
	UFUNCTION(BlueprintCallable, Category = "Email Library | Image Processing")
	static bool DeleteFile(FString FilePath);

	/**
	 *On Android the get directories blueprint functions return a relative path. This gets the absolute path. 
	 *@return This function returns the absolute path of the game.
	 */
	UFUNCTION(BlueprintPure, Category = "Email Library | Image Processing")
	static FString GetAndroidGamePath();


};
