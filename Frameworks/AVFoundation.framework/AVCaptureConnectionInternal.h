/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureInputPort, AVCaptureOutput, NSArray, NSMutableArray;

@interface AVCaptureConnectionInternal : NSObject {
    BOOL active;
    NSArray *audioChannelLevels;
    NSMutableArray *audioChannels;
    AVCaptureInputPort *audioInputPort;
    BOOL enabled;
    NSMutableArray *inputPorts;
    long long lastGetAudioLevelsTime;
    AVCaptureOutput *output;
    AVCaptureInputPort *videoInputPort;
    BOOL videoMirrored;
    BOOL videoMirroredIsSetByClient;
    BOOL videoMirroringSupported;
    NSInteger videoOrientation;
    BOOL videoOrientationIsSetByClient;
    BOOL videoOrientationSupported;
}

@end
