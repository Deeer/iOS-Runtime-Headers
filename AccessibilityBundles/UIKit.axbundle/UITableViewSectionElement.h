/* Generated by RuntimeBrowser
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@class NSMutableArray;

@interface UITableViewSectionElement : UIAccessibilityElement <UIAccessibilityElementMockViewDelegateProtocol> {
    NSMutableArray *_children;
    BOOL _isHeader;
    NSInteger _section;
}

@property BOOL isHeader;
@property NSInteger section;

- (id)_accessibilityAccessibleElementsInView:(id)arg1;
- (void)_accessibilityClearChildren;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_appendTextChildWithTitle:(id)arg1;
- (id)accessibilityChildren;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)accessibilityElementCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (void)accessibilityScrollToVisible;
- (void)accessibilityUpdateChildrenFrames;
- (void)dealloc;
- (id)description;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isHeader;
- (NSInteger)section;
- (void)setIsHeader:(BOOL)arg1;
- (void)setSection:(NSInteger)arg1;
- (void)updateMockView:(id)arg1;

@end
