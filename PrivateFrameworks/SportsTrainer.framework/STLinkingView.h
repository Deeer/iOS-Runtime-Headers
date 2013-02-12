/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class <STLinkingViewDelegate>, UIButton, UILabel, UIView;

@interface STLinkingView : UIView {
    BOOL _animateLayout;
    BOOL _animating;
    BOOL _bordered;
    UIButton *_cancelButton;
    <STLinkingViewDelegate> *_delegate;
    UIButton *_doneButton;
    UILabel *_fgsnLabel;
    UILabel *_instructionLabel;
    UIButton *_linkNewButton;
    NSInteger _linkingType;
    UIView *_pulseView;
    UIButton *_rescanButton;
    UIButton *_unlinkButton;
}

@property <STLinkingViewDelegate> *delegate;
@property(copy) NSString *serialNumber;
@property BOOL bordered;
@property NSInteger linkingType;

+ (void)_initializeSafeCategory;

- (void)_done;
- (void)_linkNewEmped;
- (void)_linkNewRemote;
- (id)_newButton;
- (void)_receiverHideAnimationDidStop;
- (void)_rescanForEmped;
- (void)_rescanForRemote;
- (void)_sensorHideAnimationDidStop;
- (void)_startAnimation;
- (void)_stopAnimation;
- (void)_unlinkRemote;
- (BOOL)bordered;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (NSInteger)linkingType;
- (id)serialNumber;
- (void)setBordered:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLinkingType:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)setLinkingType:(NSInteger)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
