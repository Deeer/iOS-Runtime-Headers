/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary, NSMutableDictionary, NSPersistentStoreCoordinator, NSString, NSURL;

@interface NSPersistentStore : NSObject {
    struct _objectStoreFlags { 
        unsigned int isReadOnly : 1; 
        unsigned int cleanOnRemove : 1; 
        unsigned int isMDDirty : 1; 
        unsigned int _RESERVED : 29; 
    NSString *_configurationName;
    NSPersistentStoreCoordinator *_coordinator;
    id _defaultFaultHandler;
    } _flags;
    NSMutableDictionary *_oidFactories;
    NSDictionary *_options;
    void *_reserved2;
    void *_reserved3;
    void *_temporaryIDClass;
    NSURL *_url;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)doURLStuff:(id)arg1 createdStubFile:(BOOL*)arg2 error:(id*)arg3 options:(id)arg4;
+ (void)initialize;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (Class)migrationManagerClass;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;

- (id)URL;
- (id)_defaultMetadata;
- (void)_didLoadMetadata;
- (BOOL)_isMetadataDirty;
- (Class)_objectIDClass;
- (void)_preflightCrossCheck;
- (BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (void)_setMetadataDirty:(BOOL)arg1;
- (BOOL)_unload:(id*)arg1;
- (void)_updateMetadata;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2;
- (id)configurationName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didAddToPersistentStoreCoordinator:(id)arg1;
- (void)doFilesystemCleanupOnRemove:(BOOL)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)faultHandler;
- (Class)faultHandlerClass;
- (void)finalize;
- (id)identifier;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (BOOL)isReadOnly;
- (id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (BOOL)load:(id*)arg1;
- (BOOL)loadMetadata:(id*)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (id)metadata;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (Class)objectIDClassForEntity:(id)arg1;
- (id)objectIDFactoryForEntity:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)options;
- (id)persistentStoreCoordinator;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setReadOnly:(BOOL)arg1;
- (void)setURL:(id)arg1;
- (id)type;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;

@end
