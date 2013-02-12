/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSDictionary, NSString, NSURL;

@interface MPTimeMarker : NSObject {
    double _duration;
    NSUInteger _index;
    NSInteger _markerType;
    NSDictionary *_metadata;
    id _thumbnail;
    double _time;
    NSString *_title;
    NSURL *_url;
}

@property(retain) NSDictionary *metadata;
@property(retain) NSString *title;
@property(retain) NSURL *url;
@property(readonly) double comparableTime;
@property double duration;
@property NSUInteger index;
@property(readonly) NSInteger markerType;
@property(readonly) double maxTime;
@property(retain) id thumbnail;
@property double time;

- (double)comparableTime;
- (void)dealloc;
- (id)description;
- (double)duration;
- (NSUInteger)index;
- (id)initWithMarkerType:(NSInteger)arg1;
- (NSInteger)markerType;
- (double)maxTime;
- (id)metadata;
- (void)setDuration:(double)arg1;
- (void)setIndex:(NSUInteger)arg1;
- (void)setMetadata:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTime:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)thumbnail;
- (double)time;
- (id)title;
- (id)url;
- (id)urlTitleTrimmingCharacterSet;

@end
