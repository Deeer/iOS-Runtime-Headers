/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKReverseGeocodeCache : MKCache {
}

+ (id)sharedCache;

- (void)_handleMemoryWarning:(id)arg1;
- (void)addPlacemark:(id)arg1 forCoordinate:(struct { double x1; double x2; })arg2;
- (void)clear;
- (void)dealloc;
- (id)initWithCapacity:(NSUInteger)arg1 maxCapacity:(NSUInteger)arg2;
- (id)placemarkForCoordinate:(struct { double x1; double x2; })arg1;

@end
