/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;

@interface PBSlideState : NSObject {
    NSMutableDictionary *mBuildOrderMap;
    NSUInteger mCurrentGroupId;
}

- (void)addBuild:(id)arg1 order:(NSUInteger)arg2;
- (id)buildOrderMap;
- (void)dealloc;
- (NSUInteger)generateGroupId;
- (id)init;
- (void)reset;

@end
