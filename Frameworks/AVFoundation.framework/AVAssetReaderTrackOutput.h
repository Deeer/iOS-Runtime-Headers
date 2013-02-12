/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetReaderTrackOutputInternal;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;
}

@property(readonly) NSDictionary *outputSettings;
@property(readonly) AVAssetTrack *track;

+ (id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2;

- (id)_asset;
- (BOOL)_enableTrackExtractionReturningError:(id*)arg1;
- (void)_setAudioVolumeCurve:(id)arg1;
- (id)audioParameters;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithTrack:(id)arg1 outputSettings:(id)arg2;
- (id)mediaType;
- (id)outputSettings;
- (void)setAudioParameters:(id)arg1;
- (id)track;

@end
