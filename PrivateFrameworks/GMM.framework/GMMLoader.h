/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSMutableData, NSThread, NSURLConnection;

@interface GMMLoader : NSObject {
     /* Encoded args for previous method: @28@0:4@8@12^{Requester=^^?i^{Connection}*BB}16d20 */
    NSUInteger _bodyOffset;
    NSURLConnection *_connection;
    NSMutableData *_data;
    BOOL _needsCancel;
    BOOL _readPreamble;
    struct Requester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; } *_requester;
    struct Response { int (**x1)(); NSDictionary *x2; } *_response;
    NSThread *_thread;
}

- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_cancelWithErrorCode:(NSInteger)arg1;
- (void)_cleanup;
- (BOOL)_continueReadStream:(BOOL)arg1;
- (void)_failWithError:(id)arg1;
- (void)_failWithErrorCode:(NSInteger)arg1;
- (void)_handleSuspendOnThread;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 postData:(id)arg2 requester:(struct Requester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; }*)arg3 timeout:(double)arg4;
- (BOOL)needsCancel;
- (void)setNeedsCancel;

@end
