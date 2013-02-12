/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

@interface CertUITrustManager : NSObject {
}

+ (id)defaultServiceForProtocol:(id)arg1;
+ (id)defaultTrustManager;

- (NSInteger)actionForTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2 andService:(id)arg3;
- (void)allowTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2 service:(id)arg3;
- (void)clearAllTrustSettings;
- (void)clearSavedTrustSettingsForTrust:(struct __SecTrust { }*)arg1 host:(id)arg2 service:(id)arg3;

@end
