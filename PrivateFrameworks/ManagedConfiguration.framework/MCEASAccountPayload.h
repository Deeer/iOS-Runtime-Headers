/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData, NSNumber, NSString;

@interface MCEASAccountPayload : MCPayload {
    NSString *_accountDescription;
    NSString *_accountPersistentUUID;
    NSData *_certificate;
    NSString *_certificateName;
    NSString *_certificatePassword;
    NSString *_emailAddress;
    NSString *_hostname;
    NSNumber *_mailNumberOfPastDaysToSync;
    NSString *_password;
    BOOL _useSSL;
    NSString *_username;
}

@property(readonly) NSString *accountDescription;
@property(copy) NSString *accountPersistentUUID;
@property(readonly) NSData *certificate;
@property(readonly) NSString *certificateName;
@property(copy) NSString *certificatePassword;
@property(copy) NSString *emailAddress;
@property(readonly) NSString *hostname;
@property(readonly) NSNumber *mailNumberOfPastDaysToSync;
@property(copy) NSString *password;
@property(copy) NSString *username;
@property(readonly) BOOL useSSL;

+ (id)localizedDescriptionForPayloadCount:(NSUInteger)arg1;
+ (id)typeStrings;

- (id)accountDescription;
- (id)accountPersistentUUID;
- (id)certificate;
- (id)certificateName;
- (id)certificatePassword;
- (void)dealloc;
- (id)description;
- (id)emailAddress;
- (id)hostname;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)mailNumberOfPastDaysToSync;
- (id)password;
- (void)setAccountPersistentUUID:(id)arg1;
- (void)setCertificatePassword:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;
- (BOOL)useSSL;
- (id)username;

@end
