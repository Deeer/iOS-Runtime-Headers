/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKPlayer, NSDate, NSString;

@interface GKFriendRequest : NSObject {
    NSDate *_date;
    NSString *_message;
    GKPlayer *_player;
    NSString *_requestID;
}

@property(retain) NSDate *date;
@property(retain) NSString *message;
@property(retain) GKPlayer *player;
@property(retain) NSString *requestID;

+ (id)friendRequestWithDictionary:(id)arg1;
+ (id)friendRequestsWithDictionaries:(id)arg1;

- (id)date;
- (id)initWithRequestID:(id)arg1;
- (id)message;
- (id)player;
- (id)requestID;
- (void)setDate:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRequestID:(id)arg1;

@end
