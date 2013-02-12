/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMappingModel, NSMutableDictionary, NSSQLAdapter, NSSQLConnection, NSSQLCore, NSSQLModel;

@interface _NSSQLiteStoreMigrator : NSObject {
    NSSQLAdapter *_adapter;
    NSMutableDictionary *_addedEntityMigrations;
    NSSQLConnection *_connection;
    NSMutableDictionary *_copiedEntityMigrations;
    NSSQLModel *_dstModel;
    BOOL _hasPKTableChanges;
    NSMappingModel *_mappingModel;
    NSMutableDictionary *_reindexedEntities;
    NSMutableDictionary *_reindexedPropertiesByEntity;
    NSMutableDictionary *_removedEntityMigrations;
    NSMutableDictionary *_sourceToDestinationEntityMap;
    NSSQLModel *_srcModel;
    NSSQLCore *_store;
    NSMutableDictionary *_tableMigrationDescriptionsByEntity;
    NSMutableDictionary *_transformedEntityMigrations;
}

@property(readonly) NSSQLAdapter *adapter;

+ (BOOL)_annotatesMigrationMetadata;
+ (void)_setAnnotatesMigrationMetadata:(BOOL)arg1;

- (void)_addEntityMigration:(id)arg1 toTableMigrationForRootEntity:(id)arg2 migrationType:(NSInteger)arg3;
- (void)_addReindexedProperty:(id)arg1 toSetForEntity:(id)arg2;
- (void)_determinePropertyDependenciesOnIDForEntity:(id)arg1;
- (void)_determineReindexedEntitiesAndAffectedProperties;
- (void)_populateEntityMigrationDescriptionsAndEntityMap;
- (void)_populateTableMigrationDescriptions;
- (id)adapter;
- (id)createEntityMigrationStatements;
- (id)createIndexStatementsForEntity:(id)arg1;
- (id)createStatementsForUpdatingEntityKeys;
- (void)dealloc;
- (id)entityMigrationDescriptionForEntity:(id)arg1;
- (id)initWithStore:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3;
- (BOOL)performMigration:(id*)arg1;
- (id)tableMigrationDescriptionForEntity:(id)arg1;

@end
