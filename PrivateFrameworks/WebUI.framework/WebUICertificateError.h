/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WebUICertificateError : NSObject

+ (BOOL)canAuthenticateAgainstProtectionSpace:(id)arg1;
+ (BOOL)isClientCertificateError:(int)arg1;
+ (BOOL)isServerCertificateError:(int)arg1;
+ (id)newAlertToHandleClientSideCertificateErrorCode:(int)arg1 context:(id)arg2;
+ (id)newAlertToListPossibleClientSideCertificatesWithContext:(id)arg1;
+ (BOOL)proceedWithClientCertificateIdentity:(struct __SecIdentity { }*)arg1 context:(id)arg2;
+ (BOOL)userAllowsCertificateTrust:(struct __SecTrust { }*)arg1 host:(id)arg2 applicationDisplayName:(id)arg3;

@end
