/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class PreferencesMultiLineCell, UITableViewCell;

@interface EKEventNotesEditItem : EKEventEditItem {
    PreferencesMultiLineCell *_multiLineCell;
    UITableViewCell *_simpleCell;
}

- (id)cellForSubitemAtIndex:(NSInteger)arg1;
- (void)dealloc;
- (float)defaultCellHeightForSubitemAtIndex:(NSInteger)arg1 forWidth:(float)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(NSInteger)arg2;
- (BOOL)eventEditItemViewControllerCommit:(id)arg1;
- (void)reset;

@end
