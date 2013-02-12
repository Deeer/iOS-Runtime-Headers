/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStyleProvider>, ABServerSearchController;

@interface ABServerSearchViewController : ABAbstractViewController <ABServerSearchControllerDelegate> {
    ABServerSearchController *_serverSearchController;
    <ABStyleProvider> *_styleProvider;
}

@property(retain) <ABStyleProvider> *styleProvider;

- (void)dealloc;
- (id)initWithModel:(id)arg1 styleProvider:(id)arg2;
- (id)initWithModel:(id)arg1;
- (void)loadView;
- (id)serverSearchControllerStyleProvider:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
- (id)styleProvider;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
