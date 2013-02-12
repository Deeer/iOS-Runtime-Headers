/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class MFObjectCache, NSMutableSet;

@interface MessageStore : MFWeakObject {
    union { 
        struct { 
            MFObjectCache *_headerDataCache; 
            MFObjectCache *_headerCache; 
            MFObjectCache *_bodyDataCache; 
            MFObjectCache *_bodyCache; 
        } objectCaches; 
        struct { 
            struct __CFDictionary {} *_headerDataCache; 
            struct __CFDictionary {} *_headerCache; 
            struct __CFDictionary {} *_bodyDataCache; 
            struct __CFDictionary {} *_bodyCache; 
        } intKeyCaches; 
    } _caches;
    NSMutableSet *_uniqueStrings;
}

+ (Class)classForMimePart;
+ (Class)headersClass;

- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4;
- (id)_fetchBodyForMessage:(id)arg1 updateFlags:(BOOL)arg2;
- (id)_fetchBodyForMessage:(id)arg1;
- (void)_flushAllCaches;
- (void)_flushAllCachesLocking:(BOOL)arg1;
- (void)_flushAllMessageData;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3;
- (id)additionalHeadersForForwardOfMessage:(id)arg1;
- (id)additionalHeadersForReplyOfMessage:(id)arg1;
- (id)bestAlternativeForPart:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5;
- (void)dealloc;
- (id)defaultAlternativeForPart:(id)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (id)headersForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (void)setMessageClass:(Class)arg1;
- (void)setNumberOfAttachments:(NSUInteger)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (id)uniquedString:(id)arg1;
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1;

@end
