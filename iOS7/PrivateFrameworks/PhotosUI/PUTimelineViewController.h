/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PUCollectionViewTiledLayoutDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, PUDynamicSplitView, PUImageManager, PUTimelineAssetContainer, PUTimelineViewControllerSpec, UIBarButtonItem, UICollectionView, UIImageView, UIView;

@interface PUTimelineViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, PUCollectionViewTiledLayoutDelegate>
{
    PUTimelineViewControllerSpec *_spec;
    PUImageManager *_imageManager;
    int _fastImageFormat;
    int _qualityImageFormat;
    UIBarButtonItem *_settingsBarButtonItem;
    UIBarButtonItem *_commentsBarButtonItem;
    int _interfaceOrientation;
    PUTimelineAssetContainer *_assetContainer;
    BOOL _hideBars;
    NSArray *_mainEvents;
    NSArray *_sideEvents;
    UIImageView *__backgroundView;
    PUDynamicSplitView *__splitView;
    UICollectionView *__mainCollectionView;
    UICollectionView *__sideCollectionView;
    UIView *__updatesView;
    UIView *__rootView;
}

+ (void)initialize;
@property(retain, nonatomic, setter=_setRootView:) UIView *_rootView; // @synthesize _rootView=__rootView;
@property(retain, nonatomic, setter=_setUpdatesView:) UIView *_updatesView; // @synthesize _updatesView=__updatesView;
@property(retain, nonatomic, setter=_setSideCollectionView:) UICollectionView *_sideCollectionView; // @synthesize _sideCollectionView=__sideCollectionView;
@property(retain, nonatomic, setter=_setMainCollectionView:) UICollectionView *_mainCollectionView; // @synthesize _mainCollectionView=__mainCollectionView;
@property(retain, nonatomic, setter=_setSplitView:) PUDynamicSplitView *_splitView; // @synthesize _splitView=__splitView;
@property(retain, nonatomic, setter=_setBackgroundView:) UIImageView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(retain, nonatomic) NSArray *sideEvents; // @synthesize sideEvents=_sideEvents;
@property(retain, nonatomic) NSArray *mainEvents; // @synthesize mainEvents=_mainEvents;
- (void).cxx_destruct;
- (void)_navigateToFullScreenPhoto:(id)arg1 inCollection:(id)arg2 animated:(BOOL)arg3;
- (void)_commentsButtonAction:(id)arg1;
- (void)_settingsButtonAction:(id)arg1;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)_updateAllEvents;
- (void)_updateNavigationItemAnimated:(BOOL)arg1;
- (void)_updateContentInsetForInterfaceOrientation:(int)arg1;
- (void)_setInterfaceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_updateBackgroundViewForOrientation:(int)arg1;
- (id)_assetContainer;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForCaptionInSection:(int)arg3;
- (int)collectionView:(id)arg1 layout:(id)arg2 locationForCaptionInSection:(int)arg3 offset:(struct UIOffset *)arg4;
- (int)collectionView:(id)arg1 layout:(id)arg2 tileTypeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 captionForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)_collectionView:(id)arg1 configureSectionCaptionView:(id)arg2 forSection:(int)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)_collectionView:(id)arg1 commentCellStyleForItemAtIndexPath:(id)arg2;
- (id)_eventsForCollectionView:(id)arg1;
- (void)_scrollToMostRecent;
- (void)_updateBarsVisibilityForInterfaceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldAutorotate;
- (id)initWithSpec:(id)arg1;

@end
