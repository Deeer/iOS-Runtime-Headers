/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapSupport.framework/MapSupport
 */

@class <CurlableContainerViewDelegate>, CurlableContainerView;

@interface CurlingDetectionView : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    struct { 
        float radius; 
        float angle; 
        float time; 
    struct CGPoint { 
        float x; 
        float y; 
    struct { 
        float radius; 
        float angle; 
        float time; 
    struct { 
        float radius; 
        float angle; 
        float time; 
    float _a;
    float _b;
    float _c;
    CurlableContainerView *_curlableContainerView;
    float _ddx;
    float _ddy;
    <CurlableContainerViewDelegate> *_delegate;
    float _dx;
    float _dy;
    } _finalCurl;
    float _finalCurlRoll;
    } _initialCurl;
    float _initialCurlRoll;
    BOOL _isIncreasingCurl;
    float _k;
    } _manualCurl;
    float _maxPageCurlAngle;
    float _minPageCurlAngle;
    float _oldFingerDistance;
    float _ox;
    float _oy;
    BOOL _shouldChangeCurlState;
    } _startPoint;
    float _superviewDiagonalAngle;
    float _superviewDiagonalLength;
    BOOL _touchIsMoving;
    } _uncurlDetectionOrigin;
}

@property CurlableContainerView *curlableContainerView;
@property <CurlableContainerViewDelegate> *delegate;
@property float finalCurlRoll;
@property ? finalCurlState;
@property float initialCurlRoll;
@property ? initialCurlState;
@property float superviewDiagonalAngle;
@property float superviewDiagonalLength;
@property CGPoint uncurlDetectionOrigin;

- (void)_cancelManualCurl;
- (void)_cancelManualUncurl;
- (id)curlableContainerView;
- (id)delegate;
- (float)finalCurlRoll;
- (struct { float x1; float x2; float x3; })finalCurlState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)initialCurlRoll;
- (struct { float x1; float x2; float x3; })initialCurlState;
- (void)setCurlableContainerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFinalCurlRoll:(float)arg1;
- (void)setFinalCurlState:(struct { float x1; float x2; float x3; })arg1;
- (void)setInitialCurlRoll:(float)arg1;
- (void)setInitialCurlState:(struct { float x1; float x2; float x3; })arg1;
- (void)setSuperviewDiagonalAngle:(float)arg1;
- (void)setSuperviewDiagonalLength:(float)arg1;
- (void)setUncurlDetectionOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (float)superviewDiagonalAngle;
- (float)superviewDiagonalLength;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)uncurl;
- (struct CGPoint { float x1; float x2; })uncurlDetectionOrigin;

@end
