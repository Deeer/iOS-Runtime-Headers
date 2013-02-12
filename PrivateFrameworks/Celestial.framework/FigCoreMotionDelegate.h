/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCoreMotionDelegate : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    NSInteger accelRingIndex;
    double accelRingTime[64];
    float accelRingX[64];
    float accelRingY[64];
    float accelRingZ[64];
    NSInteger attRingIndex;
    float attRingPitch[64];
    float attRingRoll[64];
    double attRingTime[64];
    float attRingYaw[64];
    struct __CLClient { } *coreLocationClient;
    struct __IOHIDEventSystemClient { } *eventSystemClient;
    BOOL manageAccel;
    BOOL manageAttitude;
    BOOL manageRotation;
    } ringMutex;
    NSInteger rotRingIndex;
    double rotRingTime[64];
    float rotRingX[64];
    float rotRingY[64];
    float rotRingZ[64];
    struct __CFRunLoop { } *runLoop;
}

- (id)copyAccelerationData;
- (id)copyAttitudeData;
- (id)copyRotationData;
- (void)dealloc;
- (void)deferOnRunloop_initManagerUsingCL;
- (void)deferOnRunloop_initManagerUsingIOHID;
- (void)deferOnRunloop_stopEvents;
- (void)didUpdateAcceleration;
- (void)didUpdateAccelerationWithEventInfo:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)didUpdateAttitude;
- (void)didUpdateRotationRate;
- (void)getAttitude:(float*)arg1 :(float*)arg2 :(float*)arg3 forTimeStamp:(double)arg4;
- (void)getRotation:(float*)arg1 :(float*)arg2 :(float*)arg3 forTimeStamp:(double)arg4;
- (void)getVector:(float*)arg1 :(float*)arg2 :(float*)arg3 forTimeStamp:(double)arg4;
- (id)init;
- (id)initWithOptions:(BOOL)arg1 enableRotation:(BOOL)arg2 enableAttitude:(BOOL)arg3;

@end
