/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

// Not exported
@interface WebCoreSharedBufferData : NSData
{
    struct RefPtr<WebCore::SharedBuffer> sharedBuffer;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const void *)bytes;
- (unsigned long long)length;
- (id)initWithSharedBuffer:(struct SharedBuffer *)arg1;
- (void)finalize;
- (void)dealloc;

@end
