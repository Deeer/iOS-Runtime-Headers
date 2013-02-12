/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableDictionary;

@interface CalendarFilterEditModel : CalendarFilter {
    NSMutableDictionary *_calendars;
    BOOL _showingAll;
}

- (void)addCalendar:(id)arg1;
- (void)addCalendars:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CalFilter { }*)createFilterForDatabase:(struct CalDatabase { }*)arg1;
- (void)dealloc;
- (id)initWithFilter:(struct CalFilter { }*)arg1;
- (BOOL)isCalendarSelected:(id)arg1;
- (BOOL)isShowingAll;
- (void)removeCalendar:(id)arg1;
- (void)removeCalendars:(id)arg1;
- (id)selectedCalendars;
- (void)setSelectedCalendars:(id)arg1;
- (void)setShowingAll:(BOOL)arg1;

@end
