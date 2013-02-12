/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDDataLabel, CHDMarker, OADGraphicProperties;

@interface CHDDataValueProperties : NSObject <EDKeyedObject> {
    CHDDataLabel *mDataLabel;
    NSUInteger mDataValueIndex;
    OADGraphicProperties *mGraphicProperties;
    CHDMarker *mMarker;
}

+ (id)dataValueProperties;

- (id)dataLabel;
- (NSUInteger)dataValueIndex;
- (void)dealloc;
- (id)graphicProperties;
- (id)init;
- (NSUInteger)key;
- (id)marker;
- (void)setDataLabel:(id)arg1;
- (void)setDataValueIndex:(NSUInteger)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setMarker:(id)arg1;
- (id)shallowCopyWithIndex:(NSInteger)arg1;

@end
