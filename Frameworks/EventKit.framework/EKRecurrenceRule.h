/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKRecurrenceEnd, NSArray, NSDate;

@interface EKRecurrenceRule : NSObject {
    NSDate *_cachedEndDate;
    NSArray *_daysOfTheMonth;
    NSArray *_daysOfTheWeek;
    NSArray *_daysOfTheYear;
    NSUInteger _dirtyFlags;
    NSInteger _firstDayOfTheWeek;
    NSInteger _frequency;
    NSInteger _interval;
    NSArray *_monthsOfTheYear;
    id _owner;
    EKRecurrenceEnd *_recurrenceEnd;
    NSArray *_setPositions;
    NSArray *_weeksOfTheYear;
}

@property(readonly) NSString *calendarIdentifier;
@property(readonly) NSArray *daysOfTheMonth;
@property(readonly) NSArray *daysOfTheWeek;
@property(readonly) NSArray *daysOfTheYear;
@property(readonly) NSArray *monthsOfTheYear;
@property(copy) EKRecurrenceEnd *recurrenceEnd;
@property(readonly) NSArray *setPositions;
@property(readonly) NSArray *weeksOfTheYear;
@property(readonly) NSInteger firstDayOfTheWeek;
@property NSInteger frequency;
@property NSInteger interval;

+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3;
+ (id)iCalendarValueFromDayOfTheWeek:(NSUInteger)arg1;
+ (id)iCalendarValueFromRecurrenceType:(NSInteger)arg1;
+ (id)recurrenceRuleWithType:(NSInteger)arg1 interval:(NSUInteger)arg2 end:(id)arg3;

- (id)cachedEndDate;
- (id)calendarIdentifier;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)daysOfTheYear;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (NSInteger)firstDayOfTheWeek;
- (NSInteger)frequency;
- (struct { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; NSInteger x5; double x6; })gregorianUnits;
- (NSUInteger)hash;
- (id)init;
- (id)initRecurrenceWithFrequency:(NSInteger)arg1 interval:(NSInteger)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;
- (id)initRecurrenceWithFrequency:(NSInteger)arg1 interval:(NSUInteger)arg2 end:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecurrenceRef:(void*)arg1;
- (NSInteger)interval;
- (BOOL)isDirty;
- (BOOL)isEqual:(id)arg1;
- (id)monthsOfTheYear;
- (id)owner;
- (id)recurrenceEnd;
- (void)setCachedEndDate:(id)arg1;
- (void)setFrequency:(NSInteger)arg1;
- (void)setInterval:(NSInteger)arg1;
- (void)setOwner:(id)arg1;
- (id)setPositions;
- (void)setRecurrenceEnd:(id)arg1;
- (BOOL)shouldPinMonthDays;
- (id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2;
- (void)updateRecurrenceRef:(void*)arg1 ignoreDirty:(BOOL)arg2;
- (id)weeksOfTheYear;

@end
