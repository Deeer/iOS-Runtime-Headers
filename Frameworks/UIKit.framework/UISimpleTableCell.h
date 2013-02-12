/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIFont, UIImageView;

@interface UISimpleTableCell : UITableCell {
    UIFont *_font;
    UIImageView *_iconImageView;
    NSUInteger _indentationLevel;
    NSString *_title;
    NSInteger _titleColor;
}

+ (void)_initializeSafeCategory;
+ (id)defaultFont;

- (id)_scriptingInfo;
- (id)accessibilityTableViewCellText;
- (unsigned long long)accessibilityTraits;
- (void)dealloc;
- (void)drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)drawTitleInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (id)font;
- (id)icon;
- (id)iconImageView;
- (NSUInteger)indentationLevel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (NSInteger)lineBreakMode;
- (void)setFont:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIndentationLevel:(NSUInteger)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(NSInteger)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (id)title;

@end
