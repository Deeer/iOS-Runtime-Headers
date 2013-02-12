/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMRange : DOMObject <UIWebSelectionBlock> {
}

@property(retain,readonly) DOMNode *commonAncestorContainer;
@property(retain,readonly) DOMNode *endContainer;
@property(retain,readonly) DOMNode *startContainer;
@property(copy,readonly) NSString *text;
@property(readonly) BOOL collapsed;
@property(readonly) NSInteger endOffset;
@property(readonly) NSInteger startOffset;

+ (id)rangeForFirstPosition:(id)arg1 second:(id)arg2;

- (id)_text;
- (id)asDomNode;
- (id)asDomRange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (BOOL)canShrinkDirectlyToTextOnly;
- (id)cloneContents;
- (id)cloneRange;
- (void)collapse:(BOOL)arg1;
- (BOOL)collapsed;
- (id)commonAncestorContainer;
- (short)compareBoundaryPoints:(unsigned short)arg1 :(id)arg2;
- (short)compareBoundaryPoints:(unsigned short)arg1 sourceRange:(id)arg2;
- (short)compareNode:(id)arg1;
- (short)comparePoint:(id)arg1 offset:(NSInteger)arg2;
- (BOOL)containsBlock:(id)arg1;
- (BOOL)containsRange:(id)arg1;
- (id)createContextualFragment:(id)arg1;
- (void)dealloc;
- (void)deleteContents;
- (id)description;
- (void)detach;
- (id)enclosingDocument;
- (id)enclosingWordRange;
- (id)endContainer;
- (NSInteger)endOffset;
- (id)endPosition;
- (void)expand:(id)arg1;
- (void)extend:(unsigned long)arg1 inDirection:(NSInteger)arg2;
- (id)extractContents;
- (void)finalize;
- (void)insertNode:(id)arg1;
- (BOOL)intersectsNode:(id)arg1;
- (BOOL)isEquivalentToCollapsedRange;
- (BOOL)isPointInRange:(id)arg1 offset:(NSInteger)arg2;
- (BOOL)isSameBlock:(id)arg1;
- (id)largerParent;
- (id)lineBoxRects;
- (id)markupString;
- (id)mf_attachmentURLs;
- (id)mf_stringValue;
- (void)move:(unsigned long)arg1 inDirection:(NSInteger)arg2;
- (id)parentBlock;
- (id)rangeOfContents;
- (BOOL)rendersAsBlock;
- (void)selectNode:(id)arg1;
- (void)selectNodeContents:(id)arg1;
- (BOOL)selectable;
- (void)setEnd:(id)arg1 :(NSInteger)arg2;
- (void)setEnd:(id)arg1 offset:(NSInteger)arg2;
- (void)setEndAfter:(id)arg1;
- (void)setEndBefore:(id)arg1;
- (void)setStart:(id)arg1 :(NSInteger)arg2;
- (void)setStart:(id)arg1 offset:(NSInteger)arg2;
- (void)setStartAfter:(id)arg1;
- (void)setStartBefore:(id)arg1;
- (id)startContainer;
- (NSInteger)startOffset;
- (id)startPosition;
- (BOOL)strictlyContainsBlock:(id)arg1;
- (void)surroundContents:(id)arg1;
- (id)text;
- (id)textRects;
- (id)toString;
- (void)unionWithRange:(id)arg1;
- (id)webArchive;
- (id)webFrame;

@end
