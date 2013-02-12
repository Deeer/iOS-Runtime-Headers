/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTableCellProperties, OADTextBody;

@interface OADTableCell : NSObject {
    NSInteger mGridSpan;
    BOOL mHorzMerge;
    NSInteger mLeftColumn;
    OADTableCellProperties *mProperties;
    NSInteger mRowSpan;
    OADTextBody *mTextBody;
    NSInteger mTopRow;
    BOOL mVertMerge;
}

- (void)dealloc;
- (NSInteger)gridSpan;
- (BOOL)horzMerge;
- (id)init;
- (NSInteger)leftColumn;
- (BOOL)merge:(NSInteger)arg1;
- (id)properties;
- (NSInteger)rowSpan;
- (void)setGridSpan:(NSInteger)arg1;
- (void)setHorzMerge:(BOOL)arg1;
- (void)setLeftColumn:(NSInteger)arg1;
- (void)setProperties:(id)arg1;
- (void)setRowSpan:(NSInteger)arg1;
- (void)setTextBody:(id)arg1;
- (void)setTopRow:(NSInteger)arg1;
- (void)setVertMerge:(BOOL)arg1;
- (NSInteger)spanAlongDir:(NSInteger)arg1;
- (id)textBody;
- (NSInteger)topRow;
- (BOOL)vertMerge;

@end
