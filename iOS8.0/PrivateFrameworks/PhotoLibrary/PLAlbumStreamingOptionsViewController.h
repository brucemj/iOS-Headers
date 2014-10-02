//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PLComposeRecipientViewControllerDelegate.h"
#import "PLInvitationRecordsObserver.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AAUIProfilePictureStore, ACAccountStore, NSArray, NSMutableDictionary, NSOperationQueue, NSString, PLCloudSharedAlbum, PLCloudSharedAlbumInvitationRecord, PLComposeRecipientViewController, UIBarButtonItem, UISwitch, UITableView;

@interface PLAlbumStreamingOptionsViewController : UIViewController <PLComposeRecipientViewControllerDelegate, PLInvitationRecordsObserver, UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_visibleInvitationRecords;
    NSString *_visiblePublicURL;
    BOOL _showShareLink;
    PLCloudSharedAlbum *_album;
    id <PLAlbumStreamingOptionsViewControllerDelegate> _delegate;
    PLComposeRecipientViewController *_composeRecipientController;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UITableView *_optionsTableView;
    UISwitch *_wantsPublicWebsiteSwitch;
    UISwitch *_wantsMultipleContributorsSwitch;
    UISwitch *_wantsAcceptCloudNotificationSwitch;
    BOOL _adjustedInsetsForKeyboard;
    unsigned int _addSubscribersRow;
    NSOperationQueue *_familyRequestQueue;
    ACAccountStore *_familyAccountStore;
    NSArray *_familyMembers;
    AAUIProfilePictureStore *_familyMemberPictureStore;
    NSMutableDictionary *_familyProfilePictures;
    BOOL _isPresentedModally;
    BOOL _streamOwner;
    BOOL __shouldScrollToTopOnNextViewLayout;
    BOOL _albumIsFamilyStream;
    NSString *_albumName;
    PLCloudSharedAlbumInvitationRecord *__selectedSubscriberInvitationRecord;
    NSString *__lastPublicURLSectionFooterTitle;
    NSString *__lastMultiContributorsSectionFooterTitle;
}

@property(nonatomic) BOOL albumIsFamilyStream; // @synthesize albumIsFamilyStream=_albumIsFamilyStream;
@property(copy, nonatomic, setter=_setLastMultiContributorsSectionFooterTitle:) NSString *_lastMultiContributorsSectionFooterTitle; // @synthesize _lastMultiContributorsSectionFooterTitle=__lastMultiContributorsSectionFooterTitle;
@property(copy, nonatomic, setter=_setLastPublicURLSectionFooterTitle:) NSString *_lastPublicURLSectionFooterTitle; // @synthesize _lastPublicURLSectionFooterTitle=__lastPublicURLSectionFooterTitle;
@property(nonatomic, setter=_setShouldScrollToTopOnNextViewLayout:) BOOL _shouldScrollToTopOnNextViewLayout; // @synthesize _shouldScrollToTopOnNextViewLayout=__shouldScrollToTopOnNextViewLayout;
@property(retain, nonatomic, setter=_setSelectedSubscriberInvitationRecord:) PLCloudSharedAlbumInvitationRecord *_selectedSubscriberInvitationRecord; // @synthesize _selectedSubscriberInvitationRecord=__selectedSubscriberInvitationRecord;
@property(nonatomic) BOOL streamOwner; // @synthesize streamOwner=_streamOwner;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(nonatomic) BOOL isPresentedModally; // @synthesize isPresentedModally=_isPresentedModally;
@property(retain, nonatomic) PLCloudSharedAlbum *album; // @synthesize album=_album;
@property(nonatomic) id <PLAlbumStreamingOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)backingNavigationControllerForComposeRecipientViewController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)invitationRecordsDidChange:(id)arg1;
- (void)_removeSelectedSubscriber;
- (void)_displayConfirmationForRemovalOfSelectedSubscriber;
- (void)_resendInvitationToSelectedSubscriber;
- (void *)_personMatchingEmail:(id)arg1 orPhone:(id)arg2 matchingProperty:(out int *)arg3 matchingValueIdentifier:(out int *)arg4;
- (id)_newPersonViewControllerWithEmail:(id)arg1 phone:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 canResendInvitation:(BOOL)arg5 canRemoveSubscriber:(BOOL)arg6;
- (void)_updateMultipleContributorsState;
- (void)_updatePublicURLStateIfNecessaryAnimated:(BOOL)arg1;
- (id)_visibleInvitationRecordsForStreamOwner:(BOOL)arg1;
- (void)_setShowingMultipleContributorSpinner:(BOOL)arg1;
- (void)_setShowingPublicURLActivitySpinner:(BOOL)arg1;
- (BOOL)_shouldShowPublicURLActivitySpinner;
- (BOOL)_multipleContributorsEnabled;
- (BOOL)_publicURLEnabled;
- (void)_displayActivitySheet;
- (void)_displayDeleteConfirmation:(id)arg1;
- (void)_displayConfirmationWithMessage:(id)arg1 destructiveTitle:(id)arg2 actionHandler:(CDUnknownBlockType)arg3;
- (void)_deletePhotoStream;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_changeWantsMultipleContributors:(id)arg1;
- (void)_changeWantsAcceptCloudNotification:(id)arg1;
- (void)_changeWantsPublicWebsite:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_handleCompletionWithReason:(int)arg1;
- (id)_suppresionContexts;
- (BOOL)_appAllowsSupressionOfAlerts;
- (struct CGSize)contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)_updateWantsMultipleContributorsField;
- (void)_updateWantsAcceptCloudNotificationField;
- (void)_updateWantsPublicWebsiteField;
- (void)_updateAllControls;
- (void)dealloc;
- (id)initWithAlbum:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
