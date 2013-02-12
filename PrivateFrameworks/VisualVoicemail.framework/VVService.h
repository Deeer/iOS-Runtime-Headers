/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@class NSError, NSRecursiveLock, NSString, NSTimer;

@interface VVService : NSObject {
    struct { 
        unsigned int offline : 1; 
        unsigned int subscribed : 1; 
        unsigned int initialSetupRequired : 1; 
        unsigned int fakeInitialSetup : 1; 
        unsigned int launchedWithFakeInitialSetup : 1; 
        unsigned int mwiState : 1; 
        unsigned int notificationFallbackEnabled : 1; 
        unsigned int capabilitiesLoaded : 1; 
    NSError *_activationError;
    NSUInteger _capabilities;
    id _carrierParameters;
    NSRecursiveLock *_lock;
    NSInteger _mailboxUsage;
    struct __CFDate { } *_nextRetryWakeDate;
    struct __CFDate { } *_nextTrashCompactionWakeDate;
    NSTimer *_notificationFallbackTimer;
    struct __CFDate { } *_notificationFallbackWakeDate;
    Class _notificationInterpreter;
    NSString *_password;
    NSError *_passwordError;
    NSString *_passwordMailboxName;
    NSUInteger _pmNotifier;
    struct IONotificationPort { } *_pmNotifierPort;
    NSUInteger _pmRootPort;
    struct __CFRunLoopSource { } *_pmRunLoopSource;
    NSInteger _retryIntervalIndex;
    struct __CFArray { } *_retryIntervals;
    NSTimer *_retryTimer;
    } _serviceFlags;
    double _trashCompactionAge;
    NSTimer *_trashCompactionTimer;
    NSUInteger _trashedCount;
    NSUInteger _unreadCount;
}

+ (void)_handleSIMChange;
+ (void)_resetInsomniaState;
+ (void)_setInsomniaState:(BOOL)arg1;
+ (void)_suppressInsomniaState;
+ (void)initialize;
+ (void)setInsomniaEnabled:(BOOL)arg1;
+ (id)sharedService;
+ (BOOL)sharedServiceIsSubscribed;

- (void)_attemptDelayedSynchronize;
- (void)_attemptScheduledTrashCompaction;
- (void)_cancelAutomatedTrashCompaction;
- (void)_cancelIndicatorAction;
- (void)_contextActivationFailed:(id)arg1;
- (void)_contextActivationSucceeded:(id)arg1;
- (void)_deliverFallbackNotification;
- (void)_deregisterForPowerEventsIfNecessary;
- (void)_enterFallbackMode:(id)arg1;
- (void)_handleCallStatusChange:(struct __CFDictionary { }*)arg1;
- (BOOL)_isOfflineDueToRoamingWithDataStatusDict:(struct __CFDictionary { }*)arg1;
- (void)_reactToIndicator;
- (void)_registerForPowerEventsIfNecessary;
- (struct __CFArray { }*)_retryIntervals;
- (void)_scheduleAutomatedTrashCompaction;
- (void)_scheduleFallbackTimerIfNecessary;
- (void)_setActivationError:(id)arg1;
- (void)_setOnline:(BOOL)arg1 fallbackMode:(BOOL)arg2;
- (void)_updateOnlineStatusWithDataStatusDict:(struct __CFDictionary { }*)arg1;
- (id)activationError;
- (void)cancelAutomatedTrashCompaction;
- (void)cancelDelayedSynchronize;
- (void)cancelNotificationFallback;
- (void)cancelPasswordRequest;
- (NSUInteger)capabilities;
- (id)carrierParameterValueForKey:(id)arg1;
- (void)changePassword:(id)arg1 fromPassword:(id)arg2;
- (void)clearActivationError;
- (struct __CFString { }*)connectionServiceType;
- (BOOL)dataForRecordPending:(void*)arg1 progressiveLoadInProgress:(BOOL*)arg2;
- (void)dealloc;
- (void)displayPasswordRequestIfNecessary;
- (BOOL)doTrashCompaction;
- (BOOL)doesClientManageTrashCompaction;
- (BOOL)greetingAvailable;
- (BOOL)greetingFetchExistsProgressiveLoadInProgress:(BOOL*)arg1;
- (void)handleDataContextDeactivated;
- (void)handleIndicatorNotification:(struct __CFDictionary { }*)arg1;
- (void)handleNotification:(id)arg1 isMWI:(BOOL)arg2;
- (void)handlePasswordNotificationResponse:(struct __CFUserNotification { }*)arg1 flags:(unsigned long)arg2;
- (void)handlePasswordRequestCancellation;
- (BOOL)headerChangesPending;
- (id)init;
- (BOOL)isInSync;
- (BOOL)isMessageWaiting;
- (BOOL)isOfflineDueToRoaming;
- (BOOL)isOnline;
- (BOOL)isSubscribed;
- (void)kill;
- (NSInteger)mailboxGreetingType;
- (id)mailboxName;
- (BOOL)mailboxRequiresSetup;
- (NSInteger)mailboxUsage;
- (NSInteger)maximumGreetingDuration;
- (NSInteger)maximumPasswordLength;
- (NSInteger)maximumRecordedNameDuration;
- (NSInteger)minimumPasswordLength;
- (void)moveRecordFromTrash:(void*)arg1;
- (void)moveRecordToTrash:(void*)arg1;
- (Class)notificationInterpreterClass;
- (id)password;
- (BOOL)passwordChangeRequiresEnteringOldPassword;
- (id)passwordIgnoringSubscription:(BOOL)arg1;
- (void)progressiveDataLengthsForRecord:(void*)arg1 expected:(NSUInteger*)arg2 current:(NSUInteger*)arg3;
- (id)provisionalPassword;
- (void)removeAllNonDetachedRecords;
- (void)removeAllRecords;
- (void)reportError:(id)arg1;
- (void)resetCounts;
- (void)resetDelayedSynchronizationAttemptCount;
- (BOOL)respectsMWINotifications;
- (void)retrieveDataForRecord:(void*)arg1;
- (void)retrieveGreeting;
- (void)scheduleAutomatedTrashCompaction;
- (void)scheduleDelayedSynchronize;
- (void)setGreetingType:(NSInteger)arg1 withData:(id)arg2 duration:(NSUInteger)arg3;
- (void)setMailboxRequiresSetup:(BOOL)arg1;
- (void)setMailboxUsage:(NSInteger)arg1;
- (void)setMessageWaiting:(BOOL)arg1;
- (void)setOnline:(BOOL)arg1;
- (void)setPassword:(id)arg1;
- (void)setProvisionalPassword:(id)arg1;
- (void)setSubscribed:(BOOL)arg1;
- (void)setTrashedCount:(NSUInteger)arg1;
- (void)setUnreadCount:(NSUInteger)arg1;
- (BOOL)sharedSubscriptionRequiresSetup;
- (BOOL)shouldScheduleAutoTrashOnMailboxUsageChange;
- (BOOL)shouldTrashCompactRecord:(void*)arg1;
- (void)synchronize:(BOOL)arg1;
- (BOOL)taskOfTypeExists:(NSInteger)arg1;
- (double)trashCompactionAge;
- (NSUInteger)trashedCount;
- (NSUInteger)unreadCount;
- (void)updateCountsForChangedFlags:(NSInteger)arg1 currentRecordFlags:(NSInteger)arg2;
- (void)updateLoggingSettings;

@end
