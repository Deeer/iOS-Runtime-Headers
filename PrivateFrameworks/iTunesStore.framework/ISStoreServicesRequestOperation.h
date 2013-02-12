/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation {
    SSRequest *_request;
}

@property(readonly) SSRequest *request;

- (void)_beginObservingNotifications;
- (void)_delayedStartRequest;
- (void)_delayedStopRequest;
- (void)_endObservingNotifications;
- (void)_requestStateChangedNotification:(id)arg1;
- (void)_timer:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (id)request;
- (void)run;
- (void)stopRunLoop;

@end
