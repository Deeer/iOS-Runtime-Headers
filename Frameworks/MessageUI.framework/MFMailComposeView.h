/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeView : UITransitionView <MFComposeBodyFieldDelegate, MFComposeHeaderViewDelegate, MFDragContext, MFMailComposeContactsSearchControllerDelegate, UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate, UITextContentViewDelegate> {
    MFMailComposeRecipientView *_activeRecipientView;
    MFMailComposeRecipientView *_bccField;
    MFComposeBodyField *_bodyField;
    MFComposeScrollView *_bodyScroller;
    MFMailComposeRecipientView *_ccField;
    <MFComposeRecipientTextViewDelegate> *_composeRecipientViewDelegate;
    UIView *_contentView;
    struct CGSize { 
        float width; 
        float height; 
    } _currentContentSize;
    NSInvocation *_delayedPopoverInvocation;
    UIResponder *_firstResponderBeforeSheet;
    UIView *_fromAddressPickerBackgroundView;
    UIPickerView *_fromAddressPickerView;
    MFFromAddressViewController *_fromAddressViewController;
    MFComposeFromView *_fromField;
    unsigned int _hasAppeared;
    UIView *_headerView;
    MFComposeImageSizeView *_imageSizeField;
    unsigned int _isAnimationDisabled;
    unsigned int _isChangingRecipients;
    unsigned int _isClosing;
    unsigned int _isDraggingRecipients;
    unsigned int _isForEditing;
    unsigned int _isLoading;
    unsigned int _isRotating;
    unsigned int _isShowingFromAddressPickerWheel;
    unsigned int _isShowingPeoplePicker;
    float _keyboardIntersection;
    MFMailComposeRecipientView *_lastChangedRecipientView;
    <MFMailComposeViewDelegate> *_mailComposeViewDelegate;
    MFComposeMultiView *_multiField;
    unsigned int _notifyingBodyField;
    float _offsetBeforeSearch;
    unsigned int _options;
    UIResponder *_pinningResponder;
    <MFMailPopoverManagerDelegate> *_popoverOwner;
    MFMailComposeContactsSearchController *_searchController;
    NSArray *_searchResults;
    UITableView *_searchResultsTable;
    MFSearchResultsViewController *_searchViewController;
    UIView *_shadowView;
    unsigned int _shouldShowOptionalHeaders;
    MFComposeSubjectView *_subjectField;
    MFComposeTextContentView *_textView;
    MFMailComposeRecipientView *_toField;
    <MFMailComposeToFieldDelegate> *_toFieldDelegate;
}

@property (getter=isAnimationDisabled, nonatomic) BOOL animationDisabled;
@property (nonatomic, readonly) MFMailComposeRecipientView *bccField;
@property (nonatomic, readonly) MFComposeBodyField *bodyField;
@property (nonatomic, readonly) MFComposeScrollView *bodyScroller;
@property (nonatomic, readonly) MFComposeTextContentView *bodyTextView;
@property (nonatomic, readonly) MFMailComposeRecipientView *ccField;
@property (getter=isChangingRecipients, nonatomic) BOOL changingRecipients;
@property (nonatomic) <MFComposeRecipientTextViewDelegate> *composeRecipientDelegate;
@property (nonatomic) <MFMailComposeViewDelegate> *composeViewDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MFComposeFromView *fromField;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) MFComposeImageSizeView *imageSizeField;
@property (nonatomic) BOOL isForEditing;
@property (getter=isLoading, nonatomic) BOOL loading;
@property (nonatomic, readonly) MFComposeMultiView *multiField;
@property (nonatomic) <MFMailPopoverManagerDelegate> *popoverOwner;
@property (nonatomic, readonly) MFSearchResultsViewController *searchViewController;
@property (getter=isSearching, nonatomic, readonly) BOOL searching;
@property (getter=isShowingPeoplePicker, nonatomic) BOOL showingPeoplePicker;
@property (nonatomic, readonly) MFComposeSubjectView *subjectField;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MFMailComposeRecipientView *toField;
@property (nonatomic) <MFMailComposeToFieldDelegate> *toFieldDelegate;

- (void)_adjustHeaderFieldsPreferredContentSize;
- (void)_adjustScrollerContentSize;
- (void)_adjustScrollerForBottomView;
- (void)_cancelAnimations;
- (void)_cancelDelayedPopover;
- (void)_collectKeyViews:(id)arg1;
- (void)_finishUpRotationToInterfaceOrientation:(int)arg1;
- (id)_focusedRecipientView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForFromAddressPicker;
- (float)_heightForBottomView;
- (void)_layoutComposeHeaderViewsWithChangingHeader:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2 withPinFrame:(out struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)_layoutFromFieldWithChangingView:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_layoutMultiFieldWithChangingView:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_layoutSubviews:(BOOL)arg1;
- (void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize { float x1; float x2; })arg3 searchResultsWereDismissed:(BOOL)arg4;
- (void)_layoutSubviewsWithActiveRecipientView:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_multiFieldClicked;
- (void)_presentDelayedPopover;
- (id)_searchResultsTable;
- (void)_setupBodyFieldWithHeaderFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 enclosingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 changingView:(id)arg3 frameToPin:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 wasSearching:(BOOL)arg5;
- (void)_setupField:(id*)arg1 withLabel:(id)arg2 navTitle:(id)arg3 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)_updateKeyboardIntersection:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateOptionalHeaderVisibilityForceVisible:(BOOL)arg1;
- (void)automaticKeyboardFinishedAppearing:(id)arg1;
- (void)automaticKeyboardFinishedDisappearing:(id)arg1;
- (id)bccField;
- (void)beginSearchForText:(id)arg1 recipientView:(id)arg2;
- (id)bodyField;
- (id)bodyScroller;
- (id)bodyTextView;
- (id)bottomView;
- (void)cancelDelayedPopover;
- (void)cancelSearch;
- (id)ccField;
- (BOOL)chooseSelectedSearchResult;
- (void)clearSearchForRecipientView:(id)arg1 reflow:(BOOL)arg2 clear:(BOOL)arg3;
- (void)composeBodyFieldDidDraw:(id)arg1;
- (void)composeBodyFieldDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)composeBodyFieldFrameChanged:(id)arg1;
- (void)composeContactsSearchController:(id)arg1 didFindCorecipients:(id)arg2;
- (void)composeContactsSearchController:(id)arg1 didSortResults:(id)arg2;
- (void)composeContactsSearchController:(id)arg1 finishedWithResults:(BOOL)arg2;
- (void)composeHeaderViewClicked:(id)arg1;
- (id)composeRecipientDelegate;
- (id)composeViewDelegate;
- (void)dealloc;
- (void)didAppear;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)dismissSearchResults;
- (void)dragBeganInWindow:(id)arg1;
- (void)dragEnded;
- (id)dragScrollView;
- (id)dragWindow;
- (BOOL)endEditing:(BOOL)arg1;
- (void)findCorecipientsWithRecipientView:(id)arg1;
- (void)focusFirstResponderAfterRecipientView:(id)arg1;
- (void)fromAddressPickerNeedsToBeRefreshed;
- (void)fromAddressPickerPopoverWasDismissed;
- (id)fromField;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)imageSizeField;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 options:(unsigned int)arg2;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (BOOL)isAnimationDisabled;
- (BOOL)isChangingRecipients;
- (BOOL)isForEditing;
- (BOOL)isFromAddressPickerVisible;
- (BOOL)isKeyboardVisible;
- (BOOL)isLoading;
- (BOOL)isSearchResultsPopoverVisible;
- (BOOL)isSearching;
- (BOOL)isShowingPeoplePicker;
- (void)layoutForChangedComposeRecipientView:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)layoutSubviews;
- (void)menuDidHide;
- (id)multiField;
- (void)parentDidClose;
- (void)parentWillClose;
- (id)popoverOwner;
- (BOOL)presentSearchResults;
- (BOOL)presentSearchResults:(id)arg1;
- (void)removeFromSuperview;
- (void)resetContentSize;
- (void)restoreFirstResponder;
- (void)restoreFirstResponderWithKeyboardPinning:(BOOL)arg1;
- (void)saveFirstResponder;
- (void)saveFirstResponderWithKeyboardPinning:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchResultsPopoverWasDismissed;
- (id)searchViewController;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void)selectSearchResultsRecipientAtIndexPath:(id)arg1;
- (id)sendingAddressForComposeContactsSearchController:(id)arg1;
- (void)setAnimationDisabled:(BOOL)arg1;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)setChangingRecipients:(BOOL)arg1;
- (void)setComposeRecipientDelegate:(id)arg1;
- (void)setComposeViewDelegate:(id)arg1;
- (void)setFromAddressPickerVisible:(BOOL)arg1;
- (void)setFromAddressPickerVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setIsForEditing:(BOOL)arg1;
- (void)setKeyboardVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setLoading:(BOOL)arg1;
- (void)setPopoverOwner:(id)arg1;
- (void)setRecipientFieldsEditable:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setScrollsToTop:(BOOL)arg1;
- (void)setShowingPeoplePicker:(BOOL)arg1;
- (void)setToFieldDelegate:(id)arg1;
- (id)subjectField;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize { float x1; float x2; })arg2;
- (id)toField;
- (id)toFieldDelegate;
- (void)toggleImageSizeFieldIfNecessary;
- (void)updateOptionalHeaderVisibility;
- (void)viewDidBecomeFirstResponder:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willDisappear;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
