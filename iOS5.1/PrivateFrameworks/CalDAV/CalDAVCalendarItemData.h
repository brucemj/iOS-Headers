/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVLeafDataPayload.h"

#import "CalDAVCalendarItemProtocol-Protocol.h"

@class CalDAVCalendarServerScheduleChangesItem, NSString;

@interface CalDAVCalendarItemData : CoreDAVLeafDataPayload <CalDAVCalendarItemProtocol>
{
    NSString *_scheduleTag;
    CalDAVCalendarServerScheduleChangesItem *_scheduleChanges;
}

- (void)dealloc;
@property(retain) NSString *scheduleTag; // @synthesize scheduleTag=_scheduleTag;
@property(retain) CalDAVCalendarServerScheduleChangesItem *scheduleChanges; // @synthesize scheduleChanges=_scheduleChanges;

@end

