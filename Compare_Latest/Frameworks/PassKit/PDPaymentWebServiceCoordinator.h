//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PDDatabaseManagerPaymentServicesDelegate.h"
#import "PDPushNotificationConsumer.h"
#import "PKPaymentBackgroundProvisioningServiceDelegate.h"
#import "PKPaymentProvisioningServiceDelegate.h"
#import "PKSecureElementConsistencyCheckerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, PDBulletinManager, PDCardFileManager, PDDatabaseManager, PDPushNotificationManager, PDSecureElement, PKPaymentWebService, PKPaymentWebServiceContext;

@interface PDPaymentWebServiceCoordinator : NSObject <PDPushNotificationConsumer, PDDatabaseManagerPaymentServicesDelegate, PKPaymentProvisioningServiceDelegate, PKPaymentBackgroundProvisioningServiceDelegate, PKSecureElementConsistencyCheckerDelegate>
{
    PDPushNotificationManager *_pushNotificationManager;
    PDDatabaseManager *_databaseManager;
    PDCardFileManager *_cardFileManager;
    PDSecureElement *_secureElement;
    PDBulletinManager *_bulletinManager;
    PKPaymentWebService *_sharedWebService;
    NSObject<OS_dispatch_queue> *_sharedWebServiceQueue;
}

- (void)_queue_setupBackgroundWebService;
- (void)_registerWithPaymentWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleDownloadedPass:(id)arg1;
- (void)_checkVerificationStatusForUniqueID:(id)arg1;
- (void)_fetchPassesIfNecessary;
- (void)_scheduleVerificationCheckForPass:(id)arg1 onDate:(id)arg2;
- (void)scheduleConsistencyCheck:(id)arg1 pluggedIn:(BOOL)arg2;
- (id)paymentApplications;
- (id)secureElementCards;
- (id)paymentPasses;
- (void)didDownloadPaymentPass:(id)arg1;
- (BOOL)synchronizeWithTSM;
- (void)deleteCardsWithAIDs:(id)arg1;
- (void)handleDeletionForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)handleInsertionForPaymentPass:(id)arg1;
- (void)paymentWebService:(id)arg1 didDownloadSerialNumbersForInstalledPasses:(id)arg2;
- (void)paymentWebService:(id)arg1 didDownloadPassRemoteAssets:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 didDownloadPass:(id)arg2;
- (void)shouldArchiveBackgroundContext:(id)arg1;
- (void)shouldArchiveContext:(id)arg1;
- (void)passAdded:(id)arg1;
- (void)removePassWithUniqueID:(id)arg1;
- (void)applyPushNotificationToken:(id)arg1;
- (void)handlePushNotificationForTopic:(id)arg1;
- (id)pushNotificationTopics;
- (void)initiateDevicePassesDownload;
- (void)performConsistencyCheckWithCompletion:(CDUnknownBlockType)arg1;
- (void)initiateConsistencyCheck;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPass:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)updateSharedWebServiceContext:(id)arg1;
- (void)deleteSharedWebService;
@property(readonly, nonatomic) PKPaymentWebServiceContext *sharedWebServiceContext;
- (id)sharedWebService;
- (void)updateWebServiceConfiguration;
- (void)connect;
- (void)dealloc;
- (id)initWithPushNotificationManager:(id)arg1 databaseManager:(id)arg2 cardFileManager:(id)arg3 secureElement:(id)arg4 bulletinManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
