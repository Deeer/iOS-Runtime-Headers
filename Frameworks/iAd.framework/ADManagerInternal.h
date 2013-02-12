/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADBannerView, ADRemoteViewController, ADTargetingData, CPDistributedMessagingCenter, NSDictionary, NSMutableDictionary, NSString, UIViewController;

@interface ADManagerInternal : NSObject {
    struct { 
        unsigned int inAdSheetSession : 1; 
        unsigned int serverReachable : 1; 
        unsigned int shouldDismissRemoteViewController : 1; 
        unsigned int didResignActiveUnderLock : 1; 
    ADBannerView *_activeBanner;
    NSMutableDictionary *_adCaches;
    CPDistributedMessagingCenter *_clientMessageCenter;
    NSString *_clientMessageCenterName;
    NSUInteger _edgeSubscriberMultiplier;
    NSString *_hardware;
    CPDistributedMessagingCenter *_messageCenter;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSString *_overriddenServerURL;
    UIViewController *_parentViewController;
    NSMutableDictionary *_pendingBanners;
    ADRemoteViewController *_remoteViewController;
    NSDictionary *_requestHeaders;
    unsigned long long _sessionID;
    ADTargetingData *_targetingDataForRequests;
    NSUInteger _threeGSubscriberMultiplier;
    NSUInteger _wiFiSubscriberMultiplier;
    } flags;
}

@property(retain) ADBannerView *activeBanner;
@property(retain,readonly) NSMutableDictionary *adCaches;
@property(retain,readonly) CPDistributedMessagingCenter *clientMessageCenter;
@property(retain,readonly) NSString *clientMessageCenterName;
@property(retain,readonly) NSString *hardware;
@property(retain,readonly) CPDistributedMessagingCenter *messageCenter;
@property(copy,readonly) NSString *mobileCountryCode;
@property(copy,readonly) NSString *mobileNetworkCode;
@property(retain) NSString *overriddenServerURL;
@property(retain) UIViewController *parentViewController;
@property(retain,readonly) ADRemoteViewController *remoteViewController;
@property(retain,readonly) NSDictionary *requestHeaders;
@property(retain) ADTargetingData *targetingDataForRequests;

- (id)activeBanner;
- (id)adCaches;
- (id)clientMessageCenter;
- (id)clientMessageCenterName;
- (void)dealloc;
- (id)hardware;
- (id)messageCenter;
- (id)mobileCountryCode;
- (id)mobileNetworkCode;
- (id)overriddenServerURL;
- (id)parentViewController;
- (id)remoteViewController;
- (id)requestHeaders;
- (void)setActiveBanner:(id)arg1;
- (void)setOverriddenServerURL:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setTargetingDataForRequests:(id)arg1;
- (id)targetingDataForRequests;

@end
