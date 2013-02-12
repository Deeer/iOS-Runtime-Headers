/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPItem, MPNowPlayingItemQueueInfoButton, MPPortraitControlsOverlay, MPTextView;

@interface MPPortraitInfoOverlay : UIView <MPPlaybackControlsDelegate> {
    unsigned int _transitioning : 1;
    unsigned int _allowsDetailScrubbing : 1;
    MPPortraitControlsOverlay *_controlsView;
    id _delegate;
    MPTextView *_displayableTextView;
    MPItem *_item;
    MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;
    NSUInteger _visibleParts;
}

@property(retain) MPItem *item;
@property BOOL allowsDetailScrubbing;
@property id delegate;
@property NSUInteger visibleParts;

- (BOOL)_configureNowPlayingQueueInfoButton:(id)arg1 item:(id)arg2 time:(double)arg3;
- (id)_controlsView;
- (void)_crossedTimeMarkerNotification:(id)arg1;
- (void)_displayableTextAvailable:(id)arg1;
- (void)_displayableTextRemovalAnimationDidStop;
- (id)_displayableTextView;
- (void)_hideControlsAndTextView;
- (void)_hideSnapshotAnimationFinished;
- (id)_itemQueueInfoButton:(BOOL)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_reloadDisplayableTextViewForItem:(id)arg1 animate:(BOOL)arg2;
- (void)_reloadViews;
- (void)_removeDisplayableTextWithAnimation:(BOOL)arg1;
- (void)_updateAllItemDependenciesForItem:(id)arg1 animate:(BOOL)arg2;
- (void)_updateDisplayableTextViewArtworkForItem:(id)arg1 time:(double)arg2;
- (void)_updateDisplayableTextViewForItem:(id)arg1 animate:(BOOL)arg2;
- (void)_updateItemQueueInfoButtonForItem:(id)arg1 atTime:(double)arg2 animate:(BOOL)arg3;
- (BOOL)allowsDetailScrubbing;
- (BOOL)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2;
- (void)controlsOverlayDetailSliderInstructionOverlayWillHide:(id)arg1;
- (void)controlsOverlayDetailSliderInstructionOverlayWillShow:(id)arg1;
- (void)controlsOverlayDetailSliderTrackingDidBegin:(id)arg1;
- (void)controlsOverlayDetailSliderTrackingDidEnd:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToSuperview;
- (void)didTransition;
- (BOOL)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)item;
- (void)layoutSubviews;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setAlpha:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setVisibleParts:(NSUInteger)arg1;
- (void)startTicking;
- (void)stopTicking;
- (NSUInteger)visibleParts;
- (void)willTransition;

@end
