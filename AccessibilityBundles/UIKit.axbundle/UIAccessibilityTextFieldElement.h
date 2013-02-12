/* Generated by RuntimeBrowser
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@class UITextField;

@interface UIAccessibilityTextFieldElement : UIAccessibilityElement {
    UITextField *_textField;
}

@property UITextField *textField;

- (void)_accessibilityCopy;
- (void)_accessibilityCut;
- (void)_accessibilityDelete;
- (BOOL)_accessibilityHasTextOperations;
- (void)_accessibilityPaste;
- (void)_accessibilityReplace;
- (void)_accessibilitySelect;
- (void)_accessibilitySelectAll;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)setTextField:(id)arg1;
- (id)textField;

@end
