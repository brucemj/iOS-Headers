/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CKSyncController : NSObject
{
    int _restoreStateChangedToken;
    int _attachmentRestoredToken;
    BOOL _restoring;
}

+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isRestoring) BOOL restoring; // @synthesize restoring=_restoring;
- (void)prioritizeAttachmentAtPath:(id)arg1;

@end

