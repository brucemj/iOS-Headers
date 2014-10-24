//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOGeoServiceTag : PBCodable <NSCopying>
{
    int _serviceType;
    NSString *_tag;
    struct {
        unsigned int serviceType:1;
    } _has;
}

+ (id)defaultTag;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasServiceType;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
- (void)dealloc;

@end
