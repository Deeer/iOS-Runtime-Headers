/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSData, NSString;

@interface MLSQLCodeBinding : NSObject {
    union $_617 { 
        NSString *stringValue; 
        NSData *dataValue; 
        NSUInteger uint32Value; 
        unsigned long long uint64Value; 
        long long int64Value; 
        long long rowidValue; 
    } _value;
    NSUInteger _valueType;
}

+ (id)bindingWithCPRecordID:(NSInteger)arg1 store:(struct CPRecordStore { }*)arg2;
+ (id)bindingWithDataValue:(id)arg1 noCopy:(BOOL)arg2;
+ (id)bindingWithSInt64:(long long)arg1;
+ (id)bindingWithStringValue:(id)arg1;
+ (id)bindingWithUInt32:(NSUInteger)arg1;
+ (id)bindingWithUInt64:(unsigned long long)arg1;
+ (id)placeholder;

- (void)bindToSQLStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 bindingIndex:(NSUInteger)arg2;
- (id)bindableStringValue;
- (void)dealloc;
- (id)description;
- (BOOL)isPlaceholder;

@end
