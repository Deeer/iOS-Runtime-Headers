/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSString;

@interface MCLDAPAccountPayload : MCPayload {
    NSString *_accountDescription;
    NSString *_accountPersistentUUID;
    NSString *_hostname;
    NSString *_password;
    NSArray *_searchSettings;
    BOOL _useSSL;
    NSString *_username;
}

@property(readonly) NSString *accountDescription;
@property(copy) NSString *accountPersistentUUID;
@property(readonly) NSString *hostname;
@property(retain) NSString *password;
@property(readonly) NSArray *searchSettings;
@property(retain) NSString *username;
@property(readonly) BOOL useSSL;

+ (id)localizedDescriptionForPayloadCount:(NSUInteger)arg1;
+ (id)typeStrings;

- (id)accountDescription;
- (id)accountPersistentUUID;
- (void)dealloc;
- (id)description;
- (id)hostname;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)password;
- (id)searchSettings;
- (void)setAccountPersistentUUID:(id)arg1;
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
