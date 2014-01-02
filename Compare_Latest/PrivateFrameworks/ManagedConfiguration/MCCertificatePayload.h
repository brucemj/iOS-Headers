/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSDate, NSString;

@interface MCCertificatePayload : MCPayload
{
    NSData *_certificatePersistentID;
    NSString *_installedOnDeviceID;
}

@property(copy, nonatomic) NSString *installedOnDeviceID; // @synthesize installedOnDeviceID=_installedOnDeviceID;
@property(retain, nonatomic) NSData *certificatePersistentID; // @synthesize certificatePersistentID=_certificatePersistentID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *expiry;
- (id)description;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
@property(readonly, nonatomic) _Bool isIdentity;
@property(readonly, nonatomic) _Bool isRoot;
- (struct __SecIdentity *)copyIdentityFromKeychain;
- (struct __SecCertificate *)copyCertificate;
- (id)stubDictionary;
@property(readonly, nonatomic) _Bool isSigned;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end
