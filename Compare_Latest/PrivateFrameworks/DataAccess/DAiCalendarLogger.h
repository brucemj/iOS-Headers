/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ICSLoggingDelegate-Protocol.h"

@interface DAiCalendarLogger : NSObject <ICSLoggingDelegate>
{
}

+ (id)sharedLogger;
- (void)logICSMessage:(id)arg1 atLevel:(long long)arg2;
- (void)registerWithiCalendar;

@end
