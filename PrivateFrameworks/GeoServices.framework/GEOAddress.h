/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOAddress : PBCodable {
    NSMutableArray *_components;
    NSMutableArray *_formattedAddressLines;
}

@property(retain) NSMutableArray *components;
@property(retain) NSMutableArray *formattedAddressLines;
@property(readonly) NSInteger componentsCount;
@property(readonly) NSInteger formattedAddressLinesCount;

- (void)addComponent:(id)arg1;
- (void)addFormattedAddressLine:(id)arg1;
- (id)componentAtIndex:(NSUInteger)arg1;
- (id)components;
- (NSInteger)componentsCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formattedAddressLineAtIndex:(NSUInteger)arg1;
- (id)formattedAddressLines;
- (NSInteger)formattedAddressLinesCount;
- (id)init;
- (BOOL)readFrom:(id)arg1;
- (void)setComponent:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setComponents:(id)arg1;
- (void)setFormattedAddressLine:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setFormattedAddressLines:(id)arg1;
- (void)writeTo:(id)arg1;

@end
