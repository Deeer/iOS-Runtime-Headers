/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIKeyboard, UINavigationBar, UIPreferencesTextTableCell, UIView;

@interface ABSimpleTextInputLayer : UIView <ABStyleProviding> {
    UIView *_contentView;
    id _delegate;
    UIPreferencesTextTableCell *_inputField;
    UIKeyboard *_keyboard;
    BOOL _lastHasText;
    UINavigationBar *_navBar;
}

- (void)_didEndPickingAndConfirmed:(BOOL)arg1 animate:(BOOL)arg2;
- (void)_textValueChanged:(id)arg1;
- (void)back:(BOOL)arg1 save:(BOOL)arg2;
- (BOOL)becomeFirstResponder;
- (void)buildUI;
- (void)cancelButtonClicked:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)doneButtonClicked:(id)arg1;
- (void)fieldEndedEditing:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(id)arg2;
- (void)movedFromSuperview:(id)arg1;
- (void)navigationBar:(id)arg1 buttonClicked:(NSInteger)arg2;
- (id)newEntryFieldForStringValue:(id)arg1;
- (void)reload;
- (void)setDelegate:(id)arg1;
- (void)setLocalizedNavigationTitle:(id)arg1;
- (id)styleProvider;
- (id)text;

@end
