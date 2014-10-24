//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface PDPaymentHostEndpointRegistry : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_hostIdentifierToEndpointMap;
    NSMutableDictionary *_processIdentifierToHostIdentifiersMap;
}

@property(retain, nonatomic) NSMutableDictionary *processIdentifierToHostIdentifiersMap; // @synthesize processIdentifierToHostIdentifiersMap=_processIdentifierToHostIdentifiersMap;
@property(retain, nonatomic) NSMutableDictionary *hostIdentifierToEndpointMap; // @synthesize hostIdentifierToEndpointMap=_hostIdentifierToEndpointMap;
@property(nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)debugDescription;
- (void)removeListenerEndpointsForProcessIdentifier:(int)arg1;
- (id)takeListenerEndpointForHostIdentifier:(id)arg1;
- (void)addListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 processIdentifier:(int)arg3;
- (void)dealloc;
- (id)init;

@end
