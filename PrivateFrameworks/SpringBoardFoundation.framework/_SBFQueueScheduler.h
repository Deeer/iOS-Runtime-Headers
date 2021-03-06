/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface _SBFQueueScheduler : NSObject <SBFScheduler> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)performBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1;

@end
