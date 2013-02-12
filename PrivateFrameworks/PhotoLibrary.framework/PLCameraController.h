/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLCameraControllerDelegate>, AVCapture, NSString, PLPreviewView, SBSAccelerometer;

@interface PLCameraController : NSObject <SBSAccelerometerDelegate> {
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct { 
        unsigned int supportsVideo : 1; 
        unsigned int supportsInstantStillCapture : 1; 
        unsigned int supportsFocus : 1; 
        unsigned int supportsExposure : 1; 
        unsigned int supportsZoom : 1; 
        unsigned int supportsFaceDetection : 1; 
        unsigned int hasFlash : 1; 
        unsigned int hasFrontCamera : 1; 
        unsigned int willCaptureVideo : 1; 
        unsigned int isCapturingVideo : 1; 
        unsigned int deferStopPreview : 1; 
        unsigned int deferStartVideoCapture : 1; 
        unsigned int inCall : 1; 
        unsigned int continuousAutofocusDuringCapture : 1; 
        unsigned int focusDisabled : 1; 
        unsigned int focusedAtPoint : 1; 
        unsigned int wasInterrupted : 1; 
        unsigned int serverDied : 1; 
        unsigned int resumePreviewing : 1; 
        unsigned int previewIsMirrored : 1; 
        unsigned int isReady : 1; 
        unsigned int didSetPreviewLayer : 1; 
        unsigned int didNotifyCaptureEnded : 1; 
        unsigned int dontShowFocus : 1; 
        unsigned int didSetLocationData : 1; 
        unsigned int isChangingMode : 1; 
        unsigned int zoomToFit : 1; 
        unsigned int flashWillFireAutomatically : 1; 
        unsigned int torchIsOn : 1; 
        unsigned int torchIsDisabled : 1; 
        unsigned int isCameraApp : 1; 
        unsigned int logFocusInfo : 1; 
        unsigned int videoDurationIsValid : 1; 
        unsigned int delegateModeWillChange : 1; 
        unsigned int delegateModeDidChange : 1; 
        unsigned int delegateWillTakePhoto : 1; 
        unsigned int delegateDidTakePhoto : 1; 
        unsigned int delegateCapturedPhoto : 1; 
        unsigned int delegateReadyStateChanged : 1; 
        unsigned int delegateVideoCaptureDidStart : 1; 
        unsigned int delegateVideoCaptureDidStop : 1; 
        unsigned int delegateFocusFinished : 1; 
        unsigned int delegateWillBeginPreview : 1; 
        unsigned int delegateTorchAvailabilityChanged : 1; 
        unsigned int delegateRecordingStoppedWithReason : 1; 
    SBSAccelerometer *_accelerometer;
    NSInteger _autofocusCount;
    AVCapture *_avCapture;
    NSInteger _cameraDevice;
    } _cameraFlags;
    NSInteger _cameraMode;
    NSInteger _cameraOrientation;
    NSInteger _captureOrientation;
    NSInteger _captureQuality;
    <PLCameraControllerDelegate> *_delegate;
    NSInteger _flashMode;
    NSInteger _focusCount;
    BOOL _isPreviewing;
    double _maximumCaptureDuration;
    } _previewContentSize;
    } _previewOrigin;
    } _previewTransform;
    PLPreviewView *_previewView;
    NSUInteger _previousSimpleRemotePriority;
    double _startTime;
    NSString *_videoCapturePath;
    float _zoomFactor;
}

@property NSInteger cameraDevice;
@property NSInteger cameraMode;
@property NSInteger captureOrientation;
@property NSInteger flashMode;
@property BOOL isCameraApp;
@property CGPoint previewOrigin;
@property CGAffineTransform previewTransform;
@property float zoomFactor;

+ (void)_initializeSafeCategory;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })defaultPreviewViewTransform;
+ (float)previewViewRotationAngle;
+ (id)sharedInstance;

- (void)_addMoreMetadataToVideo:(id)arg1;
- (void)_applicationResumed;
- (void)_applicationSuspended;
- (void)_autofocusOperationFinished;
- (void)_captureCompleted:(id)arg1;
- (void)_captureStarted:(id)arg1;
- (void)_capturedPhoto:(id)arg1;
- (void)_capturedPhotoWithDictionary:(id)arg1;
- (void)_commonFocusFinished;
- (void)_destroyAVCapture;
- (void)_didStopCapture;
- (void)_didTakePhoto:(id)arg1;
- (void)_flashStateChanged:(id)arg1;
- (void)_focusCompleted:(id)arg1;
- (void)_focusHasChanged:(id)arg1;
- (void)_focusOperationFinished;
- (void)_focusStarted:(id)arg1;
- (void)_focusWasCancelled:(id)arg1;
- (void)_inCallStatusChanged:(BOOL)arg1;
- (void)_interruptionEnded:(id)arg1;
- (void)_previewStarted:(id)arg1;
- (void)_previewStopped:(id)arg1;
- (void)_recordingStopped:(id)arg1;
- (void)_resetPreviewView;
- (void)_sendIsReady;
- (void)_sendModeDidChange;
- (void)_serverDied:(id)arg1;
- (void)_setCameraMode:(NSInteger)arg1 cameraDevice:(NSInteger)arg2 force:(BOOL)arg3;
- (void)_setFlashMode:(NSInteger)arg1 force:(BOOL)arg2;
- (void)_setLocationEnabled:(BOOL)arg1;
- (void)_setOrientation;
- (void)_setVideoCapturePath:(id)arg1;
- (void)_setVideoPreviewLayer;
- (BOOL)_setupCamera;
- (void)_sourceStarted:(id)arg1;
- (void)_stopPreview;
- (void)_stopVideoCaptureAndPausePreview:(id)arg1;
- (void)_tearDownCamera;
- (void)_torchLevelChanged:(id)arg1;
- (void)_updateIsTorchEnabled;
- (void)_wasInterrupted:(id)arg1;
- (void)_willTakePhoto:(id)arg1;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(NSInteger)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(NSInteger)arg2;
- (void)autofocus;
- (NSInteger)cameraDevice;
- (NSInteger)cameraMode;
- (NSInteger)cameraOrientation;
- (BOOL)canCaptureVideo;
- (BOOL)canStartVideoCapture;
- (NSInteger)captureOrientation;
- (void)capturePhoto:(BOOL)arg1;
- (BOOL)capturedVideoIsTooShort;
- (void)dealloc;
- (id)delegate;
- (NSInteger)flashMode;
- (BOOL)flashWillFire;
- (BOOL)focusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)hasFlash;
- (BOOL)hasFrontCamera;
- (BOOL)inCall;
- (id)init;
- (void)irisWillClose;
- (BOOL)isCameraApp;
- (BOOL)isCapturingVideo;
- (BOOL)isChangingModes;
- (BOOL)isFocusing;
- (BOOL)isReady;
- (BOOL)isTorchEnabled;
- (BOOL)isTorchOn;
- (void)lockFocus;
- (struct CGSize { float x1; float x2; })previewContentSize;
- (BOOL)previewIsMirrored;
- (BOOL)previewIsZoomToFit;
- (struct CGPoint { float x1; float x2; })previewOrigin;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })previewTransform;
- (id)previewView;
- (void)restartAutoFocus;
- (void)resumePreview;
- (void)setCameraDevice:(NSInteger)arg1;
- (void)setCameraMode:(NSInteger)arg1;
- (void)setCaptureOrientation:(NSInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDontShowFocus:(BOOL)arg1;
- (void)setFlashMode:(NSInteger)arg1;
- (void)setFocusDisabled:(BOOL)arg1;
- (void)setIsCameraApp:(BOOL)arg1;
- (void)setPreviewOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPreviewTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setVideoCaptureMaximumDuration:(double)arg1;
- (void)setVideoCaptureQuality:(NSInteger)arg1;
- (void)setZoomFactor:(float)arg1;
- (void)startPreview;
- (BOOL)startVideoCaptureAtPath:(id)arg1 deviceOrientation:(NSInteger)arg2;
- (void)stopPreview;
- (void)stopVideoCaptureAndPausePreview:(BOOL)arg1;
- (BOOL)supportsInstantStillCapture;
- (BOOL)supportsZoom;
- (void)toggleZoomToFitOrFill;
- (id)videoCapturePath;
- (void)viewDidAppear;
- (float)zoomFactor;

@end
