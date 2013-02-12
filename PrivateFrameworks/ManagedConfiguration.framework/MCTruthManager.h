/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSDictionary, NSMutableDictionary;

@interface MCTruthManager : NSObject {
    NSMutableDictionary *_clientTruth;
    NSDictionary *_clientTypeLoaders;
    struct __CFDictionary { } *_clientTypeToLoaderClass;
    struct __CFDictionary { } *_clientTypeToLoaderSelector;
    NSMutableDictionary *_defaultTruth;
    NSDictionary *_effectiveUserSettings;
    struct dispatch_queue_s { } *_nagMetaQueue;
    NSMutableDictionary *_profileTruth;
    NSInteger _senderPID;
    struct dispatch_queue_s { } *_syncQueue;
    NSMutableDictionary *_truth;
    NSDictionary *_userSettings;
}

@property NSInteger senderPID;

+ (BOOL)_isDictionary:(id)arg1 differentFromDictionary:(id)arg2;
+ (void)_setPathsTruthFilePath:(id)arg1 defaultTruthFilePath:(id)arg2 clientTypeLoadersFilePath:(id)arg3 profileTruthFilePath:(id)arg4 clientTruthFilePath:(id)arg5 userSettingsFilePath:(id)arg6 effectiveUserSettingsFilePath:(id)arg7;
+ (BOOL)boolSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (NSInteger)boolSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (id)filterRestrictionDictionaryForPublicUse:(id)arg1;
+ (id)objectForFeature:(id)arg1 withTruthDictionary:(id)arg2;
+ (BOOL)restrictedBool:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (NSInteger)restrictedBoolForFeature:(id)arg1 withTruthDictionary:(id)arg2;
+ (BOOL)restrictedValue:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (id)sharedManager;
+ (id)truthAfterApplyingTruthDictionary:(id)arg1 toTruthDictionary:(id)arg2 outChangeDetected:(BOOL*)arg3 outError:(id*)arg4;
+ (id)truthWithCurrentTruth:(id)arg1 defaultTruth:(id)arg2 profileTruth:(id)arg3 clientTruth:(id)arg4 outTruthChanged:(BOOL*)arg5 outError:(id*)arg6;
+ (id)valueForFeature:(id)arg1 withTruthDictionary:(id)arg2;
+ (BOOL)valueSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (id)valueSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;

- (id)_clientTruth;
- (id)_clientTruthForClientUUID:(id)arg1;
- (id)_clientTypeForClientUUID:(id)arg1;
- (id)_clientTypeLoaders;
- (id)_currentTruthDictionary;
- (id)_defaultTruthDictionary;
- (id)_effectiveUserSettings;
- (id)_init;
- (id)_liveClientUUIDsForClientType:(id)arg1;
- (id)_profileTruth;
- (BOOL)_recomputeEffectiveUserSettings;
- (BOOL)_setAllClientTruths:(id)arg1 outTruthChanged:(BOOL*)arg2 outEffectiveSettingsChanged:(BOOL*)arg3 outError:(id*)arg4;
- (BOOL)_setEffectiveUserSettings:(id)arg1;
- (void)_setTruth:(id)arg1;
- (BOOL)_setUserSettings:(id)arg1;
- (id)_userSettings;
- (id)allClientUUIDsForClientType:(id)arg1;
- (id)clientTruth;
- (id)clientTruthForClientUUID:(id)arg1;
- (id)combinedProfileRestrictions;
- (id)currentTruthDictionary;
- (void)dealloc;
- (id)defaultTruthDictionary;
- (id)description;
- (id)effectiveParametersForBoolSetting:(id)arg1;
- (id)effectiveParametersForValueSetting:(id)arg1;
- (NSInteger)effectiveRestrictedBoolForSetting:(id)arg1;
- (id)effectiveUserSettings;
- (id)effectiveValueForSetting:(id)arg1;
- (void)invalidateSettings;
- (void)invalidateTruth;
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isValueSettingLockedDownByRestrictions:(id)arg1;
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1;
- (id)objectForFeature:(id)arg1;
- (id)potentialTruthAfterApplyingTruthDictionary:(id)arg1 outChangeDetected:(BOOL*)arg2 outError:(id*)arg3;
- (id)profileTruth;
- (void)recomputeNagMetadata;
- (void)removeBoolSetting:(id)arg1;
- (void)removeOrphanedClientTruths;
- (void)removeValueSetting:(id)arg1;
- (void)resetAllSettingsToDefaults;
- (NSInteger)restrictedBoolForFeature:(id)arg1;
- (NSInteger)senderPID;
- (BOOL)setAllClientTruths:(id)arg1 outTruthChanged:(BOOL*)arg2 outEffectiveSettingsChanged:(BOOL*)arg3 outError:(id*)arg4;
- (BOOL)setClientTruth:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarning:(id)arg5 outTruthChanged:(BOOL*)arg6 outEffectiveSettingsChanged:(BOOL*)arg7 outError:(id*)arg8;
- (BOOL)setParametersForSettingsByType:(id)arg1;
- (BOOL)setProfileTruth:(id)arg1 outTruthChanged:(BOOL*)arg2 outEffectiveSettingsChanged:(BOOL*)arg3 outError:(id*)arg4;
- (void)setSenderPID:(NSInteger)arg1;
- (void)setShowNagMessage;
- (id)userSettings;
- (id)valueForFeature:(id)arg1;

@end
