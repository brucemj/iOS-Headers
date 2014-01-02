/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable;

@interface JSVirtualMachine : NSObject
{
    struct OpaqueJSContextGroup *m_group;
    NSMapTable *m_contextCache;
    NSMapTable *m_externalObjectGraph;
}

- (void)removeManagedReference:(id)arg1 withOwner:(id)arg2;
- (void)addManagedReference:(id)arg1 withOwner:(id)arg2;
- (void)dealloc;
- (id)initWithContextGroupRef:(struct OpaqueJSContextGroup *)arg1;
- (id)init;

@end
