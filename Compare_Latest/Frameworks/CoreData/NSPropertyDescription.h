/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSEntityDescription, NSMutableDictionary, NSString;

@interface NSPropertyDescription : NSObject <NSCoding, NSCopying>
{
    NSString *_versionHashModifier;
    id _underlyingProperty;
    NSData *_versionHash;
    NSEntityDescription *_entity;
    NSString *_name;
    NSArray *_validationPredicates;
    NSArray *_validationWarnings;
    struct __propertyDescriptionFlags {
        unsigned int _isReadOnly:1;
        unsigned int _isTransient:1;
        unsigned int _isOptional:1;
        unsigned int _isIndexed:1;
        unsigned int _skipValidation:1;
        unsigned int _isIndexedBySpotlight:1;
        unsigned int _isStoredInExternalRecord:1;
        unsigned int _extraIvarsAreInDataBlob:1;
        unsigned int _isOrdered:1;
        unsigned int _reservedPropertyDescription:23;
    } _propertyDescriptionFlags;
    void *_extraIvars;
    NSMutableDictionary *_userInfo;
    long long _entitysReferenceIDForProperty;
}

+ (void)initialize;
- (id)renamingIdentifier;
- (void)setRenamingIdentifier:(id)arg1;
- (void)setVersionHashModifier:(id)arg1;
- (id)versionHashModifier;
- (id)versionHash;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)setValidationPredicates:(id)arg1 withValidationWarnings:(id)arg2;
- (void)setName:(id)arg1;
- (void)setTransient:(_Bool)arg1;
- (void)setOptional:(_Bool)arg1;
- (id)validationWarnings;
- (id)validationPredicates;
- (id)entity;
- (id)name;
- (void)setIndexed:(_Bool)arg1;
- (_Bool)isIndexed;
- (_Bool)isOptional;
- (_Bool)isTransient;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
