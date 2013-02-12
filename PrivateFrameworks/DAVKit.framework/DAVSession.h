/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class <DAVAuthStore>, AYAddress, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface DAVSession : NSObject <AYGroup> {
    NSString *_acceptEncoding;
    NSMutableSet *_adapters;
    AYAddress *_address;
    <DAVAuthStore> *_authStore;
    NSInteger _bufferSize;
    BOOL _builtinRedirect;
    BOOL _bypassCheckingServerTrust;
    BOOL _bypassProxies;
    NSLock *_certUILock;
    id _certificateDelegate;
    void *_davReserved;
    id _delegate;
    NSString *_host;
    NSInteger _numWorkerThread;
    NSString *_password;
    id _passwordDelegate;
    NSMutableDictionary *_permanentRedirects;
    NSInteger _port;
    NSMutableDictionary *_privateInfos;
    NSUInteger _readTimeOut;
    NSString *_scheme;
    NSLock *_sessionLock;
    id _simpleAuthStore;
    BOOL _supportsDigest;
    NSMutableArray *_trustedCerts;
    BOOL _useAuth;
    BOOL _useKerberos;
    NSString *_userAgent;
    NSString *_username;
}

+ (id)defaultAcceptEncoding;
+ (id)defaultUserAgent;
+ (void)initialize;
+ (id)sessionWithScheme:(id)arg1 host:(id)arg2 port:(NSInteger)arg3;
+ (id)sessionWithURL:(id)arg1;
+ (void)setDefaultAcceptEncoding:(id)arg1;
+ (void)setDefaultUserAgent:(id)arg1;
+ (void)setMaxRedirection:(NSInteger)arg1;
+ (void)setMaxWorkerThreadsPerSession:(NSInteger)arg1;
+ (void)setProxiesDelegate:(id)arg1;

- (id)URLToURI:(id)arg1;
- (id)acceptEncoding;
- (void)addAdapter:(id)arg1;
- (long)bufferSize;
- (BOOL)bypassCheckingServerTrust;
- (id)certificateDelegate;
- (void)clearAuthChallenge;
- (void)correctBufferSizeWithSize:(long)arg1;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)getNewRequestMessage:(struct __CFHTTPMessage {}**)arg1 andStream:(struct __CFReadStream {}**)arg2 forRequest:(id)arg3;
- (BOOL)hasCredentials;
- (id)host;
- (id)infoForKey:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(NSInteger)arg3;
- (id)initWithURL:(id)arg1;
- (BOOL)isBuiltinRedirect;
- (BOOL)isBypassProxies;
- (BOOL)keepAlive;
- (id)lock;
- (id)lockOwner;
- (void)notifyAdaptersRequestCreated:(id)arg1;
- (void)notifyAdaptersRequestDestroyed:(id)arg1;
- (void)operationHasEnded:(id)arg1;
- (BOOL)operationShouldBeLaunchedNow:(id)arg1;
- (id)password;
- (NSInteger)port;
- (NSUInteger)readTimeOut;
- (void)removeTrustedCerts;
- (id)scheme;
- (void)setAuthStore:(id)arg1;
- (void)setBuiltinRedirect:(BOOL)arg1;
- (void)setBypassCheckingServerTrust:(BOOL)arg1;
- (void)setBypassProxies:(BOOL)arg1;
- (void)setCertificateDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInfo:(id)arg1 forKey:(id)arg2;
- (void)setKeepAlive:(BOOL)arg1;
- (void)setLockOwner:(id)arg1;
- (void)setReadTimeOut:(NSUInteger)arg1;
- (void)setSupportsDigest:(BOOL)arg1;
- (void)setTrustedCerts:(id)arg1;
- (void)setUseAuth:(BOOL)arg1;
- (void)setUseKerberos:(BOOL)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setUsername:(id)arg1 andPassword:(id)arg2;
- (void)setUsername:(id)arg1 andPasswordDelegate:(id)arg2;
- (BOOL)supportsDigest;
- (id)trustedCerts;
- (BOOL)useAuth;
- (BOOL)useKerberos;
- (id)userAgent;
- (id)username;
- (NSInteger)workerThreadsCount;

@end
