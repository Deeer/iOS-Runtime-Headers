/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRTransferServer : NSObject <WPTransferDelegate> {
    int _advertiserState;
    struct { struct _CCCryptor {} *x1; unsigned char x2[16]; unsigned char x3[16]; unsigned int x4; } *_aesContext;
    <TRTransferServerDelegate> *_delegate;
    BOOL _didSendData;
    struct AirPlayPairingSessionPrivate { } *_pairingSession;
    int _pairingState;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
    WPTransfer *_transferSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TRTransferServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginAdvertisingIfPowered;
- (void)_onQueue_didFinishPairing;
- (id)_onQueue_didReceiveEncryptedData:(id)arg1;
- (long)_runSetupStepWithInput:(const void*)arg1 inputLength:(unsigned long)arg2 outputData:(id*)arg3;
- (long)_runVerifyStepWithInput:(const void*)arg1 inputLength:(unsigned long)arg2 outputData:(id*)arg3;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (void)transferComplete;
- (void)transferDidFailToStartAdvertising:(id)arg1;
- (void)transferDidFailToStartScanning:(id)arg1;
- (void)transferDidFailWithError:(id)arg1;
- (id)transferDidReceiveData:(id)arg1;
- (void)transferDidUpdateAdvertiserState:(id)arg1;
- (void)transferDidUpdateScannerState:(id)arg1;

@end
