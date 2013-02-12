/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSData, NSString, UILabel, UIStatusBarLayoutManager;

@interface UIStatusBarForegroundView : UIView {
    UILabel *_doubleHeightLabel;
    NSInteger _foregroundStyle;
    NSInteger _ignoreDataLevel;
    BOOL _itemIsEnabled[20];
    UIStatusBarLayoutManager *_layoutManagers[3];
    NSInteger _pendedActions;
    NSData *_pendedData;
    BOOL _performedStyleChangeReflow;
    NSString *_statusString;
}

@property(readonly) NSInteger foregroundStyle;

- (void)_cleanUpAfterDataChange;
- (void)_cleanUpAfterSimpleReflow;
- (void)_computeVisibleItems:(id*)arg1 eitherSideItems:(id)arg2;
- (void)_reflowItemViewsWithDuration:(double)arg1 suppressCenterAnimation:(BOOL)arg2;
- (BOOL)_tryToPlaceItem:(id)arg1 inItemArray:(id)arg2 layoutManager:(id)arg3 roomRemaining:(float*)arg4 allowSwap:(BOOL)arg5 swappedItem:(id*)arg6;
- (void)dealloc;
- (NSInteger)foregroundStyle;
- (BOOL)ignoringData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 foregroundStyle:(NSInteger)arg2;
- (void)reflowItemViews:(BOOL)arg1 suppressCenterAnimation:(BOOL)arg2;
- (void)setStatusBarData:(struct { BOOL x1[20]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; NSInteger x15; NSInteger x16; unsigned int x17 : 1; BOOL x18[256]; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; }*)arg1 actions:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)startIgnoringData;
- (void)stopIgnoringData:(BOOL)arg1;

@end
