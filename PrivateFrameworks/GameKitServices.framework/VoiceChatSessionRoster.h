/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class GKSessionInternal, GKVoiceChatSessionInternal, NSMutableArray, NSMutableDictionary, NSString, VoiceChatMessageSendQueue;

@interface VoiceChatSessionRoster : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    NSUInteger _chosenFocusRating;
    NSMutableArray *_connectedPeers;
    NSUInteger _deviceRating;
    NSUInteger _focusID;
    NSUInteger _focusRating;
    GKSessionInternal *_gkSession;
    GKVoiceChatSessionInternal *_gkvs;
    BOOL _hasFocus;
    BOOL _isBeaconUp;
    BOOL _needsUpdateBeaconList;
    NSString *_peerID;
    NSMutableDictionary *_peerStateTable;
    VoiceChatMessageSendQueue *_sendQueue;
    BOOL _waitingToCalculateFocus;
    } resMutex;
}

- (void)calculateFocus:(id)arg1;
- (void)cleanup;
- (void)configureDeviceRating;
- (void)dealloc;
- (NSUInteger)focusID;
- (BOOL)hasFocus;
- (id)initWithGKSession:(id)arg1 peerID:(id)arg2 voiceChatSession:(id)arg3 sendQueue:(id)arg4;
- (void)peer:(id)arg1 didChangeState:(NSInteger)arg2;
- (void)processSubscribeBeacon:(struct tagVoiceChatBeacon { NSUInteger x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)arg1 beaconState:(id)arg2 fromPeer:(id)arg3;
- (void)processUnsubscribeBeacon:(struct tagVoiceChatBeacon { NSUInteger x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)arg1 beaconState:(id)arg2 fromPeer:(id)arg3;
- (BOOL)recalculateFocusRating;
- (void)receivedBeacon:(id)arg1 fromPeer:(id)arg2;
- (void)sendBeacon:(struct tagVoiceChatBeacon { NSUInteger x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)arg1 ToPeer:(id)arg2;
- (void)sendBeacons;
- (void)startBeacon;
- (void)startBeaconWrapper:(id)arg1;
- (void)stopBeacon;
- (id)subscribedPeers;
- (void)updateBeacon;

@end
