/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSData, NSDictionary, NSMutableDictionary, NSString;

@interface VCCallInfo : NSObject {
    NSInteger callID;
    NSData *connectionData;
    NSString *participantID;
    NSData *relayConnectionData;
    NSDictionary *relayRequest;
    NSMutableDictionary *relayRequestResponse;
    NSDictionary *relayUpdate;
}

@property(retain) NSData *connectionData;
@property(retain) NSString *participantID;
@property(retain) NSData *relayConnectionData;
@property(retain) NSDictionary *relayRequest;
@property(retain) NSMutableDictionary *relayRequestResponse;
@property(retain) NSDictionary *relayUpdate;
@property NSInteger callID;

- (NSInteger)callID;
- (id)connectionData;
- (void)dealloc;
- (id)init;
- (id)participantID;
- (id)relayConnectionData;
- (id)relayRequest;
- (id)relayRequestResponse;
- (id)relayUpdate;
- (void)setCallID:(NSInteger)arg1;
- (void)setConnectionData:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setRelayConnectionData:(id)arg1;
- (void)setRelayRequest:(id)arg1;
- (void)setRelayRequestResponse:(id)arg1;
- (void)setRelayUpdate:(id)arg1;

@end
