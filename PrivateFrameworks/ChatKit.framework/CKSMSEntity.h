/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString;

@interface CKSMSEntity : CKEntity {
    unsigned int _accepted : 1;
    unsigned int _generated : 1;
    NSString *_cachedName;
    struct __CKSMSAddress { } *_smsAddress;
}

@property __CKSMSAddress *smsAddress;

+ (id)copyAllSMSEntities;

- (void)_addToSharedSet;
- (id)_existingEntityFromSharedSet;
- (void)_generateCachedName;
- (void)_generateName;
- (id)_initWithSMSAddress:(struct __CKSMSAddress { }*)arg1 service:(id)arg2;
- (void)_removeFromSharedSet;
- (struct __CKSMSAddress { }*)_smsAddress;
- (void*)abRecord;
- (NSInteger)addressBookUID;
- (void)dealloc;
- (NSUInteger)hash;
- (NSInteger)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)manuallyGenerateWithABRecord:(void*)arg1 identifier:(NSInteger)arg2;
- (id)name;
- (NSInteger)propertyType;
- (id)rawAddress;
- (void)resetCaches;
- (void)setSmsAddress:(struct __CKSMSAddress { }*)arg1;
- (struct __CKSMSAddress { }*)smsAddress;

@end
