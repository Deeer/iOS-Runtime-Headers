/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKPlayer, GKRatingControl, UIImageView, UILabel;

@interface GKPlayerRatingAlertView : UIAlertView {
    UILabel *_aliasLabel;
    UIImageView *_avatarImageView;
    GKPlayer *_player;
    GKRatingControl *_ratingControl;
}

@property(readonly) GKPlayer *player;
@property(readonly) NSInteger rating;

- (void)_ratingControlChanged:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (void)layout;
- (id)player;
- (NSInteger)rateButtonIndex;
- (NSInteger)rating;
- (NSInteger)sendFriendRequestButtonIndex;

@end
