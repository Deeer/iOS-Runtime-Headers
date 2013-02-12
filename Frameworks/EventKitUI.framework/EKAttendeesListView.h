/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent, NSArray, UIImage;

@interface EKAttendeesListView : UITableView <UITableViewDelegate, UITableViewDataSource> {
    id _attendeeDelegate;
    NSArray *_attendees;
    UIImage *_attendingImage;
    EKEvent *_event;
    UIImage *_maybeImage;
    UIImage *_notAttendingImage;
    UIImage *_pendingImage;
    BOOL _shouldShowStatusImages;
}

+ (void)_initializeSafeCategory;

- (id)_attendingImage;
- (id)_imageForStatus:(NSInteger)arg1;
- (id)_maybeImage;
- (id)_notAttendingImage;
- (id)_pendingImage;
- (BOOL)canSeeAttendeeStatuses:(id)arg1;
- (void)dealloc;
- (void)eventModified:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 event:(id)arg2;
- (void)loadAttendees;
- (void)setAttendeeDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;

@end
