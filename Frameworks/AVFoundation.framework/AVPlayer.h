/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerInternal;

@interface AVPlayer : NSObject {
    AVPlayerInternal *_player;
}

@property(readonly) AVPlayerItem *currentItem;
@property(readonly) NSError *error;
@property NSInteger actionAtItemEnd;
@property(getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;
@property float rate;
@property(readonly) NSInteger status;

+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;
+ (BOOL)automaticallyNotifiesObserversOfClosedCaptionDisplayEnabled;
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;
+ (BOOL)automaticallyNotifiesObserversOfPreferredLanguages;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (BOOL)automaticallyNotifiesObserversOfSubtitleDisplayEnabled;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingPreferredLanguages;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingSubtitleDisplayEnabled;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;

- (NSInteger)_actionAtItemEnd;
- (void)_addFPListeners;
- (void)_addLayer:(id)arg1;
- (void)_advanceCurrentItemToItemContainingFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)_attachLayerToFigPlayer;
- (void)_beginInterruption;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (id)_currentItem;
- (NSInteger)_defaultActionAtItemEnd;
- (void)_enumerateItemsUsingBlock:(id)arg1;
- (struct OpaqueFigPlayer { }*)_figPlayer;
- (id)_fpNotificationNames;
- (BOOL)_insertItem:(id)arg1 afterItem:(id)arg2;
- (BOOL)_insertPlaybackItemOfItem:(id)arg1 inPlayerQueueAfterPlaybackItemOfItem:(id)arg2;
- (BOOL)_isClosedCaptionDisplayEnabled;
- (BOOL)_isSubtitleDisplayEnabled;
- (id)_items;
- (id)_playerLayers;
- (id)_preferredLanguages;
- (id)_propertyStorage;
- (float)_rate;
- (void)_removeAllItems;
- (BOOL)_removeAnItem:(id)arg1;
- (void)_removeFPListeners;
- (BOOL)_removeItem:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (void)_setActionAtItemEnd:(NSInteger)arg1 allowingAdvance:(BOOL)arg2;
- (void)_setCurrentItem:(id)arg1;
- (void)_setLayer:(id)arg1;
- (void)_setLayerNoLock:(id)arg1;
- (void)_setVideoCompositor:(id)arg1;
- (void)_setVideoCompositorToMatchItem:(id)arg1;
- (id)_videoCompositor;
- (id)_weakReference;
- (NSInteger)actionAtItemEnd;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(struct dispatch_queue_s { }*)arg2 usingBlock:(id)arg3;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1 queue:(struct dispatch_queue_s { }*)arg2 usingBlock:(id)arg3;
- (id)currentItem;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })currentTime;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (id)error;
- (void)finalize;
- (id)init;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isClosedCaptionDisplayEnabled;
- (BOOL)isSubtitleDisplayEnabled;
- (void)pause;
- (void)play;
- (id)preferredLanguages;
- (float)rate;
- (void)release;
- (void)removeTimeObserver:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (id)retain;
- (void)seekToTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (void)setActionAtItemEnd:(NSInteger)arg1;
- (void)setClosedCaptionDisplayEnabled:(BOOL)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setSubtitleDisplayEnabled:(BOOL)arg1;
- (NSInteger)status;
- (void)willChangeValueForKey:(id)arg1;

@end
