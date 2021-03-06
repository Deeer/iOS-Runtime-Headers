/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLInvitationRecipient : NSObject {
    NSMutableArray *_allEmails;
    NSMutableArray *_allPhones;
    NSString *_firstName;
    NSString *_invalidAddressString;
    NSString *_lastName;
    MFComposeRecipient *_mfRecipient;
    NSString *_selectedEmailString;
    NSString *_selectedPhoneString;
}

@property (nonatomic, readonly) NSArray *allEmails;
@property (nonatomic, readonly) NSArray *allPhones;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *invalidAddressString;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *selectedEmailString;
@property (nonatomic, readonly) NSString *selectedPhoneString;

+ (id)validEmailAddressFromComposeRecipient:(id)arg1;
+ (id)validPhoneNumberFromString:(id)arg1;

- (id)allEmails;
- (id)allPhones;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)firstName;
- (id)initWithRecipient:(id)arg1;
- (id)invalidAddressString;
- (id)lastName;
- (id)selectedEmailString;
- (id)selectedPhoneString;

@end
