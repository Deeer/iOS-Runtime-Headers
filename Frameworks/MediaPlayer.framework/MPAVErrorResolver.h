/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPAVErrorResolverDelegate>;

@interface MPAVErrorResolver : NSObject {
    <MPAVErrorResolverDelegate> *_delegate;
}

@property <MPAVErrorResolverDelegate> *delegate;

- (id)delegate;
- (void)resolveError:(id)arg1;
- (void)sendDidResolveError:(id)arg1 withResolution:(NSInteger)arg2;
- (void)setDelegate:(id)arg1;

@end
