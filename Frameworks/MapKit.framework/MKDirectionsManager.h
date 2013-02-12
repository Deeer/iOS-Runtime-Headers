/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GMMMapInfo, GMMRequester, MKAddressBookAddress, MKCache, MKDirectionsResponse, MKDirectionsRouteInfo, MKSearchResult, NSMutableArray, NSString;

@interface MKDirectionsManager : NSObject <PBRequesterDelegate> {
    BOOL _appendingNewTransitResponses;
    NSInteger _defaultMode;
    BOOL _enableRouteCache;
    MKAddressBookAddress *_endAddress;
    NSString *_endAddressString;
    MKSearchResult *_endSearchResult;
    BOOL _isDisplayed;
    BOOL _isLoadingTransitOnly;
    BOOL _isUpdatingCurrentLocation;
    GMMMapInfo *_mapInfo;
    NSInteger _mode;
    BOOL _needsSave;
    NSMutableArray *_observers;
    MKDirectionsResponse *_previousTransitResponse;
    GMMRequester *_requester;
    MKDirectionsRouteInfo *_routeInfo;
    MKCache *_routeInfoCache;
    MKAddressBookAddress *_startAddress;
    NSString *_startAddressString;
    MKSearchResult *_startSearchResult;
    NSInteger _transitResultPageOffset;
}

@property(readonly) NSTimeZone *arrivalTimeZone;
@property(readonly) NSTimeZone *departureTimeZone;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(retain) MKAddressBookAddress *endAddress;
@property(retain) NSString *endAddressString;
@property(retain) MKSearchResult *endSearchResult;
@property(retain) GMMMapInfo *mapInfo;
@property(readonly) MKRouteStep *previousStep;
@property(readonly) NSArray *receivedResponses;
@property(retain) GMMRequester *requester;
@property(retain) MKRoute *route;
@property(retain) MKSearchResult *routeEndSearchResult;
@property(retain) MKDirectionsRouteInfo *routeInfo;
@property(retain) MKSearchResult *routeStartSearchResult;
@property(readonly) NSArray *routes;
@property(retain) MKAddressBookAddress *startAddress;
@property(retain) NSString *startAddressString;
@property(retain) MKSearchResult *startSearchResult;
@property(retain) MKRouteStep *step;
@property(readonly) NSArray *steps;
@property(readonly) NSUInteger availableModes;
@property NSInteger defaultMode;
@property BOOL enableRouteCache;
@property(readonly) BOOL hasEnd;
@property(readonly) BOOL hasReceivedResponse;
@property(readonly) BOOL hasStart;
@property(readonly) BOOL isActive;
@property BOOL isDisplayed;
@property(readonly) BOOL isLoading;
@property(readonly) BOOL isTransitEnabled;
@property NSInteger mode;
@property(readonly) BOOL needsSave;
@property(readonly) NSUInteger previousStepIndex;
@property(readonly) NSUInteger receivedResponseCount;
@property(readonly) BOOL startAndEndAreEqual;
@property NSUInteger stepIndex;

+ (NSInteger)_GMMModeForMode:(NSInteger)arg1;
+ (NSInteger)_modeForGMMMode:(NSInteger)arg1;
+ (NSUInteger)_responseIndexForMode:(NSInteger)arg1;
+ (id)sharedDirectionsManager;

- (void)_createIconsForResponse:(id)arg1 cache:(BOOL)arg2;
- (id)_createRouteSearchResultWithLocation:(id)arg1 isStart:(BOOL)arg2;
- (id)_endLocation;
- (void)_loadEnded;
- (void)_loadResponseFromDictionaryRepresentation:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_reportErrorCode:(NSInteger)arg1;
- (id)_requestWithMode:(NSInteger)arg1;
- (void)_resetResponseForMode:(NSInteger)arg1;
- (void)_resetResponses;
- (id)_response;
- (id)_responseForIndex:(NSUInteger)arg1;
- (id)_responseForMode:(NSInteger)arg1;
- (BOOL)_restoreRouteFromCacheForMode:(NSInteger)arg1;
- (void)_restoreSearchResults:(id)arg1;
- (BOOL)_routeAvailableForMode:(NSInteger)arg1;
- (void)_saveRouteToCache;
- (void)_setResponses:(id)arg1;
- (void)_setResponsesUpdated;
- (void)_setRouteUnavailableForMode:(NSInteger)arg1;
- (void)_setUpdatingCurrentLocation:(BOOL)arg1;
- (void)_startLoad;
- (id)_startLocation;
- (void)_startTransitLoadWithRequest:(id)arg1;
- (void)_updateStartAndEndSearchResults;
- (void)addObserver:(id)arg1;
- (id)arrivalTimeZone;
- (NSUInteger)availableModes;
- (void)cancelLoad;
- (void)clearEnd;
- (void)clearRouteCache;
- (void)clearRouteCacheForSearchResult:(id)arg1;
- (void)clearStart;
- (void)dealloc;
- (NSInteger)defaultMode;
- (id)departureTimeZone;
- (id)dictionaryRepresentation;
- (BOOL)enableRouteCache;
- (id)endAddress;
- (id)endAddressString;
- (id)endSearchResult;
- (id)firstRouteForTransitResponse;
- (BOOL)hasEnd;
- (BOOL)hasReceivedResponse;
- (BOOL)hasStart;
- (id)init;
- (BOOL)isActive;
- (BOOL)isDisplayed;
- (BOOL)isLoading;
- (BOOL)isTransitEnabled;
- (void)loadFromDictionaryRepresentation:(id)arg1 restoreSearchResults:(id)arg2;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)logRequestForMode:(NSInteger)arg1;
- (id)mapInfo;
- (NSInteger)mode;
- (BOOL)needsSave;
- (id)previousStep;
- (NSUInteger)previousStepIndex;
- (NSUInteger)receivedResponseCount;
- (id)receivedResponses;
- (void)removeObserver:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (id)requester;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)reset;
- (id)route;
- (id)routeEndSearchResult;
- (id)routeInfo;
- (id)routeStartSearchResult;
- (id)routes;
- (id)searchResultMatchingSearchResult:(id)arg1;
- (void)setDefaultMode:(NSInteger)arg1;
- (void)setEnableRouteCache:(BOOL)arg1;
- (void)setEndAddress:(id)arg1;
- (void)setEndAddressString:(id)arg1;
- (void)setEndSearchResult:(id)arg1;
- (void)setIsDisplayed:(BOOL)arg1;
- (void)setMapInfo:(id)arg1;
- (void)setMode:(NSInteger)arg1 shouldLoad:(BOOL)arg2;
- (void)setMode:(NSInteger)arg1;
- (void)setRequester:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteEndSearchResult:(id)arg1;
- (void)setRouteInfo:(id)arg1;
- (void)setRouteStartSearchResult:(id)arg1;
- (void)setStartAddress:(id)arg1;
- (void)setStartAddressString:(id)arg1;
- (void)setStartSearchResult:(id)arg1;
- (void)setStep:(id)arg1;
- (void)setStepIndex:(NSUInteger)arg1;
- (void)setUserEndSearchResult:(id)arg1;
- (void)setUserStartSearchResult:(id)arg1;
- (id)startAddress;
- (id)startAddressString;
- (BOOL)startAndEndAreEqual;
- (void)startLoad;
- (id)startSearchResult;
- (void)startTransitLoadForNextResultPage;
- (void)startTransitLoadWithDate:(id)arg1 isDeparture:(BOOL)arg2;
- (id)step;
- (void)stepBack;
- (void)stepForward;
- (NSUInteger)stepIndex;
- (id)steps;
- (void)swapStartAndEnd;
- (id)transitAgencyForRouteStep:(id)arg1;
- (id)transitRequestDate;
- (BOOL)transitRequestDateIsDeparture;
- (void)useStartAndEndSearchResultsFromRoute;

@end
