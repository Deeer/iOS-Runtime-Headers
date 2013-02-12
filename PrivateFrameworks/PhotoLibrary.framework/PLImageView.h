/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, PLVideoView, UILabel, UIView;

@interface PLImageView : UIImageView {
    unsigned int _shadowEnabled : 1;
    unsigned int _suppressShadowDrawing : 1;
    unsigned int _borderIsVisible : 1;
    float _aspectRatio;
    UIView *_borderView;
    BOOL _edgeAntialiasingEnabled;
    double _lastBorderAlphaTime;
    double _lastShadowAlphaTime;
    NSString *_name;
    UILabel *_textBadge;
    float _transitionProgress;
    PLVideoView *_videoView;
}

@property(copy) NSString *name;
@property(retain) PLVideoView *videoView;
@property float borderAlpha;
@property(getter=isBorderVisible) BOOL borderVisible;
@property(getter=isDimmed) BOOL dimmed;
@property(getter=isShadowEnabled) BOOL shadowEnabled;
@property float transitionProgress;

+ (void)initialize;
+ (BOOL)shouldDrawShadows;
+ (id)textBadgeForString:(id)arg1 photoSize:(struct CGSize { float x1; float x2; })arg2;

- (void)_updateShadowPath;
- (float)borderAlpha;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isBorderVisible;
- (BOOL)isDimmed;
- (BOOL)isShadowEnabled;
- (void)layoutSubviews;
- (id)name;
- (void)parentDidLayout;
- (void)renderSnapshotInContext:(struct CGContext { }*)arg1;
- (void)setBorderAlpha:(float)arg1 forced:(BOOL)arg2;
- (void)setBorderAlpha:(float)arg1;
- (void)setBorderVisible:(BOOL)arg1;
- (void)setBorderWidthScale:(float)arg1 heightScale:(float)arg2;
- (void)setDimmed:(BOOL)arg1;
- (void)setEdgeAntialiasingEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShadowEnabled:(BOOL)arg1;
- (void)setTextBadgeString:(id)arg1;
- (void)setTransitionProgress:(float)arg1;
- (void)setVideoView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 allowRounding:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)textBadgeString;
- (float)transitionProgress;
- (id)videoView;

@end
