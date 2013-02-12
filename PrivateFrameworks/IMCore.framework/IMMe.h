/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMPerson, NSArray, NSMutableArray, NSString;

@interface IMMe : NSObject {
    NSArray *_abEmails;
    NSString *_abFirstName;
    NSString *_abFullName;
    NSMutableArray *_abIMHandles;
    NSString *_abLastName;
    NSString *_abNickname;
    NSMutableArray *_loginIMHandles;
    IMPerson *_person;
}

+ (id)fallbackUserName;
+ (id)imHandleForService:(id)arg1;
+ (id)me;

- (id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2;
- (BOOL)addIMHandle:(id)arg1;
- (BOOL)addLoginIMHandle:(id)arg1;
- (id)bestIMHandle;
- (void)dealloc;
- (id)email;
- (id)emails;
- (id)firstName;
- (id)fullName;
- (id)guid;
- (id)imHandles;
- (id)init;
- (BOOL)isIMHandleLoginIMHandle:(id)arg1;
- (id)lastName;
- (id)loginIMHandles;
- (void)myPictureChanged;
- (id)nickname;
- (id)person;
- (void)rebuildIMHandles;
- (BOOL)removeIMHandle:(id)arg1;
- (BOOL)removeLoginIMHandle:(id)arg1;
- (void)resetABPerson;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (void)setIMPerson:(id)arg1;

@end
