/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableArray;

@interface IMAccountController : NSObject {
    unsigned int _isReadOnly : 1;
    NSMutableArray *_accounts;
}

+ (id)bestAccountFromAccounts:(id)arg1;
+ (id)sharedInstance;

- (void)_activeAccountChanged:(id)arg1;
- (BOOL)accountActive:(id)arg1;
- (id)accountAtIndex:(NSInteger)arg1;
- (BOOL)accountConnected:(id)arg1;
- (BOOL)accountConnecting:(id)arg1;
- (id)accountForUniqueID:(id)arg1;
- (id)accounts;
- (id)accountsForService:(id)arg1;
- (id)accountsWithCapability:(unsigned long long)arg1;
- (BOOL)activateAccount:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3;
- (BOOL)activateAccount:(id)arg1 force:(BOOL)arg2;
- (BOOL)activateAccount:(id)arg1 locally:(BOOL)arg2;
- (BOOL)activateAccount:(id)arg1;
- (BOOL)activateAndHandleReconnectAccount:(id)arg1;
- (id)activeAccounts;
- (id)activeAccountsForService:(id)arg1;
- (BOOL)addAccount:(id)arg1 atIndex:(NSInteger)arg2 locally:(BOOL)arg3;
- (BOOL)addAccount:(id)arg1 atIndex:(NSInteger)arg2;
- (BOOL)addAccount:(id)arg1 locally:(BOOL)arg2;
- (BOOL)addAccount:(id)arg1;
- (id)aimAccount;
- (id)anyAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)anyAccountForService:(id)arg1;
- (id)anyActiveAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)anyActiveAccountForService:(id)arg1;
- (id)anyConnectedAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)anyConnectedAccountForService:(id)arg1;
- (void)autoLogin;
- (id)bestAccountForStatus;
- (BOOL)canActivateAccount:(id)arg1;
- (BOOL)canDeleteAccount:(id)arg1;
- (id)connectedAccounts;
- (id)connectedAccountsForService:(id)arg1;
- (id)connectedAccountsWithCapability:(unsigned long long)arg1;
- (BOOL)deactivateAccount:(id)arg1 withDisable:(BOOL)arg2;
- (BOOL)deactivateAccount:(id)arg1;
- (void)dealloc;
- (BOOL)deleteAccount:(id)arg1 locally:(BOOL)arg2;
- (BOOL)deleteAccount:(id)arg1;
- (id)init;
- (id)jabberAccount;
- (id)mostLoggedInAccount;
- (NSInteger)numberOfAccounts;
- (BOOL)readOnly;
- (oneway void)release;
- (NSUInteger)retainCount;
- (void)setReadOnly:(BOOL)arg1;

@end
