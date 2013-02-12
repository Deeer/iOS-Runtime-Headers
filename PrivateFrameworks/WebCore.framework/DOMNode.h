/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMNode : DOMObject <DOMEventTarget, UIKeyboardInput, UIWebSelectionBlock> {
}

@property(retain,readonly) DOMNamedNodeMap *attributes;
@property(copy,readonly) NSString *baseURI;
@property(readonly) UITextPosition *beginningOfDocument;
@property(retain,readonly) DOMNodeList *childNodes;
@property(readonly) UIView<UITextSelectingContent> *content;
@property(readonly) UITextPosition *endOfDocument;
@property(retain,readonly) DOMNode *firstChild;
@property <UITextInputDelegate> *inputDelegate;
@property(retain) UIColor *insertionPointColor;
@property(readonly) UITextInteractionAssistant *interactionAssistant;
@property(retain,readonly) DOMNode *lastChild;
@property(copy,readonly) NSString *localName;
@property(readonly) UITextRange *markedTextRange;
@property(copy) NSDictionary *markedTextStyle;
@property(copy,readonly) NSString *namespaceURI;
@property(retain,readonly) DOMNode *nextSibling;
@property(copy,readonly) NSString *nodeName;
@property(copy) NSString *nodeValue;
@property(retain,readonly) DOMDocument *ownerDocument;
@property(retain,readonly) DOMElement *parentElement;
@property(retain,readonly) DOMNode *parentNode;
@property(copy) NSString *prefix;
@property(retain,readonly) DOMNode *previousSibling;
@property(copy) UITextRange *selectedTextRange;
@property(readonly) UITextSelectionView *selectionView;
@property(copy) NSString *textContent;
@property(readonly) UIView *textInputView;
@property __CFCharacterSet *textTrimmingSet;
@property(readonly) <UITextInputTokenizer> *tokenizer;
@property BOOL acceptsEmoji;
@property NSInteger autocapitalizationType;
@property NSInteger autocorrectionType;
@property BOOL contentsIsSingleValue;
@property(getter=isEditable,readonly) BOOL editable;
@property(getter=isEditing,readonly) BOOL editing;
@property NSInteger emptyContentReturnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property NSUInteger insertionPointWidth;
@property(readonly) BOOL isContentEditable;
@property NSInteger keyboardAppearance;
@property NSInteger keyboardType;
@property(readonly) unsigned short nodeType;
@property BOOL returnKeyGoesToNextResponder;
@property NSInteger returnKeyType;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property NSInteger selectionAffinity;
@property NSInteger textLoupeVisibility;
@property NSInteger textSelectionBehavior;
@property id textSuggestionDelegate;

- (struct Element { int (**x1)(); int (**x2)(); NSInteger x3; struct Node {} *x4; struct Document {} *x5; struct Node {} *x6; struct Node {} *x7; struct RenderObject {} *x8; unsigned int x9 : 2; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; struct Node {} *x30; struct Node {} *x31; struct QualifiedName { struct QualifiedNameImpl {} *x_32_1_1; } x32; struct RefPtr<WebCore::NamedNodeMap> { struct NamedNodeMap {} *x_33_1_1; } x33; }*)_linkElement;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_ensureVisibleRectForFrame:(id)arg1;
- (void)_fixParagraphsAndQuotesFromMicrosoftNodesToRemove:(id)arg1;
- (BOOL)_isAssistable;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_lastRectForRange:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_markedTextNSRange;
- (id)_nextAssistedNode;
- (id)_previousAssistedNode;
- (id)_realNode;
- (BOOL)_requiresAccessoryView;
- (BOOL)_requiresInputView;
- (struct RootObject { }*)_rootObject;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (id)_subresourceURLs;
- (BOOL)_supportsAutoFill;
- (id)_textFormElement;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })absoluteQuad;
- (id)absoluteQuads;
- (id)absoluteQuadsAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)addEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (id)appendChild:(id)arg1;
- (id)asDomNode;
- (id)asDomRange;
- (id)asElement;
- (id)attributes;
- (id)automaticallySelectedOverlay;
- (id)baseURI;
- (NSInteger)baseWritingDirectionForPosition:(id)arg1 inDirection:(NSInteger)arg2;
- (BOOL)becomesEditableWithGestures;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (id)borderRadii;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (id)boundingBoxes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (BOOL)canShrinkDirectlyToTextOnly;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(NSInteger)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(NSInteger)arg2;
- (id)childNodes;
- (id)cloneNode:(BOOL)arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned short)compareDocumentPosition:(id)arg1;
- (NSInteger)comparePosition:(id)arg1 toPosition:(id)arg2;
- (float)computedFontSize;
- (void)confirmMarkedText:(id)arg1;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)containsBlock:(id)arg1;
- (BOOL)containsNode:(id)arg1;
- (BOOL)containsOnlyInlineObjects;
- (BOOL)containsRange:(id)arg1;
- (id)content;
- (BOOL)contentsIsSingleValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertCaretRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (id)createPeripheral;
- (id)createPickerCell;
- (id)createSelectedItem;
- (BOOL)dd_isLinkNode;
- (BOOL)dd_searchForLinkEndNode:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteBackward;
- (id)description;
- (void)detachInteractionAssistant;
- (void)detachSelectionView;
- (BOOL)dispatchEvent:(id)arg1;
- (id)editingDelegate;
- (id)enclosingDocument;
- (id)enclosingElementIncludingSelf;
- (id)endOfDocument;
- (id)endPosition;
- (void)endSelectionChange;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (void)extendCurrentSelection:(NSInteger)arg1;
- (void)finalize;
- (id)findExplodedTextNodeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)firstChild;
- (id)firstDescendantOfAboutTheSameWidthOrHeight;
- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withDescentDirection:(NSInteger)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)fontForCaretSelection;
- (void)handleKeyWebEvent:(id)arg1;
- (BOOL)hasAttributes;
- (BOOL)hasChildNodes;
- (BOOL)hasContent;
- (BOOL)hasCustomLineHeight;
- (BOOL)hasSelection;
- (BOOL)hasText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hrefFrame;
- (id)hrefLabel;
- (id)hrefTarget;
- (id)hrefTitle;
- (id)hrefURL;
- (NSInteger)initialSelectionBehavior;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })innerFrame;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })innerFrameQuad;
- (id)inputDelegate;
- (id)insertBefore:(id)arg1 :(id)arg2;
- (id)insertBefore:(id)arg1 refChild:(id)arg2;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (BOOL)isAutoFillMode;
- (BOOL)isContentEditable;
- (BOOL)isDefaultNamespace:(id)arg1;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isEqualNode:(id)arg1;
- (BOOL)isLikelyToBeginPageLoad;
- (BOOL)isPosition:(id)arg1 atBoundary:(NSInteger)arg2 inDirection:(NSInteger)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(NSInteger)arg2 inDirection:(NSInteger)arg3;
- (BOOL)isSameBlock:(id)arg1;
- (BOOL)isSameNode:(id)arg1;
- (BOOL)isSecure;
- (BOOL)isSelectableBlock;
- (BOOL)isShowingPlaceholder;
- (BOOL)isSupported:(id)arg1 :(id)arg2;
- (BOOL)isSupported:(id)arg1 version:(id)arg2;
- (BOOL)isTextControl;
- (id)itemTitle;
- (NSInteger)keyboardType;
- (id)largerParent;
- (id)lastChild;
- (id)lastDescendantOfAboutTheSameWidthOrHeight;
- (id)lineBoxQuads;
- (id)lineBoxRects;
- (id)localName;
- (id)lookupNamespaceURI:(id)arg1;
- (id)lookupPrefix:(id)arg1;
- (id)markedText;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)markupString;
- (id)mf_commonAncestorWithNode:(id)arg1;
- (BOOL)mf_containsRichText;
- (void)mf_fixParagraphsAndQuotesFromMicrosoft;
- (BOOL)mf_isQuoteOrWithinQuote;
- (NSInteger)mf_quoteLevelDelta;
- (void)moveBackward:(NSUInteger)arg1;
- (void)moveDown;
- (void)moveForward:(NSUInteger)arg1;
- (void)moveLeft;
- (void)moveRight;
- (void)moveUp;
- (id)namespaceURI;
- (id)nextFocusNode;
- (id)nextSibling;
- (BOOL)nodeCanBecomeFirstResponder;
- (id)nodeName;
- (unsigned short)nodeType;
- (id)nodeValue;
- (void)normalize;
- (NSInteger)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)ownerDocument;
- (id)parentBlock;
- (id)parentElement;
- (id)parentNode;
- (void)populateCell:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(NSInteger)arg2 offset:(NSInteger)arg3;
- (id)positionFromPosition:(id)arg1 offset:(NSInteger)arg2;
- (id)positionFromPosition:(id)arg1 toBoundary:(NSInteger)arg2 inDirection:(NSInteger)arg3;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(NSInteger)arg2;
- (id)prefix;
- (id)previousFocusNode;
- (id)previousSibling;
- (id)rangeByExtendingCurrentSelection:(NSInteger)arg1;
- (id)rangeByMovingCurrentSelection:(NSInteger)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(NSInteger)arg2 inDirection:(NSInteger)arg3;
- (id)rangeOfContainingParagraph;
- (id)rangeOfContents;
- (id)rangeOfContents;
- (id)rangeOfEnclosingWord:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectContainingCaretSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForNSRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)rectsForNSRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)recursivelyRemoveMailAttributes;
- (id)removeChild:(id)arg1;
- (void)removeEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (BOOL)rendersAsBlock;
- (id)replaceChild:(id)arg1 :(id)arg2;
- (id)replaceChild:(id)arg1 oldChild:(id)arg2;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithText:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 replacementText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (BOOL)requiresKeyEvents;
- (NSInteger)returnKeyType;
- (void)selectAll;
- (BOOL)selectable;
- (id)selectedDOMRange;
- (id)selectedTextRange;
- (BOOL)selectionAtDocumentStart;
- (BOOL)selectionAtWordStart;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })selectionRange;
- (NSInteger)selectionState;
- (id)selectionView;
- (void)setBaseWritingDirection:(NSInteger)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)setContentsIsSingleValue:(BOOL)arg1;
- (void)setEditingDelegate:(id)arg1;
- (void)setInitialSelectionBehavior:(NSInteger)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)setMarkedText:(id)arg1;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setNodeValue:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setReturnKeyType:(NSInteger)arg1;
- (void)setSecure:(BOOL)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1 inset:(float)arg2;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextContent:(id)arg1;
- (void)setTextLoupeVisibility:(NSInteger)arg1;
- (void)setTextSuggestionDelegate:(id)arg1;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (void)setupPlaceholderTextIfNeeded;
- (BOOL)shouldEnableAutoShift;
- (BOOL)showsTapHighlight;
- (id)startPosition;
- (BOOL)strictlyContainsBlock:(id)arg1;
- (BOOL)strictlyContainsNode:(id)arg1;
- (id)tagName;
- (void)takeTraitsFrom:(id)arg1;
- (id)tapHighlightColor;
- (id)text;
- (id)textColorForCaretSelection;
- (id)textContent;
- (float)textHeight;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textInputView;
- (NSInteger)textLoupeVisibility;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textRects;
- (id)textSuggestionDelegate;
- (struct __CFCharacterSet { }*)textTrimmingSet;
- (id)tokenizer;
- (BOOL)touchCalloutEnabled;
- (void)unmarkText;
- (void)updateAutoscroll:(id)arg1;
- (void)updateSelection;
- (id)urlScheme;
- (id)webArchive;
- (id)webFrame;
- (id)wordContainingCaretSelection;
- (id)wordInRange:(id)arg1;
- (NSInteger)wordOffsetInRange:(id)arg1;
- (id)wordRangeContainingCaretSelection;

@end
