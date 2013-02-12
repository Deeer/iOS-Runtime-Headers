/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class GKRingBuffer, LoopbackSocketTunnel, NSArray, NSObject<VCCallSessionDelegate>, NSObject<VideoConferenceRealTimeChannel>, NSString, VCCallInfo, VCCapabilities;

@interface VCCallSession : NSObject <LoopbackSocketTunnelDelegate> {
    struct tagCONNRESULT { 
        NSInteger iCallID; 
        NSInteger iRemoteCallID; 
        NSInteger proto; 
        NSInteger bIfRelay; 
        unsigned short wRelayServType; 
        unsigned short wChannelNumber; 
        struct tagIPPORT { 
            NSInteger iFlags; 
            BOOL szIfName[16]; 
            union { 
                NSUInteger dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbLocal; 
        struct tagIPPORT { 
            NSInteger iFlags; 
            BOOL szIfName[16]; 
            union { 
                NSUInteger dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRemote; 
        struct tagIPPORT { 
            NSInteger iFlags; 
            BOOL szIfName[16]; 
            union { 
                NSUInteger dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbSrc; 
        struct tagIPPORT { 
            NSInteger iFlags; 
            BOOL szIfName[16]; 
            union { 
                NSUInteger dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbDst; 
        struct tagIPPORT { 
            NSInteger iFlags; 
            BOOL szIfName[16]; 
            union { 
                NSUInteger dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRelayExt; 
        NSUInteger dwRTT; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        NSUInteger mFormatID; 
        NSUInteger mFormatFlags; 
        NSUInteger mBytesPerPacket; 
        NSUInteger mFramesPerPacket; 
        NSUInteger mBytesPerFrame; 
        NSUInteger mChannelsPerFrame; 
        NSUInteger mBitsPerChannel; 
        NSUInteger mReserved; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    NSInteger aacBlockSize;
    BOOL allowsRelay;
    NSInteger audioBundle;
    BOOL audioIsPaused;
    NSInteger audioTimeStampDelta;
    NSInteger audioTxBitrate;
    NSInteger bandwidthDownstream;
    NSInteger bandwidthUpstream;
    char *bundleBuffer;
    NSInteger bundledPackets;
    float callerPreEmptiveTimeoutInSecs;
    BOOL canBundleAudio;
    VCCapabilities *caps;
    } connectionResult;
    struct tagHANDLE { NSInteger x1; } *decodeHandle;
    NSObject<VCCallSessionDelegate> *delegate;
    BOOL didAttemptSIPInvite;
    BOOL didPrepareSRTP;
    BOOL didSend200OK;
    BOOL didUseICE;
    unsigned long dwRemoteRTPIP;
    struct tagHANDLE { NSInteger x1; } *encodeHandle;
    } encodedFormat;
    BOOL fInitialBandwidthDetection;
    char *featuresListString;
    struct tagHANDLE { NSInteger x1; } *hAFRC;
    struct tagHANDLE { NSInteger x1; } *hAUIO;
    struct tagHANDLE { NSInteger x1; } *hMediaQueue;
    struct tagHANDLE { NSInteger x1; } *hSIP;
    NSInteger iRemoteRTCPPort;
    NSInteger iRemoteRTPPort;
    unsigned char inputMeter;
    BOOL isAttemptingRelay;
    BOOL isAudioRunning;
    BOOL isWaitingForICEResult;
    NSUInteger lastReceived;
    double lastReceivedAudio;
    double lastReceivedPacketTimestamp;
    NSUInteger lastSentAudioSampleTime;
    BOOL launchedShutdownThread;
    VCCallInfo *localCallInfo;
    char *localSDP;
    BOOL matchedFeaturesString[1000];
    NSArray *mutedPeers;
    } mutex;
    NSInteger natType;
    double networkConditionsTimeoutInSeconds;
    double noRemotePacketsTimeout;
    NSInteger numBufferBytesAvailable;
    NSInteger numEncodedBytes;
    float packetLateAndMissingRatio;
    double packetLossRate;
    NSInteger packetsPerBundle;
    NSInteger packetsSinceLastRTCPReport;
    struct dispatch_source_s { } *pausedAudioHeartBeat;
    NSInteger payload;
    NSString *peerCN;
    NSInteger preferredAACELDBitRate;
    NSInteger preferredAudioCodec;
    BOOL receivedSIPInvite;
    NSInteger relayState;
    VCCallInfo *remoteCallInfo;
    float remoteParticipantVolume;
    char *remoteSDP;
    BOOL requiresWifi;
    GKRingBuffer *ringBuf;
    NSUInteger roundTripTime;
    NSObject<VideoConferenceRealTimeChannel> *rtChannel;
    struct tagHANDLE { NSInteger x1; } *rtpHandle;
    struct tagHANDLE { NSInteger x1; } *rtpVideo;
    NSInteger sampleLogCount;
    NSInteger sampleRate;
    NSInteger samplesPerFrame;
    BOOL shouldDoEncoding;
    } srtpLock;
    NSInteger state;
    double timeLastCheckedNetworkConditions;
    double timeLastKnowGoodNetworkConditions;
    double timeSinceLastReportedNoPackets;
    LoopbackSocketTunnel *tunnel;
    BOOL useCompressedConnectionData;
    BOOL useControlByte;
    BOOL useLoopback;
    BOOL useUEP;
    BOOL videoIsPaused;
    NSInteger videoPayload;
}

@property tagHANDLE *decodeHandle;
@property(retain) NSObject<VCCallSessionDelegate> *delegate;
@property tagHANDLE *encodeHandle;
@property tagHANDLE *hAFRC;
@property tagHANDLE *hMediaQueue;
@property(retain) VCCallInfo *localCallInfo;
@property(retain) NSArray *mutedPeers;
@property(retain) NSString *peerCN;
@property(retain) VCCallInfo *remoteCallInfo;
@property(retain) GKRingBuffer *ringBuf;
@property NSObject<VideoConferenceRealTimeChannel> *rtChannel;
@property tagHANDLE *rtpHandle;
@property NSInteger audioBundle;
@property(readonly) BOOL audioIsPaused;
@property NSInteger audioTimeStampDelta;
@property(readonly) NSInteger audioTxBitrate;
@property NSInteger bandwidthDownstream;
@property NSInteger bandwidthUpstream;
@property(readonly) char* bundleBuffer;
@property NSInteger bundledPackets;
@property BOOL canBundleAudio;
@property tagCONNRESULT connectionResult;
@property BOOL didUseICE;
@property char* featuresListString;
@property unsigned char inputMeter;
@property(readonly) BOOL isAudioRunning;
@property BOOL isWaitingForICEResult;
@property NSUInteger lastReceived;
@property NSUInteger lastSentAudioSampleTime;
@property NSInteger natType;
@property double networkConditionsTimeoutInSeconds;
@property(readonly) double networkQuality;
@property NSInteger numBufferBytesAvailable;
@property NSInteger numEncodedBytes;
@property float packetLateAndMissingRatio;
@property double packetLossRate;
@property NSInteger packetsPerBundle;
@property NSInteger payload;
@property NSInteger preferredAudioCodec;
@property BOOL receivedSIPInvite;
@property BOOL requiresWifi;
@property NSUInteger roundTripTime;
@property NSInteger sampleRate;
@property NSInteger samplesPerFrame;
@property NSInteger state;
@property BOOL useCompressedConnectionData;
@property BOOL useControlByte;
@property BOOL useUEP;
@property(readonly) BOOL videoIsPaused;
@property NSInteger videoPayload;

+ (id)keyPathsForValuesAffectingNetworkQuality;

- (BOOL)allocateBundleBuffer;
- (NSInteger)audioBundle;
- (BOOL)audioIsPaused;
- (NSInteger)audioTimeStampDelta;
- (NSInteger)audioTxBitrate;
- (NSInteger)bandwidthDownstream;
- (NSInteger)bandwidthUpstream;
- (char *)bundleBuffer;
- (NSInteger)bundledPackets;
- (BOOL)canBundleAudio;
- (BOOL)choosePayload:(NSInteger*)arg1 count:(NSInteger)arg2;
- (BOOL)chooseVideoPayload:(NSInteger*)arg1 count:(NSInteger)arg2;
- (struct tagCONNRESULT { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; unsigned short x5; unsigned short x6; struct tagIPPORT { NSInteger x_7_1_1; BOOL x_7_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_7_1_3; unsigned short x_7_1_4; } x7; struct tagIPPORT { NSInteger x_8_1_1; BOOL x_8_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { NSInteger x_9_1_1; BOOL x_9_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { NSInteger x_10_1_1; BOOL x_10_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { NSInteger x_11_1_1; BOOL x_11_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; NSUInteger x12; })connectionResult;
- (NSUInteger)connectionResultCallback:(struct tagCONNRESULT { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; unsigned short x5; unsigned short x6; struct tagIPPORT { NSInteger x_7_1_1; BOOL x_7_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_7_1_3; unsigned short x_7_1_4; } x7; struct tagIPPORT { NSInteger x_8_1_1; BOOL x_8_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { NSInteger x_9_1_1; BOOL x_9_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { NSInteger x_10_1_1; BOOL x_10_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { NSInteger x_11_1_1; BOOL x_11_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; NSUInteger x12; }*)arg1 didReceiveICEPacket:(BOOL)arg2 didUseRelay:(BOOL)arg3 sipWrapper:(id)arg4;
- (BOOL)createConnectionDataForParticipantID:(id)arg1 pCallID:(NSInteger*)arg2 error:(id*)arg3 useRelay:(BOOL)arg4;
- (BOOL)createConnectionDataForParticipantID:(id)arg1 pCallID:(NSInteger*)arg2 error:(id*)arg3;
- (id)createInitiateRelayDictionary;
- (BOOL)createMediaQueueHandle:(id*)arg1;
- (BOOL)createRTPHandles:(id*)arg1;
- (id)createRelayUpdateDictionary:(BOOL)arg1;
- (BOOL)createSDP:(NSInteger*)arg1 audioPayloadCount:(NSInteger)arg2 videoPayloadTypes:(NSInteger*)arg3 videoPayloadCount:(NSInteger)arg4 sdp:(char *)arg5 numSDPBytes:(NSInteger*)arg6 error:(id*)arg7;
- (void)dealloc;
- (struct tagHANDLE { NSInteger x1; }*)decodeHandle;
- (id)delegate;
- (id)description;
- (BOOL)didUseICE;
- (BOOL)disconnect:(id)arg1 didRemoteCancel:(BOOL)arg2;
- (BOOL)doBandwidthDetection:(struct tagHANDLE { NSInteger x1; }*)arg1 error:(id*)arg2;
- (void)doSipEndAction:(NSInteger)arg1 callID:(NSInteger)arg2;
- (void)doSipEndProc:(id)arg1;
- (NSInteger)encodeAudio:(void*)arg1 numInputBytes:(NSInteger)arg2 outputBytes:(void*)arg3 numOutputBytes:(NSInteger)arg4;
- (struct tagHANDLE { NSInteger x1; }*)encodeHandle;
- (char *)featuresListString;
- (void)getAllPayloadsForAudio:(NSInteger**)arg1 count:(NSInteger*)arg2;
- (void)getAllPayloadsForVideo:(NSInteger**)arg1 count:(NSInteger*)arg2;
- (NSUInteger)getAudioRTPID;
- (BOOL)getForcedPayload:(NSInteger*)arg1;
- (BOOL)getLossInformation:(float*)arg1;
- (NSUInteger)getVideoRTPID;
- (struct tagHANDLE { NSInteger x1; }*)hAFRC;
- (struct tagHANDLE { NSInteger x1; }*)hMediaQueue;
- (NSInteger)handleIncomingWithCallID:(NSInteger)arg1 msgIn:(const char *)arg2 msgOut:(char *)arg3 optional:(void*)arg4 confIndex:(NSInteger*)arg5 error:(id*)arg6;
- (id)initWithSIPHandle:(struct tagHANDLE { NSInteger x1; }*)arg1;
- (void)initiateRelayRequest;
- (unsigned char)inputMeter;
- (void)inviteeICEResultTimer:(float)arg1 shouldBailIfRelay:(BOOL)arg2;
- (BOOL)isAudioRunning;
- (BOOL)isCallOngoing;
- (BOOL)isWaitingForICEResult;
- (NSUInteger)lastReceived;
- (NSUInteger)lastSentAudioSampleTime;
- (id)localCallInfo;
- (void)lock;
- (void)loopbackSocketTunnel:(id)arg1 receivedData:(id)arg2 from:(struct tagIPPORT { NSInteger x1; BOOL x2[16]; union { NSUInteger x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg3;
- (BOOL)matchFeatures:(char *)arg1 remoteFeaturesString:(char *)arg2 localFeaturesString:(char *)arg3;
- (id)mutedPeers;
- (NSInteger)natType;
- (BOOL)negotiatePayloadWithError:(id*)arg1;
- (double)networkConditionsTimeoutInSeconds;
- (double)networkQuality;
- (void)notifyDelegateSessionStarted;
- (NSInteger)numBufferBytesAvailable;
- (NSInteger)numEncodedBytes;
- (float)packetLateAndMissingRatio;
- (double)packetLossRate;
- (NSInteger)packetsPerBundle;
- (NSInteger)payload;
- (id)peerCN;
- (NSInteger)preferredAudioCodec;
- (void)processCancelRelayRequest:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (void)processRelayRequestResponseDict:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (void)processRelayUpdateDict:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (void)processSIPMessage:(char *)arg1 msgOut:(char *)arg2 optional:(void*)arg3 confIndex:(NSInteger*)arg4;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)receivedSIPInvite;
- (id)remoteCallInfo;
- (BOOL)requiresWifi;
- (void)resetLoopback;
- (void)resetState;
- (id)ringBuf;
- (NSUInteger)roundTripTime;
- (id)rtChannel;
- (NSInteger)rtcpDescriptor;
- (struct tagHANDLE { NSInteger x1; }*)rtpHandle;
- (NSInteger)sampleRate;
- (NSInteger)samplesPerFrame;
- (BOOL)sendSIPInviteWithError:(id*)arg1;
- (void)setAudioBundle:(NSInteger)arg1;
- (void)setAudioTimeStampDelta:(NSInteger)arg1;
- (void)setBandwidthDownstream:(NSInteger)arg1;
- (void)setBandwidthUpstream:(NSInteger)arg1;
- (void)setBundledPackets:(NSInteger)arg1;
- (void)setCanBundleAudio:(BOOL)arg1;
- (void)setConnectionResult:(struct tagCONNRESULT { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; unsigned short x5; unsigned short x6; struct tagIPPORT { NSInteger x_7_1_1; BOOL x_7_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_7_1_3; unsigned short x_7_1_4; } x7; struct tagIPPORT { NSInteger x_8_1_1; BOOL x_8_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { NSInteger x_9_1_1; BOOL x_9_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { NSInteger x_10_1_1; BOOL x_10_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { NSInteger x_11_1_1; BOOL x_11_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; NSUInteger x12; })arg1;
- (void)setDecodeHandle:(struct tagHANDLE { NSInteger x1; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidUseICE:(BOOL)arg1;
- (void)setEncodeHandle:(struct tagHANDLE { NSInteger x1; }*)arg1;
- (void)setFeaturesListString:(char *)arg1;
- (void)setHAFRC:(struct tagHANDLE { NSInteger x1; }*)arg1;
- (void)setHMediaQueue:(struct tagHANDLE { NSInteger x1; }*)arg1;
- (void)setInputMeter:(unsigned char)arg1;
- (void)setIsWaitingForICEResult:(BOOL)arg1;
- (void)setLastReceived:(NSUInteger)arg1;
- (void)setLastSentAudioSampleTime:(NSUInteger)arg1;
- (void)setLocalCallInfo:(id)arg1;
- (void)setMutedPeers:(id)arg1;
- (void)setNatType:(NSInteger)arg1;
- (void)setNetworkConditionsTimeoutInSeconds:(double)arg1;
- (void)setNumBufferBytesAvailable:(NSInteger)arg1;
- (void)setNumEncodedBytes:(NSInteger)arg1;
- (void)setPacketLateAndMissingRatio:(float)arg1;
- (void)setPacketLossRate:(double)arg1;
- (void)setPacketsPerBundle:(NSInteger)arg1;
- (BOOL)setPauseAudio:(BOOL)arg1 error:(id*)arg2;
- (BOOL)setPauseVideo:(BOOL)arg1 error:(id*)arg2;
- (void)setPayload:(NSInteger)arg1;
- (void)setPeerCN:(id)arg1;
- (void)setPreferredAudioCodec:(NSInteger)arg1;
- (BOOL)setRTPDestinationWithError:(id*)arg1;
- (BOOL)setRTPPayloadWithError:(id*)arg1;
- (void)setReceivedSIPInvite:(BOOL)arg1;
- (void)setRemoteCallInfo:(id)arg1;
- (void)setRequiresWifi:(BOOL)arg1;
- (void)setRingBuf:(id)arg1;
- (void)setRoundTripTime:(NSUInteger)arg1;
- (void)setRtChannel:(id)arg1;
- (void)setRtpHandle:(struct tagHANDLE { NSInteger x1; }*)arg1;
- (void)setSampleRate:(NSInteger)arg1;
- (void)setSamplesPerFrame:(NSInteger)arg1;
- (void)setState:(NSInteger)arg1;
- (void)setUseCompressedConnectionData:(BOOL)arg1;
- (void)setUseControlByte:(BOOL)arg1;
- (void)setUseUEP:(BOOL)arg1;
- (void)setVideoPayload:(NSInteger)arg1;
- (void)setupAACELDBitrate;
- (BOOL)setupAudioCodec;
- (BOOL)setupAudioEncoder;
- (BOOL)setupCallerRTPChannelWithError:(id*)arg1;
- (void)setupLoopback;
- (void)shutdownVoiceChatFromRemoteSIPSignal:(NSInteger)arg1;
- (NSInteger)sipCallback:(id)arg1 notification:(NSInteger)arg2 callID:(NSInteger)arg3 msgIn:(const char *)arg4 msgOut:(char *)arg5 optional:(void*)arg6 confIndex:(NSInteger*)arg7;
- (BOOL)sipConnect:(id)arg1 error:(id*)arg2;
- (void)sipConnectThreadProc:(id)arg1;
- (BOOL)startAFRC:(id*)arg1;
- (BOOL)startAudio:(id*)arg1;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(NSInteger)arg2 usingBlob:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 doEncoding:(BOOL)arg6 error:(id*)arg7;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(NSInteger)arg2 usingBlob:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 doEncoding:(BOOL)arg6 useRelay:(BOOL)arg7 error:(id*)arg8;
- (BOOL)startMediaQueue:(id*)arg1;
- (void)startPausedHeartbeat;
- (BOOL)startRTPWithError:(id*)arg1;
- (BOOL)startVideo:(BOOL)arg1 error:(id*)arg2;
- (NSInteger)state;
- (BOOL)stopAFRC:(id*)arg1;
- (void)stopAudio;
- (void)stopAudioIOProc:(id)arg1;
- (void)stopLoopback;
- (void)stopLoopbackProc:(id)arg1;
- (BOOL)stopMediaQueue:(id*)arg1;
- (void)stopPausedHeartbeat;
- (BOOL)stopVideo:(BOOL)arg1 error:(id*)arg2;
- (void)unlock;
- (void)updateLastReceivedPacket:(BOOL)arg1;
- (void)updateLastReceivedPacketWithTimestamp:(double)arg1;
- (BOOL)updateRTCPReport;
- (BOOL)useCompressedConnectionData;
- (BOOL)useControlByte;
- (BOOL)useUEP;
- (BOOL)videoIsPaused;
- (NSInteger)videoPayload;

@end
