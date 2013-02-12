/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
    unsigned int _requestExitAfterHidingControls : 1;
    unsigned int _rotateAfterHidingControls : 1;
    unsigned int _showControlsAfterRotate : 1;
    unsigned int _autoHidingForItemChange : 1;
}

- (void)_autohideControlsOverlay;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (void)_hideOverlayWithAnimation:(BOOL)arg1 shouldUpdateAutohideFlag:(BOOL)arg2;
- (void)_hideOverlayWithAnimation:(BOOL)arg1;
- (void)_setStatusBarVisible:(BOOL)arg1 duration:(float)arg2 fenceID:(NSInteger)arg3;
- (void)_stopWatchingAVController;
- (NSInteger)_validInterfaceOrientation;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(NSInteger)arg2;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (void)cancelControlsOverlayAutohide;
- (BOOL)controlsOverlayVisible;
- (void)dealloc;
- (void)displayVideoViewOnScreen;
- (void)hideOverlayAnimated:(BOOL)arg1;
- (id)init;
- (void)itemTypeAvailableNotification:(id)arg1;
- (void)loadView;
- (id)newAlternateTracksTransition;
- (BOOL)phoneTVOutModeEnabled;
- (void)playbackStateDidChangeNotification:(id)arg1;
- (void)scheduleControlsOverlayAutohideAfterDelay:(double)arg1;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)setDesiredParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)setDisableControlsAutohide:(BOOL)arg1;
- (void)setDisabledParts:(NSUInteger)arg1;
- (void)setItem:(id)arg1;
- (void)setOrientation:(NSInteger)arg1 animate:(BOOL)arg2;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)setVisibleParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)showOverlayAnimated:(BOOL)arg1;
- (void)showOverlayIfNecessary;
- (void)swipableView:(id)arg1 tappedWithCount:(NSUInteger)arg2 atLocation:(struct CGPoint { float x1; float x2; })arg3;
- (void)swipableViewHadActivity:(id)arg1;
- (void)transformVideoForInterfaceOrientation:(NSInteger)arg1 animate:(BOOL)arg2;
- (BOOL)transportControls:(id)arg1 heldButtonPart:(NSUInteger)arg2;
- (BOOL)transportControls:(id)arg1 releasedHeldButtonPart:(NSUInteger)arg2;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(NSUInteger)arg2;
- (BOOL)usePosterForTVOut;
- (void)videoView_resumeEventsOnlyNotification:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
