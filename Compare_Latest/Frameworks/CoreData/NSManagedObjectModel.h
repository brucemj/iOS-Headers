/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"

@class NSMutableDictionary, NSSet;

@interface NSManagedObjectModel : NSObject <NSCoding, NSCopying, NSFastEnumeration>
{
    id _dataForOptimization;
    id *_optimizationHints;
    id _localizationPolicy;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_configurations;
    NSMutableDictionary *_fetchRequestTemplates;
    NSSet *_versionIdentifiers;
    struct __managedObjectModelFlags {
        unsigned int _isInUse:1;
        unsigned int _isImmutable:1;
        unsigned int _isOptimizedForEncoding:1;
        unsigned int _reservedEntityDescription:29;
    } _managedObjectModelFlags;
}

+ (id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2;
+ (id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2;
+ (id)modelByMergingModels:(id)arg1;
+ (id)mergedModelFromBundles:(id)arg1;
+ (void)initialize;
- (_Bool)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2;
- (id)entityVersionHashesByName;
- (void)setVersionIdentifiers:(id)arg1;
- (id)versionIdentifiers;
- (void)setLocalizationDictionary:(id)arg1;
- (id)localizationDictionary;
- (id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2;
- (void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2;
- (id)fetchRequestTemplateForName:(id)arg1;
- (id)fetchRequestTemplatesByName;
- (void)setEntities:(id)arg1 forConfiguration:(id)arg2;
- (id)entitiesForConfiguration:(id)arg1;
- (id)configurations;
- (void)setEntities:(id)arg1;
- (id)entities;
- (id)entitiesByName;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1;
- (id)init;

@end
