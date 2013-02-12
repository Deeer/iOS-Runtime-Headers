/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKConversation, CKService, NSMutableArray;

@interface CKConversationList : NSObject {
    NSMutableArray *_conversations;
    BOOL _fullyLoaded;
    NSMutableArray *_groupsToDelete;
    CKConversation *_pendingConversation;
    BOOL _runningInAppIndexer;
    CKService *_service;
}

@property(readonly) CKService *service;

- (void)_addGroupToDeletionSchedule:(NSInteger)arg1;
- (void)_conversationChanged;
- (id)_conversationForMessage:(id)arg1 groupID:(NSInteger)arg2 create:(BOOL)arg3;
- (void)_deleteGroups;
- (id)_newConversationForMessage:(id)arg1 groupID:(NSInteger)arg2;
- (id)_recipientForMessage:(id)arg1;
- (id)activeConversations;
- (void)addConversation:(id)arg1;
- (void)applyPendingConversation;
- (id)conversationForGroupID:(NSInteger)arg1;
- (id)conversationForMessage:(id)arg1 create:(BOOL)arg2;
- (id)conversationForRecipients:(id)arg1 create:(BOOL)arg2;
- (id)conversations;
- (void)dealloc;
- (void)deleteConversationAtIndex:(NSInteger)arg1;
- (id)existingConversationForAddresses:(id)arg1;
- (id)existingConversationForGroupID:(NSInteger)arg1;
- (void)fixupNames;
- (id)initWithService:(id)arg1;
- (id)loadedConversations;
- (id)pendingConversation:(BOOL)arg1;
- (void)reloadConversations;
- (void)resetCaches;
- (void)resort;
- (id)service;
- (void)setRunningInAppIndexer;
- (void)unpendConversation;
- (NSInteger)unreadCount;

@end
