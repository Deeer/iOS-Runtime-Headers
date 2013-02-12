/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, NSMutableArray;

@interface ABMultiCellContentView_Address : ABMultiCellContentView_DisplayAlternate {
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    NSUInteger _entryFieldIndexOfFirstStreetField;
    NSArray *_lineInfos;
    NSMutableArray *_lineSubviews;
    } _streetRange;
    NSMutableArray *_verticalDividers;
}

+ (NSInteger)calculateStreetRowsForText:(id)arg1;
+ (struct CGSize { float x1; float x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { float x1; float x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;
+ (id)lineInfosForPropertyGroup:(id)arg1 info:(id)arg2;
+ (NSUInteger)rowsForPropertyGroup:(id)arg1 info:(id)arg2;
+ (id)streetTextForPropertyGroup:(id)arg1 info:(id)arg2;

- (void)addStreetFieldAnimated:(BOOL)arg1;
- (void)dealloc;
- (NSUInteger)lineIndexOfStreetField:(id)arg1;
- (id)pickerView;
- (id)propertyKeyForTag:(NSInteger)arg1;
- (void)reload;
- (void)reloadFromModel;
- (void)removeStreetFieldAtIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)removeTextFieldAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPropertyGroupInfo:(id)arg1;
- (id)streetFieldAtLineIndex:(NSUInteger)arg1;
- (NSInteger)tagForPropertyKey:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;

@end
