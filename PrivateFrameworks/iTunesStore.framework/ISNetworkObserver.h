/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSLock, NSMutableSet;

@interface ISNetworkObserver : NSObject <ISSingleton, SSDownloadQueueObserver> {
    double _lastNetworkTypeChangeTime;
    NSLock *_lock;
    NSInteger _networkType;
    NSInteger _networkUsageCount;
    struct __CFBag { } *_networkUsageCountByAsset;
    NSMutableSet *_observedDownloadQueues;
    struct __SCNetworkReachability { } *_reachability;
}

@property(readonly) NSString *connectionTypeHeader;
@property(readonly) double lastNetworkTypeChangeTime;
@property NSInteger networkType;
@property(getter=isUsingNetwork,readonly) BOOL usingNetwork;
@property(getter=isWiFiEnabled,readonly) BOOL wifiEnabled;

+ (void)set3GEnabled:(BOOL)arg1;
+ (void)setAirplaneModeEnabled:(BOOL)arg1;
+ (void)setSharedInstance:(id)arg1;
+ (void)setWiFiEnabled:(BOOL)arg1;
+ (id)sharedInstance;

- (void)_dataStatusChangedNotification:(id)arg1;
- (NSInteger)_networkTypeFromDataIndicator:(id)arg1;
- (BOOL)_ntsIsUsingNetwork;
- (void)_postUsageChangedToValue:(BOOL)arg1;
- (void)_reloadNetworkType;
- (void)_startReachability;
- (void)_telephonyObserverAvailableNotification:(id)arg1;
- (void)beginObservingDownloadQueue:(id)arg1;
- (void)beginUsingNetwork;
- (void)beginUsingNetworkForAssetType:(NSInteger)arg1;
- (id)connectionTypeHeader;
- (id)copyActiveAssetTypes;
- (void)dealloc;
- (void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2;
- (void)downloadQueueNetworkUsageChanged:(id)arg1;
- (void)endObservingDownloadQueue:(id)arg1;
- (void)endUsingNetwork;
- (void)endUsingNetworkForAssetType:(NSInteger)arg1;
- (id)init;
- (BOOL)isUsingNetwork;
- (BOOL)isWiFiEnabled;
- (double)lastNetworkTypeChangeTime;
- (NSInteger)networkType;
- (void)reloadNetworkType;
- (void)setNetworkType:(NSInteger)arg1;

@end
