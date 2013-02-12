/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIBezierPath, UIImageView, UITextLabel;

@interface UIPreferencesTableCell : UIImageAndTextTableCell {
    unsigned int _reserved : 14;
    unsigned int _radioGroupItem : 1;
    unsigned int _ignoreRemoveFromSuperView : 1;
    unsigned int _drawAsLabel : 1;
    unsigned int _drawAsGroupTitle : 1;
    unsigned int _drawsBackground : 1;
    unsigned int _blueDisclosureCircle : 1;
    unsigned int _superViewIsPrefTable : 1;
    unsigned int _dontHighlightOnMouseDown : 1;
    unsigned int _tracking : 1;
    unsigned int _valueChanged : 1;
    unsigned int _removeControlVisible : 1;
    unsigned int _dontIndentForRemoveControl : 1;
    unsigned int _checkPosition : 1;
    unsigned int _truncatesTitleBeforeValue : 1;
    unsigned int _checkStyle : 4;
    SEL _action;
    NSInteger _cellOutline;
    UIImageView *_checkedImageView;
    UIBezierPath *_fillPath;
    UIBezierPath *_strokePath;
    id _target;
    id _value;
    UITextLabel *_valueTextLabel;
}

+ (void)_initializeSafeCategory;
+ (id)defaultTitleFont;
+ (Class)valueTextLabelClass;

- (void)_animateRemoveControlVisible:(BOOL)arg1;
- (struct CGImage { }*)_cachedBackgroundImage;
- (float)_cellInset;
- (id)_checkMarkImage;
- (id)_copyBackgroundButtonViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_createBezierPathWithCornerRadius:(float)arg1 bottomRadius:(float)arg2 animating:(BOOL)arg3;
- (struct CGImage { }*)_createCachedPrefImage;
- (struct CGContext { }*)_createContextForCaching;
- (void)_disclosureClicked:(id)arg1;
- (BOOL)_drawAsGroupTitle;
- (id)_getTitleColor;
- (void)_invalidatePaths;
- (void)_layoutDisclosureIfNeeded;
- (void)_layoutSubviewsAnimated:(BOOL)arg1;
- (void)_removeContextFromSuperview:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_removeContextFromSuperviewAndRedislaySelf:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)_scriptingInfo;
- (void)_setDrawAsGroupTitle:(BOOL)arg1;
- (void)_setDrawAsLabel:(BOOL)arg1;
- (void)_setHighlightOnMouseDown:(BOOL)arg1;
- (void)_setIgnoreRemoveFromSuperView:(BOOL)arg1;
- (void)_setRadioGroupItem:(BOOL)arg1;
- (void)_setSuperviewsIsPrefTable:(BOOL)arg1;
- (void)_unhighlight;
- (void)_updateButtonSizeForRemoveControlVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (id)accessibilityTableViewCellText;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (SEL)action;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })buttonBounds;
- (NSInteger)cellOutline;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (id)createRemoveControl;
- (void)dealloc;
- (id)disclosureImage;
- (id)disclosurePressedImage;
- (float)disclosureRightMargin;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFade:(float)arg2;
- (id)enclosingPreferencesTable;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })iconInset;
- (BOOL)indentsBackgroundForRemoveControl;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isChecked;
- (void)layoutSubviews;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)movedToSuperview:(id)arg1;
- (id)outlineColor;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (float)removeButtonAnimationDuration;
- (void)removeControl:(id)arg1 willRemoveTarget:(id)arg2;
- (void)removeControlWillHideRemoveButton:(id)arg1 animated:(BOOL)arg2;
- (void)removeControlWillShowRemoveButton:(id)arg1 animated:(BOOL)arg2;
- (void)removeFromSuperview;
- (void)setAction:(SEL)arg1;
- (void)setCellOutline:(NSInteger)arg1;
- (void)setCheckPosition:(NSInteger)arg1;
- (void)setCheckStyle:(NSInteger)arg1;
- (void)setChecked:(BOOL)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIcon:(id)arg1;
- (void)setIndentsBackgroundForRemoveControl:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setSelected:(BOOL)arg1 withFade:(BOOL)arg2;
- (void)setTarget:(id)arg1;
- (void)setTruncatesTitleBeforeValue:(BOOL)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setUsesBlueDisclosureCircle:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (void)sizeToFit;
- (id)target;
- (struct CGPoint { float x1; float x2; })textInset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (BOOL)truncatesTitleBeforeValue;
- (void)updateHighlightColors;
- (BOOL)usesBlueDisclosureCircle;
- (id)value;
- (id)valueColor;
- (id)valueTextLabel;

@end
