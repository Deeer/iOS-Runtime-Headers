/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSData, NSString;

@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload> {
    NSData *_dataPayload;
    NSString *_serverID;
    NSString *_syncKey;
}

@property(readonly) NSData *dataPayload;
@property(retain) NSString *serverID;
@property(readonly) NSString *syncKey;

- (id)dataPayload;
- (void)dealloc;
- (id)initWithHREF:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithRelativeURI:(id)arg4 withAccountInfoProvider:(id)arg5;
- (id)serverID;
- (void)setServerID:(id)arg1;
- (id)syncKey;

@end
