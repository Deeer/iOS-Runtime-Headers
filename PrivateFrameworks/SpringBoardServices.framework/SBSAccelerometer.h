/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class <SBSAccelerometerDelegate>, NSLock, NSThread;

@interface SBSAccelerometer : NSObject {
    struct __CFRunLoop { } *_accelerometerEventsRunLoop;
    struct __CFRunLoopSource { } *_accelerometerEventsSource;
    <SBSAccelerometerDelegate> *_delegate;
    double _interval;
    NSLock *_lock;
    BOOL _orientationEventsEnabled;
    NSThread *_orientationEventsThread;
    NSInteger _orientationEventsToken;
    float _xThreshold;
    float _yThreshold;
    float _zThreshold;
}

@property <SBSAccelerometerDelegate> *delegate;
@property BOOL accelerometerEventsEnabled;
@property BOOL orientationEventsEnabled;
@property double updateInterval;
@property float xThreshold;
@property float yThreshold;
@property float zThreshold;

- (void)_checkIn;
- (void)_checkOut;
- (void)_orientationDidChange;
- (id)_orientationEventsThread;
- (void)_serverWasRestarted;
- (BOOL)accelerometerEventsEnabled;
- (NSInteger)currentDeviceOrientation;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)orientationEventsEnabled;
- (void)setAccelerometerEventsEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOrientationEventsEnabled:(BOOL)arg1;
- (void)setUpdateInterval:(double)arg1;
- (void)setXThreshold:(float)arg1;
- (void)setYThreshold:(float)arg1;
- (void)setZThreshold:(float)arg1;
- (double)updateInterval;
- (float)xThreshold;
- (float)yThreshold;
- (float)zThreshold;

@end
