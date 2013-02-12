/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKUserLocationInternal;

@interface MKUserLocation : NSObject <MKAnnotation> {
    MKUserLocationInternal *_internal;
}

@property(readonly) CLLocation *location;
@property(retain) NSString *subtitle;
@property(retain) NSString *title;
@property(readonly) ? coordinate;
@property(getter=isUpdating,readonly) BOOL updating;

- (void)_updateCoordinate;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)fixedLocation;
- (id)init;
- (BOOL)isEqualToLocation:(id)arg1;
- (BOOL)isUpdating;
- (id)location;
- (id)predictedLocation;
- (void)reset;
- (id)searchResult;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setFixedLocation:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPredictedLocation:(id)arg1;
- (void)setSource:(NSInteger)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdating:(BOOL)arg1;
- (id)shortDescription;
- (NSInteger)source;
- (id)subtitle;
- (double)timestamp;
- (id)title;

@end
