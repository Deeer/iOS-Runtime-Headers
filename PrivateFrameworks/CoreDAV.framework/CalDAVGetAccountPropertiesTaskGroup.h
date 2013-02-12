/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSArray, NSString;

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
    NSString *_calendarHomePath;
    NSString *_collectionSetName;
    NSString *_inboxPath;
    NSString *_notificationURL;
    NSArray *_userAddresses;
}

@property(readonly) NSString *calendarHomePath;
@property(readonly) NSString *collectionSetName;
@property(readonly) NSString *inboxPath;
@property(readonly) NSString *notificationURL;
@property(readonly) NSArray *userAddresses;

- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponces:(id)arg1;
- (id)calendarHomePath;
- (id)collectionSetName;
- (void)dealloc;
- (id)description;
- (id)inboxPath;
- (id)notificationURL;
- (void)syncAway;
- (id)userAddresses;

@end
