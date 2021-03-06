/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UINavigationController.h>

@class NSArray, UIMoreListController, UIViewController;

@interface UIMoreNavigationController : UINavigationController
{
    UIMoreListController *_moreListController;
    UINavigationController *_originalNavigationController;
    UIViewController *_originalRootViewController;
}

+ (Class)_moreListControllerClass;
@property(nonatomic) BOOL moreViewControllersChanged;
@property(nonatomic) BOOL allowsCustomizing;
@property(retain, nonatomic) NSArray *moreViewControllers;
- (void)_redisplayMoreTableView;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) UIViewController *displayedViewController;
- (void)_restoreOriginalNavigationController;
- (id)_preparedViewController:(id)arg1;
- (void)dealloc;
- (id)init;

@end

