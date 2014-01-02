/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding-Protocol.h"

@class NSArray;

@interface SSPersonalizeOffersRequest : SSRequest <SSXPCCoding>
{
    NSArray *_items;
}

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (_Bool)start;
- (void)startWithPersonalizedResponseBlock:(id)arg1;
@property(readonly, nonatomic) NSArray *items;
- (void)dealloc;
- (id)initWithItems:(id)arg1;

// Remaining properties
@property(nonatomic) id <SSPersonalizeOffersDelegate> delegate; // @dynamic delegate;

@end
