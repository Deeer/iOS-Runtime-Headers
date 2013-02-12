/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAsset;

@interface AVPlayerItemTrackArray : NSArray {
    AVAsset *_asset;
    struct OpaqueFigPlaybackItem { } *_figPlaybackItem;
}

- (NSUInteger)count;
- (void)dealloc;
- (void)finalize;
- (id)initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 asset:(id)arg2;
- (id)objectAtIndex:(NSUInteger)arg1;

@end
