/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SUPreviewOverlayViewController, SUPurchaseManager, SUQueueSessionManager, SUTabBarController, SUUIAppearance, SUViewControllerFactory, UIColor;

@interface SUClientInterface : NSObject
{
    SUUIAppearance *_appearance;
    NSString *_clientIdentifier;
    UIColor *_darkKeyColor;
    id <SUClientInterfaceDelegatePrivate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _ignoresExpectedClientsProtocol;
    UIColor *_lightKeyColor;
    NSString *_localStoragePath;
    SUPurchaseManager *_purchaseManager;
    SUQueueSessionManager *_queueSessionManager;
    NSMutableDictionary *_urlBagKeys;
    NSString *_userAgent;
    SUViewControllerFactory *_viewControllerFactory;
    _Bool _wasLaunchedFromLibrary;
}

@property(retain) SUViewControllerFactory *viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;
@property(copy, nonatomic) UIColor *lightKeyColor; // @synthesize lightKeyColor=_lightKeyColor;
@property(nonatomic) id <SUClientInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) UIColor *darkKeyColor; // @synthesize darkKeyColor=_darkKeyColor;
- (void)_showPreviewOverlayAnimated:(_Bool)arg1;
@property(getter=_ignoresExpectedClientsProtocol, setter=_setIgnoresExpectedClientsProtocol:) _Bool _ignoresExpectedClientsProtocol;
- (void)_setStatusBarStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_setStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2;
- (void)_returnToLibrary;
- (id)_newScriptInterface;
- (void)_presentViewController:(id)arg1 fromViewController:(id)arg2 withTransition:(int)arg3;
- (void)_presentDialog:(id)arg1;
- (void)_mediaPlayerViewControllerWillDismiss:(id)arg1 animated:(_Bool)arg2;
- (void)_hidePreviewOverlayAnimated:(_Bool)arg1;
- (void)_exitStoreWithReason:(long long)arg1;
- (void)_dismissViewControllerFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)_dismissModalViewControllerFromViewController:(id)arg1 withTransition:(int)arg2;
@property _Bool wasLaunchedFromLibrary;
@property(copy) NSString *userAgent;
- (id)URLBagKeyForIdentifier:(id)arg1;
@property(readonly, nonatomic) SUTabBarController *tabBarController;
- (void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2;
@property(retain) SUQueueSessionManager *queueSessionManager;
@property(retain) SUPurchaseManager *purchaseManager;
@property(copy) NSString *localStoragePath;
@property(copy) NSString *clientIdentifier;
@property(copy) SUUIAppearance *appearance;
@property(readonly, nonatomic) SUPreviewOverlayViewController *previewOverlay;
- (void)dealloc;
- (id)init;

@end
