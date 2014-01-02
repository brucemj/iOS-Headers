/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSError, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

// Not exported
@interface CDXClient : NSObject
{
    id <CDXClientDelegate> delegate_;
    long long holePunchAttemptCount_;
    NSData *preblob_;
    NSMutableDictionary *sessionLookup_;
    NSError *error_;
    int fd_;
    unsigned long long holePunchSID_;
    unsigned long long prevHolePunchSID_;
    NSString *server_;
    unsigned short port_;
    unsigned short localPort_;
    long long restartCount_;
    struct sockaddr_in cdxaddr_ipv4;
    double holePunchInterval_;
    _Bool preblobIsUpToDate_;
    _Bool willReconfigureShortly_;
    struct __SCDynamicStore *scDynamicStore_;
    struct __CFRunLoopSource *scDynamicStoreRunLoopSource_;
    NSObject<OS_dispatch_queue> *queue_;
    NSObject<OS_dispatch_source> *source_;
    NSObject<OS_dispatch_source> *holePunchTimer_;
    id preblobCallback_;
    void *padding_[10];
}

+ (id)sharedClient;
@property(nonatomic) id <CDXClientDelegate> delegate; // @synthesize delegate=delegate_;
@property(copy, nonatomic) id preblobCallback; // @synthesize preblobCallback=preblobCallback_;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=queue_;
- (id)createSessionWithTicket:(id)arg1 sessionKey:(id)arg2;
- (void)invalidateSession:(id)arg1;
- (_Bool)sendRaw:(id)arg1;
- (void)invalidate;
- (void)stopHolePunchTimer;
- (void)restart;
- (void)start;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;
- (void)startListeningOnSockets;
- (void)stopListeningOnSockets;
- (void)networkDidChange;
- (void)handleFDEvent;
- (void)resetHolepunchTimer;
- (_Bool)handleHolePunchEvent;
- (void)sendHolePunch;
- (void)setPreblob:(id)arg1;
@property(readonly) NSData *preblob; // @synthesize preblob=preblob_;
- (void)setError:(id)arg1;
@property(readonly, nonatomic) NSError *error; // @synthesize error=error_;

@end
