/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSManagedObjectID;

@interface PLLoadRequestKey : NSObject <NSCopying>
{
    unsigned short _sourceID;
    NSManagedObjectID *_objectID;
    unsigned long long _hash;
}

+ (id)keyWithSource:(id)arg1 asset:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end
