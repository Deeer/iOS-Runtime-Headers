/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKMessage;

@interface CKMessagePart : NSObject {
    NSUInteger _flags;
    NSUInteger _height;
    CKMessage *_parentMessage;
    NSUInteger _rowID;
}

@property(readonly) NSData *highlightData;
@property CKMessage *parentMessage;
@property(readonly) NSUInteger rowID;

+ (id)_assembleTextPartFromRange:(id)arg1;
+ (id)_newPartForPartRepresentation:(id)arg1 previewPartRepresentation:(id)arg2;
+ (id)_newPartsForNode:(id)arg1 resources:(id)arg2;
+ (id)copyDeletedPart;
+ (id)copyDetachedMessageParts:(id)arg1;
+ (id)copyMessagePartsFromArrayRepresentation:(id)arg1;
+ (id)copyMessagePartsFromComposition:(id)arg1;
+ (id)copyUnknownPart;

- (id)composeData;
- (id)composeImage;
- (void)copyToPasteboard;
- (void)dealloc;
- (id)detachedCopy;
- (void)getUIHeight:(NSUInteger*)arg1 flags:(NSUInteger*)arg2;
- (id)highlightData;
- (id)image;
- (id)imageData;
- (id)imageFilename;
- (BOOL)isDisplayable;
- (BOOL)isEqual:(id)arg1;
- (id)mediaObject;
- (id)parentMessage;
- (id)previewData;
- (id)previewImage;
- (id)previewText;
- (unsigned long)rowID;
- (void)setParentMessage:(id)arg1;
- (void)setRowID:(unsigned long)arg1;
- (void)setUIHeight:(unsigned long)arg1 flags:(unsigned long)arg2 store:(BOOL)arg3;
- (id)text;
- (NSInteger)type;

@end
