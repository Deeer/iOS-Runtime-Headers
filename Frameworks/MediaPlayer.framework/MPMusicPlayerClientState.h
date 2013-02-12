/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MLQuery, MLTrack;

@interface MPMusicPlayerClientState : NSObject {
    BOOL _allowsRemoteUIAccess;
    NSInteger _backgroundPlaybackAccess;
    MLTrack *_firstItem;
    MLQuery *_query;
    NSInteger _repeatMode;
    NSInteger _shuffleMode;
    BOOL _useApplicationSpecificQueue;
    BOOL _videoPlaybackEnabled;
}

@property(retain) MLTrack *firstItem;
@property(retain) MLQuery *query;
@property BOOL allowsRemoteUIAccess;
@property NSInteger backgroundPlaybackAccess;
@property NSInteger repeatMode;
@property NSInteger shuffleMode;
@property BOOL useApplicationSpecificQueue;
@property BOOL videoPlaybackEnabled;

- (BOOL)allowsRemoteUIAccess;
- (NSInteger)backgroundPlaybackAccess;
- (void)dealloc;
- (id)firstItem;
- (id)query;
- (NSInteger)repeatMode;
- (void)setAllowsRemoteUIAccess:(BOOL)arg1;
- (void)setBackgroundPlaybackAccess:(NSInteger)arg1;
- (void)setFirstItem:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setRepeatMode:(NSInteger)arg1;
- (void)setShuffleMode:(NSInteger)arg1;
- (void)setUseApplicationSpecificQueue:(BOOL)arg1;
- (void)setVideoPlaybackEnabled:(BOOL)arg1;
- (NSInteger)shuffleMode;
- (BOOL)useApplicationSpecificQueue;
- (BOOL)videoPlaybackEnabled;

@end
