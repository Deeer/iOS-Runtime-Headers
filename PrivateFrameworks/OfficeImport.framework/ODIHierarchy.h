/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, ODIState;

@interface ODIHierarchy : NSObject {
    NSInteger mMaxMappableTreeDepth;
    NSMutableDictionary *mNodeInfoMap;
    ODIState *mState;
    NSInteger mType;
}

+ (BOOL)mapIdentifier:(id)arg1 state:(id)arg2;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsOfNode:(id)arg1;
- (void)createInfoForNode:(id)arg1 depth:(NSInteger)arg2;
- (void)dealloc;
- (id)infoForNode:(id)arg1;
- (id)initWithType:(NSInteger)arg1 state:(id)arg2;
- (void)map;
- (void)mapLogicalBoundsWithXRanges:(const struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)arg1;
- (void)mapNode:(id)arg1;
- (struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)mapRangesForNode:(id)arg1;
- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(NSInteger)arg2 parentXOffset:(float)arg3;

@end
