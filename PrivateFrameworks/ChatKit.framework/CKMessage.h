/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKConversation, NSArray, NSCalendarDate, NSString;

@interface CKMessage : NSObject {
    unsigned int _dateLoaded : 1;
    unsigned int _heightAndFlagsLoaded : 1;
    unsigned int _failedSendCountLoaded : 1;
    unsigned int _outgoing : 1;
    unsigned int _outgoingLoaded : 1;
    unsigned int _messagePartsLoaded : 1;
    unsigned int _subjectLoaded : 1;
    float _cachedPercentComplete;
    NSCalendarDate *_calendarDate;
    CKConversation *_conversation;
    double _date;
    NSInteger _failedSendCount;
    NSUInteger _flags;
    NSInteger _groupID;
    NSUInteger _height;
    NSArray *_messageParts;
    NSString *_subject;
    NSString *_text;
}

@property CKConversation *conversation;
@property(readonly) NSArray *messageParts;
@property NSInteger groupID;

- (double)_loadDate;
- (void)_loadFailedSendCount;
- (BOOL)_loadOutgoing;
- (void)_loadSubject;
- (void)_loadText;
- (void)_loadUIFlags;
- (id)_newParts;
- (void)_resetData;
- (void)_storeUIFlags:(unsigned long)arg1;
- (id)address;
- (id)alertImageData;
- (id)attachmentText:(BOOL)arg1;
- (NSInteger)compare:(id)arg1;
- (BOOL)completelyFailedSend;
- (BOOL)containsDisplayableMessageParts;
- (id)conversation;
- (id)date;
- (void)dealloc;
- (void)deleteMessagePart:(id)arg1;
- (BOOL)failedSend;
- (NSInteger)failedSendCount;
- (BOOL)getCharacterCountNumerator:(NSUInteger*)arg1 denominator:(NSUInteger*)arg2;
- (void)getUIHeight:(NSUInteger*)arg1 flags:(NSUInteger*)arg2;
- (NSInteger)groupID;
- (BOOL)hasBeenRead;
- (BOOL)hasBeenSent;
- (unsigned long)height;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFirstDisplayablePart:(id)arg1;
- (BOOL)isForward;
- (BOOL)isOnlyDisplayableMessagePart:(id)arg1;
- (BOOL)isOutgoing;
- (BOOL)isPlaceholder;
- (void)loadParts;
- (void)markAsRead;
- (NSInteger)messageCount;
- (id)messagePartWithRowID:(NSInteger)arg1;
- (id)messageParts;
- (BOOL)partiallyFailedSend;
- (BOOL)pending;
- (NSInteger)pendingCount;
- (float)percentComplete;
- (void)permanentlyRemoveMessage;
- (id)previewText;
- (void)reloadFailedSendCount;
- (id)sender;
- (NSInteger)sentCount;
- (void)setConversation:(id)arg1;
- (void)setGroupID:(NSInteger)arg1;
- (void)setParts:(id)arg1;
- (void)setUIHeight:(unsigned long)arg1 flags:(unsigned long)arg2;
- (BOOL)smartForwardCapable;
- (id)subject;
- (id)text;
- (double)timeIntervalSince1970;
- (NSInteger)totalMessageCount;

@end
