/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMRange, UIView<UITextSelectingContainer>;

@interface UITextSelection : NSObject {
    NSInteger _affinity;
    DOMRange *_base;
    NSInteger _granularity;
    DOMRange *_initialExtent;
    DOMRange *_selectedRange;
    NSUInteger _selectionChangeCount;
    NSInteger _state;
    UIView<UITextSelectingContainer> *_view;
}

@property(retain) DOMRange *base;
@property(retain) DOMRange *initialExtent;
@property(retain) DOMRange *selectedRange;
@property(readonly) UIView<UITextSelectingContainer> *view;
@property NSInteger affinity;
@property NSInteger granularity;
@property(readonly) NSUInteger selectionChangeCount;
@property(readonly) NSInteger state;

- (NSInteger)affinity;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (void)alterSelection:(struct CGPoint { float x1; float x2; })arg1 granularity:(NSInteger)arg2;
- (id)base;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (void)clearRangedSelectionInitialExtent;
- (void)clearSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })closestCaretRectForPoint:(struct CGPoint { float x1; float x2; })arg1 inSelection:(BOOL)arg2;
- (void)collapseSelection;
- (void)commit;
- (void)dealloc;
- (NSInteger)granularity;
- (BOOL)hasEditableSelection;
- (id)initWithView:(id)arg1;
- (id)initialExtent;
- (void)moveCaretToBoundaryOfWhitespaceOrLine;
- (NSUInteger)offsetInMarkedText;
- (BOOL)pointAtEndOfLine:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)pointAtStartOfLine:(struct CGPoint { float x1; float x2; })arg1;
- (id)selectedRange;
- (id)selectedText;
- (NSUInteger)selectionChangeCount;
- (void)selectionChanged;
- (id)selectionRects;
- (void)setAffinity:(NSInteger)arg1;
- (void)setBase:(id)arg1;
- (void)setGranularity:(NSInteger)arg1;
- (void)setInitialExtent:(id)arg1;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { float x1; float x2; })arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { float x1; float x2; })arg1 baseIsStart:(BOOL)arg2;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSelectedRange:(id)arg1;
- (void)setSelectionWithFirstPoint:(struct CGPoint { float x1; float x2; })arg1 secondPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)simpleSmartExtendDownstream:(BOOL)arg1 start:(id)arg2 end:(id)arg3 initialExtent:(id)arg4;
- (void)smartExtendRangedSelection:(NSInteger)arg1 downstream:(BOOL)arg2;
- (NSInteger)state;
- (id)view;
- (id)wordContainingCaretSelection;

@end
