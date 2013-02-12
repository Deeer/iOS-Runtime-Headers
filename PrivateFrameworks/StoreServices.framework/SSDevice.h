/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableArray, NSString, SSRequest;

@interface SSDevice : NSObject {
    struct dispatch_queue_s { } *_dispatchQueue;
    NSMutableArray *_loadStoreFrontHandlers;
    SSRequest *_loadStoreFrontRequest;
    NSString *_localStoreFrontIdentifier;
    BOOL _localStoreFrontIsTransient;
}

@property(readonly) NSString *storeFrontIdentifier;
@property(readonly) NSString *synchedStoreFrontIdentifier;
@property(getter=isStoreFrontIdentifierTransient,readonly) BOOL storeFrontIdentifierTransient;

+ (id)currentDevice;

- (void)_finishRequestWithError:(id)arg1;
- (void)_postStoreFrontDidChangeNotification;
- (void)_reloadAfterStoreFrontChange;
- (void)_reloadStoreFrontIdentifier;
- (BOOL)_setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (id)copyStoreFrontRequestHeaders;
- (void)dealloc;
- (id)init;
- (BOOL)isStoreFrontIdentifierTransient;
- (void)loadStoreFrontWithCompletionHandler:(id)arg1;
- (void)reloadStoreFrontIdentifier;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)resetStoreFrontForSignOut;
- (void)setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (void)setStoreFrontIdentifierWithInfo:(id)arg1;
- (void)setStoreFrontWithResponseHeaders:(id)arg1;
- (id)storeFrontIdentifier;
- (id)synchedStoreFrontIdentifier;

@end
