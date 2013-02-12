/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface LocalAccount : MailAccount {
}

+ (id)accountTypeString;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)localAccount;

- (id)_URLScheme;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(NSUInteger)arg3 existingMailboxUid:(id)arg4 permanentTag:(id)arg5 dictionary:(id)arg6;
- (id)_infoForMatchingURL:(id)arg1;
- (BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (BOOL)canFetch;
- (BOOL)canGoOffline;
- (BOOL)deleteInPlaceForMailbox:(id)arg1;
- (id)displayName;
- (id)initWithLibrary:(id)arg1 properties:(id)arg2;
- (id)mailboxPathExtension;
- (id)mailboxUidForFileSystemPath:(id)arg1;
- (id)password:(BOOL)arg1;
- (id)primaryMailboxUid;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (void)setHostname:(id)arg1;
- (void)setIsOffline:(BOOL)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (Class)storeClass;
- (id)uniqueId;

@end
