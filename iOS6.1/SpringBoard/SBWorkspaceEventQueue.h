/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, SBWorkspaceEvent;

@interface SBWorkspaceEventQueue : NSObject
{
    unsigned int _lockCount;
    NSMutableArray *_eventQueue;
    SBWorkspaceEvent *_executingEvent;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SBWorkspaceEvent *executingEvent; // @synthesize executingEvent=_executingEvent;
- (void)_bumpLockAssertionCount:(int)arg1;
- (void)_processNextEvent;
- (BOOL)hasEventWithName:(id)arg1;
- (BOOL)hasEventWithPrefix:(id)arg1;
- (void)cancelEventsWithName:(id)arg1;
- (BOOL)isLocked;
- (void)executeOrPrependEvents:(id)arg1;
- (void)executeOrPrependEvent:(id)arg1;
- (void)executeOrAppendEvent:(id)arg1;
- (void)_executeOrPendEvents:(id)arg1 position:(int)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end

