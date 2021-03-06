/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMediaSelectionOption : NSObject <NSCopying> {
    AVMediaSelectionOptionInternal *_mediaSelectionOption;
}

@property (nonatomic, readonly) NSArray *availableMetadataFormats;
@property (nonatomic, readonly) NSArray *commonMetadata;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *extendedLanguageTag;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSString *localizedDisplayName;
@property (nonatomic, readonly) NSArray *mediaSubTypes;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) BOOL mpIsAC3;
@property (nonatomic, readonly) BOOL mpIsSDH;
@property (getter=isPlayable, nonatomic, readonly) BOOL playable;
@property (nonatomic, readonly) AVAssetTrack *track;
@property (nonatomic, readonly) int trackID;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(BOOL)arg4;

- (id)_ancillaryDescription;
- (id)_groupID;
- (id)_groupMediaType;
- (BOOL)_isDesignatedDefault;
- (id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(BOOL)arg2;
- (id)_title;
- (id)associatedExtendedLanguageTag;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)associatedPersistentIDs;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (id)displayName;
- (id)displayNameWithLocale:(id)arg1;
- (id)displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)arg2;
- (BOOL)displaysNonForcedSubtitles;
- (id)extendedLanguageTag;
- (id)group;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (id)init;
- (BOOL)isPlayable;
- (id)locale;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (id)optionID;
- (id)outOfBandIdentifier;
- (id)outOfBandSource;
- (id)propertyList;
- (id)track;
- (int)trackID;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (int)_caseInsensitiveCompare:(id)arg1;
- (id)_extendedLanguageTagOrUndetermined;
- (BOOL)_isAC3;
- (id)localizedDisplayName;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (BOOL)mpIsAC3;
- (BOOL)mpIsSDH;

@end
