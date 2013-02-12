/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent, EKEventDetailView;

@interface EKEventDetailCell : UITableViewCell {
    BOOL _editable;
    EKEvent *_event;
    EKEventDetailView *_owner;
}

@property EKEventDetailView *owner;
@property(readonly) BOOL isEditable;

- (void)eventDidChange;
- (void)eventWillChange;
- (BOOL)hasCustomLayout;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(NSInteger)arg3;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2;
- (BOOL)isEditable;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;
- (id)owner;
- (void)setEvent:(id)arg1;
- (void)setNeedsUpdate;
- (void)setOwner:(id)arg1;
- (BOOL)update;
- (id)viewControllerForCell;

@end
