/* Generated by RuntimeBrowser
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@interface UITableAccessibility_super : UIAccessibilitySafeCategory {
}

+ (void)_initializeSafeCategory;

- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityScrollStatus;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)accessibilityElementCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (void)dealloc;
- (void)enableRowDeletion:(BOOL)arg1 animated:(BOOL)arg2;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (BOOL)isAccessibilityElement;
- (void)reloadData;

@end
