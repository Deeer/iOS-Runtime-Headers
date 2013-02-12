/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMovieTVHUDView, MPVideoView, NPTVOutBackgroundView;

@interface MPTVOutWindow : UIWindow {
    NPTVOutBackgroundView *_backgroundView;
    MPMovieTVHUDView *_hudView;
    MPVideoView *_videoView;
}

@property(retain) MPVideoView *videoView;

- (void)_playbackStateChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setVideoView:(id)arg1;
- (id)videoView;

@end
