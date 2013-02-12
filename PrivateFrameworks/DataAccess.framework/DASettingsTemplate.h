/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSArray, NSString;

@interface DASettingsTemplate : NSObject {
    BOOL _defaultUseSSL;
    NSArray *_domainAliasPatterns;
    NSInteger _httpPort;
    NSInteger _httpsPort;
    BOOL _isDefaultTemplate;
    NSString *_name;
    NSInteger _order;
    NSString *_pathFormat;
    NSInteger _port;
    NSString *_primaryDomain;
    NSString *_primaryUsernameDomain;
}

@property(readonly) NSString *defaultScheme;
@property(retain) NSArray *domainAliasPatterns;
@property(retain) NSString *name;
@property(retain) NSString *pathFormat;
@property(retain) NSString *primaryDomain;
@property(retain) NSString *primaryUsernameDomain;
@property(readonly) NSInteger defaultPort;
@property BOOL defaultUseSSL;
@property NSInteger httpPort;
@property NSInteger httpsPort;
@property BOOL isDefaultTemplate;
@property NSInteger order;

+ (BOOL)_isValidPort:(NSInteger)arg1;
+ (id)defaultTemplate;
+ (id)knownTemplates;
+ (BOOL)requiresPathFormat;
+ (BOOL)requiresPorts;
+ (id)templateWithDomain:(id)arg1;

- (void)_appendPrimarySuffixToUsernameIfNeeded:(id)arg1;
- (id)_initWithName:(id)arg1 plist:(id)arg2;
- (BOOL)_isDomainInAliases:(id)arg1;
- (BOOL)_isPrincipalPathCustomForAccount:(id)arg1;
- (id)_principalPathForAccount:(id)arg1;
- (void)_setPrincipalURLForAccount:(id)arg1;
- (NSInteger)compare:(id)arg1;
- (void)dealloc;
- (NSInteger)defaultPort;
- (id)defaultScheme;
- (BOOL)defaultUseSSL;
- (id)description;
- (id)descriptionForAccount:(id)arg1;
- (id)domainAliasPatterns;
- (NSUInteger)hash;
- (NSInteger)httpPort;
- (NSInteger)httpsPort;
- (void)initAccount:(id)arg1;
- (BOOL)isDefaultTemplate;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (NSInteger)order;
- (id)pathFormat;
- (id)primaryDomain;
- (id)primaryUsernameDomain;
- (void)setDefaultUseSSL:(BOOL)arg1;
- (void)setDomain:(id)arg1 forAccount:(id)arg2;
- (void)setDomainAliasPatterns:(id)arg1;
- (void)setHttpPort:(NSInteger)arg1;
- (void)setHttpsPort:(NSInteger)arg1;
- (void)setIsDefaultTemplate:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setOrder:(NSInteger)arg1;
- (void)setPathFormat:(id)arg1;
- (void)setPort:(NSInteger)arg1 forAccount:(id)arg2;
- (void)setPrimaryDomain:(id)arg1;
- (void)setPrimaryUsernameDomain:(id)arg1;
- (void)setPrincipalURLForAccount:(id)arg1 toURL:(id)arg2;
- (void)setURL:(id)arg1 forAccount:(id)arg2;
- (void)setUseSSL:(BOOL)arg1 forAccount:(id)arg2;
- (void)setUsername:(id)arg1 forAccount:(id)arg2;

@end
