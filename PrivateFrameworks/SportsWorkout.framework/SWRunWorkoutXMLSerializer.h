/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWRunWorkoutXMLSerializer : NSObject {
}

+ (NSInteger)__eventTypeForUserInteractionSnapshotEvent:(id)arg1;
+ (id)__formatPace:(NSUInteger)arg1;
+ (id)__formatTimeInterval:(NSUInteger)arg1;
+ (void)__serializeWorkoutDict:(id)arg1 toURL:(id)arg2 summaryOnly:(BOOL)arg3;
+ (id)__snapshotDictArrayForSnapshotVector:(struct vector<ISL::IPodSportsWorkout_Run::Snapshot,std::allocator<ISL::IPodSportsWorkout_Run::Snapshot> > { struct _Vector_impl { struct Snapshot {} *x_1_1_1; struct Snapshot {} *x_1_1_2; struct Snapshot {} *x_1_1_3; } x1; })arg1;
+ (id)dictionaryForWorkoutFileAtURL:(id)arg1;
+ (void)serializeSummaryForWorkoutDict:(id)arg1 toURL:(id)arg2;
+ (void)serializeWorkoutDict:(id)arg1 toURL:(id)arg2;
+ (void)serializeiTunesPreferencesDict:(id)arg1 toURL:(id)arg2;

@end
