/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSString;

@interface ADAdImage : PBCodable {
    NSInteger _dpi;
    BOOL _hasXOffset;
    BOOL _hasYOffset;
    NSInteger _height;
    NSString *_url;
    NSInteger _width;
    NSInteger _xOffset;
    NSInteger _yOffset;
}

@property(retain) NSString *url;
@property NSInteger dpi;
@property(readonly) BOOL hasXOffset;
@property(readonly) BOOL hasYOffset;
@property NSInteger height;
@property NSInteger width;
@property NSInteger xOffset;
@property NSInteger yOffset;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (NSInteger)dpi;
- (BOOL)hasXOffset;
- (BOOL)hasYOffset;
- (NSInteger)height;
- (id)init;
- (BOOL)readFrom:(id)arg1;
- (void)setDpi:(NSInteger)arg1;
- (void)setHeight:(NSInteger)arg1;
- (void)setUrl:(id)arg1;
- (void)setWidth:(NSInteger)arg1;
- (void)setXOffset:(NSInteger)arg1;
- (void)setYOffset:(NSInteger)arg1;
- (id)url;
- (NSInteger)width;
- (void)writeTo:(id)arg1;
- (NSInteger)xOffset;
- (NSInteger)yOffset;

@end
