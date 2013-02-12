/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKDayViewDataSource>, <EKDayViewDelegate>, CalendarModel, EKDayOccurrenceView, EKDayTimeView, EKDayViewContent, NSDate, UIImageView, UIScrollView, UIView;

@interface EKDayView : UIView <UIScrollViewDelegate, EKDayViewContentDelegate> {
    unsigned int _loadingOccurrences : 1;
    unsigned int _allowsOccurrenceSelection : 1;
    unsigned int _putSelectionOnTop : 1;
    unsigned int _showsBanner : 1;
    unsigned int _showsGrid : 1;
    unsigned int _shouldShowTimeMarkerOnToday : 1;
    unsigned int _dimsNonselectedOccurrences : 1;
    unsigned int _didLoad : 1;
    unsigned int _settingDate : 1;
    UIView *_bottomLeftBorderExtension;
    <EKDayViewDataSource> *_dataSource;
    EKDayViewContent *_dayContent;
    double _dayEnd;
    double _dayEndGMTOffset;
    double _dayStart;
    double _dayStartGMTOffset;
    <EKDayViewDelegate> *_delegate;
    CalendarModel *_model;
    NSInteger _outlineStyle;
    UIImageView *_overlayTimeFade;
    UIScrollView *_scroller;
    NSDate *_selectedDate;
    EKDayOccurrenceView *_selectedOccurrenceView;
    EKDayTimeView *_timeView;
    UIView *_topLeftBorderExtension;
}

@property <EKDayViewDataSource> *dataSource;
@property <EKDayViewDelegate> *delegate;
@property(copy) NSDate *selectedDate;
@property BOOL allowsOccurrenceSelection;
@property NSUInteger firstVisibleSecond;
@property BOOL showsSelectionOnTop;

- (id)_allOccurrenceViews;
- (void)_dimNonSelectedOccrrences:(BOOL)arg1;
- (id)_dimSubviews:(id)arg1 selectedOccurrence:(id)arg2;
- (void)_handleOccurrenceViewClick:(id)arg1;
- (void)_localeChanged;
- (double)_offsetTimeForDST:(double)arg1 timeZone:(struct __CFTimeZone { }*)arg2;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })_selectedDate;
- (BOOL)allowsOccurrenceSelection;
- (void)bringEventToFront:(id)arg1;
- (float)contentInset;
- (id)dataSource;
- (void)dayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSUInteger)firstVisibleSecond;
- (void)firstVisibleSecondChanged;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })fixedDate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 opaque:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)occurrenceClicked:(id)arg1;
- (void)relayoutDueToOrienationChange;
- (void)scrollEventsIntoViewAnimated:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })scrollOffset;
- (void)scrollToDate:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToOccurrence:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)scrollToSecond:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectEvent:(id)arg1;
- (id)selectedDate;
- (id)selectedOccurrenceView;
- (void)setAllowsOccurrenceDeselecting:(BOOL)arg1;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setDarkensSelection:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimsNonselectedOccurrences:(BOOL)arg1;
- (void)setEventsFillGrid:(BOOL)arg1;
- (void)setFirstVisibleSecond:(NSUInteger)arg1;
- (void)setFixedDate:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOccurrences:(id)arg1 scrollIntoView:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setOutlineStyle:(NSInteger)arg1;
- (void)setSelectedDate:(id)arg1;
- (void)setShouldShowTimeMarkerOnToday:(BOOL)arg1;
- (void)setShowsGrid:(BOOL)arg1;
- (void)setShowsLeftBorder:(BOOL)arg1;
- (void)setShowsSelectionOnTop:(BOOL)arg1;
- (void)setShowsTimeLine:(BOOL)arg1;
- (void)setShowsTimeMarker:(BOOL)arg1;
- (BOOL)showsSelectionOnTop;
- (id)viewForEvent:(id)arg1;

@end
