/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIView<SUCellConfigurationView>;

@interface SUCellConfiguration : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    unsigned int _isDeleteConfirmationVisible : 1;
    unsigned int _needsDisplay : 1;
    id _context;
    } _layoutSize;
    id _representedObject;
    UIView<SUCellConfigurationView> *_view;
}

@property UIView<SUCellConfigurationView> *view;
@property(retain) id context;
@property BOOL isDeleteConfirmationVisible;
@property CGSize layoutSize;
@property BOOL needsDisplay;
@property(readonly) NSUInteger numberOfImages;
@property(readonly) NSUInteger numberOfLabels;
@property(retain) id representedObject;

+ (void)_initializeSafeCategory;
+ (id)copyDefaultContext;
+ (float)minimumRowHeight;
+ (float)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (id)colorForLabelAtIndex:(NSUInteger)arg1 withModifiers:(NSUInteger)arg2;
- (id)context;
- (void)dealloc;
- (void)drawBackgroundWithModifiers:(NSUInteger)arg1;
- (void)drawWithModifiers:(NSUInteger)arg1;
- (id)fontForLabelAtIndex:(NSUInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForAccessoryViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForImageAtIndex:(NSUInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLabelAtIndex:(NSUInteger)arg1;
- (BOOL)getShadowColor:(id*)arg1 offset:(struct CGSize { float x1; float x2; }*)arg2 forLabelAtIndex:(NSUInteger)arg3 withModifiers:(NSUInteger)arg4;
- (id)imageAtIndex:(NSUInteger)arg1 withModifiers:(NSUInteger)arg2;
- (NSUInteger)indexOfLabelForPurchaseAnimation;
- (BOOL)isDeleteConfirmationVisible;
- (struct CGSize { float x1; float x2; })layoutSize;
- (BOOL)needsDisplay;
- (NSUInteger)numberOfImages;
- (NSUInteger)numberOfLabels;
- (void)reloadData;
- (id)representedObject;
- (void)setContext:(id)arg1;
- (void)setIsDeleteConfirmationVisible:(BOOL)arg1;
- (void)setLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setView:(id)arg1;
- (id)stringForLabelAtIndex:(NSUInteger)arg1;
- (NSInteger)textAlignmentForLabelAtIndex:(NSUInteger)arg1;
- (id)view;

@end
