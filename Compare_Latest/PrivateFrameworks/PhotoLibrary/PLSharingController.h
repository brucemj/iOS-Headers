/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class MFMailComposeViewController, NSArray, NSMutableArray, NSMutableDictionary, UIView, UIViewController;

@interface PLSharingController : NSObject <MFMailComposeViewControllerDelegate>
{
    UIViewController *_parentController;
    NSArray *_photos;
    NSMutableArray *_views;
    NSMutableDictionary *_trimmedFilePaths;
    NSArray *_attachmentIdentifiers;
    UIView *_animationSuperview;
    UIView *_referenceView;
    SEL _photoAction;
    int _sendingEmailCount;
    _Bool _composeSheetIsReady;
    unsigned int _didDisplayComposeSheet:1;
    unsigned int _didSlideImageDown:1;
    unsigned int _isAnimatingSendToEmail:1;
    unsigned int _delegateWillSetComposeFrame:1;
    unsigned int _delegateDidFinishMail:1;
    unsigned int _delegateViewForPhoto:1;
    MFMailComposeViewController *_composeController;
}

+ (void)copyItemsToPasteboard:(id)arg1;
+ (void)openEmailAccountPrefs;
+ (_Bool)allowedToModifyEmailAccounts;
+ (_Bool)canSendEmail;
- (id)views;
- (void)mailComposeController:(id)arg1 bodyFinishedLoadingWithResult:(_Bool)arg2 error:(id)arg3;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
@property(nonatomic) id <NSCoding> autosaveIdentifier;
- (void)_discardTrimmedFiles;
- (void)setTrimmedPath:(id)arg1 forVideo:(id)arg2;
- (_Bool)isComposeSheetReady;
- (void)_setComposeParentViewController:(id)arg1;
- (void)_dismissMailComposeController;
- (id)_addAudio:(id)arg1 toCompositionController:(id)arg2;
- (id)_addVideo:(id)arg1 toCompositionController:(id)arg2;
- (id)_addPhoto:(id)arg1 toCompositionController:(id)arg2 index:(unsigned long long)arg3;
- (void)_autosaveMailComposition;
- (void)_showMailComposeSheetForAutosavedMessageWithIdentifier:(id)arg1;
- (void)composeMailForPhotos:(id)arg1;
- (struct CGRect)_animationDestinationRectForView:(id)arg1;
- (struct CGRect)_animationDestinationRectForImageSize:(struct CGSize)arg1;
- (void)_commonDidFinishEmailAnimation:(_Bool)arg1;
- (void)_composeSheetDidDisplay;
- (void)_finishedSlidingImagesDown:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_slideImagesOverMessage;
- (void)_displayComposeSheet;
- (void)_finishedSlidingImageUp:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_animateSendToEmail;
- (void)_reallySendViaEmail:(id)arg1 animated:(_Bool)arg2;
- (void)_performSendViaEmail;
- (void)emailPhotos:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1 photos:(id)arg2 views:(id)arg3;

@end
