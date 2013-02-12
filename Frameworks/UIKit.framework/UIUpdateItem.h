/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSIndexPath;

@interface UIUpdateItem : NSObject {
    NSInteger _action;
    NSInteger _animation;
    NSIndexPath *_indexPath;
    float _offset;
}

@property(readonly) NSIndexPath *indexPath;
@property(readonly) NSInteger action;
@property(readonly) NSInteger animation;
@property float offset;

- (id)_actionDescription;
- (NSInteger)action;
- (NSInteger)animation;
- (NSInteger)compareIndexPaths:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)indexPath;
- (id)initWithAction:(NSInteger)arg1 forIndexPath:(id)arg2 animation:(NSInteger)arg3;
- (NSInteger)inverseCompareIndexPaths:(id)arg1;
- (BOOL)isSectionOperation;
- (float)offset;
- (void)setOffset:(float)arg1;

@end
