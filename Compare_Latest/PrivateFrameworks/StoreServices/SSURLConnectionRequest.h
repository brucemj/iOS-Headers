/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding-Protocol.h"

@class NSURLRequest, SSAuthenticationContext, SSURLRequestProperties;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding>
{
    SSURLRequestProperties *_requestProperties;
    SSAuthenticationContext *_authenticationContext;
    _Bool _runsInProcess;
    _Bool _shouldMescalSign;
}

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (_Bool)_canRunInProcess;
@property _Bool runsInProcess;
@property(copy) SSAuthenticationContext *authenticationContext;
- (void)startWithCompletionBlock:(id)arg1;
- (_Bool)start;
@property(readonly) NSURLRequest *URLRequest;
- (void)startWithConnectionResponseBlock:(id)arg1;
@property _Bool shouldMescalSign;
@property(readonly) SSURLRequestProperties *requestProperties;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithRequestProperties:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) id <SSURLConnectionRequestDelegate> delegate; // @dynamic delegate;

@end
