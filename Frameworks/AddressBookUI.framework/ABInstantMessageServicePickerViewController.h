/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, NSIndexPath, NSString;

@interface ABInstantMessageServicePickerViewController : ABPickerViewController {
    NSString *_customService;
    NSArray *_defaultServices;
    NSIndexPath *_selectedIndexPath;
    NSString *_selectedService;
}

@property(copy) NSString *selectedService;

- (void)dealloc;
- (id)init;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)selectedService;
- (void)setSelectedService:(id)arg1;
- (void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end
