//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKStackingViewController.h>

#import "ABContactViewControllerDelegate.h"
#import "ABNewPersonViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "MKActivityViewControllerDelegate.h"
#import "MKPlaceActionsViewControllerDelegate.h"
#import "MKPlaceCardPhotosControllerDelegate.h"
#import "MKPlaceCardReviewsControllerDelegate.h"
#import "MKPlaceHeaderViewDelegate.h"
#import "MKPlaceInfoViewControllerDelegate.h"
#import "MKPlaceNearbyAppsViewControllerDelegate.h"
#import "MKPlaceSharedAttributionDelegate.h"
#import "MKStackingViewControllerDelegate.h"
#import "SKProductPageViewControllerDelegate.h"

@class ABPeoplePickerNavigationController, CNContact, MKDistanceDetailProvider, MKMapItem, MKPlaceActionsViewController, MKPlaceHeaderView, MKPlaceInfoViewController, MKPlaceNearbyAppsMetricsCoordinator, MKSegmentedControlTabBarView, NSArray, NSMapTable, NSString, SKProductPageViewController, UITapGestureRecognizer;

@interface _MKPlaceViewController : MKStackingViewController <MKStackingViewControllerDelegate, MKActivityViewControllerDelegate, ABContactViewControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, SKProductPageViewControllerDelegate, MKPlaceNearbyAppsViewControllerDelegate, MKPlaceSharedAttributionDelegate, MKPlaceHeaderViewDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceInfoViewControllerDelegate, MKPlaceActionsViewControllerDelegate>
{
    MKPlaceInfoViewController *_infoViewController;
    MKPlaceActionsViewController *_actionsViewController;
    UITapGestureRecognizer *_flyoverTourTapRecognizer;
    BOOL _isSearchingForNearbyApps;
    SKProductPageViewController *_storePageViewController;
    NSArray *_storeItems;
    void *_addressBook;
    void *_originalContactRecordCopy;
    NSMapTable *_additionalViewControllers;
    BOOL _overrideDefaultShowRAP;
    BOOL _hasContactOnlyMapItem;
    BOOL _hasCheckedDistanceAvailability;
    BOOL _showEditButton;
    BOOL _hideInlineMap;
    BOOL _showInlineMapInHeader;
    BOOL _hideDirectionsButtons;
    BOOL _showContactActions;
    BOOL _showTitleBar;
    BOOL _showShareActionsButton;
    BOOL _showRemovePin;
    BOOL _showReportAProblem;
    BOOL _disableReportAProblem;
    BOOL _showRerouting;
    BOOL _showNearbyApps;
    BOOL _showFlyoverTour;
    BOOL _showCreateReminder;
    BOOL _showOpenInSkyline;
    BOOL _showSimulateLocation;
    NSString *_headerTitle;
    MKPlaceHeaderView *_placeHeaderView;
    MKSegmentedControlTabBarView *_tabBar;
    MKDistanceDetailProvider *_distanceMonitor;
    MKMapItem *_mapItem;
    CNContact *_contact;
    CNContact *_originalContact;
    id <_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;
    float _headerHeight;
    MKPlaceNearbyAppsMetricsCoordinator *_metricsCoordinator;
    ABPeoplePickerNavigationController *_contactsNavigationController;
}

@property(nonatomic) __weak ABPeoplePickerNavigationController *contactsNavigationController; // @synthesize contactsNavigationController=_contactsNavigationController;
@property(nonatomic) BOOL showSimulateLocation; // @synthesize showSimulateLocation=_showSimulateLocation;
@property(nonatomic) BOOL showOpenInSkyline; // @synthesize showOpenInSkyline=_showOpenInSkyline;
@property(nonatomic) BOOL showCreateReminder; // @synthesize showCreateReminder=_showCreateReminder;
@property(nonatomic) BOOL showFlyoverTour; // @synthesize showFlyoverTour=_showFlyoverTour;
@property(nonatomic) BOOL showNearbyApps; // @synthesize showNearbyApps=_showNearbyApps;
@property(nonatomic) BOOL showRerouting; // @synthesize showRerouting=_showRerouting;
@property(nonatomic) float headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) BOOL disableReportAProblem; // @synthesize disableReportAProblem=_disableReportAProblem;
@property(nonatomic) BOOL showRemovePin; // @synthesize showRemovePin=_showRemovePin;
@property(nonatomic) BOOL showShareActionsButton; // @synthesize showShareActionsButton=_showShareActionsButton;
@property(nonatomic) BOOL showTitleBar; // @synthesize showTitleBar=_showTitleBar;
@property(nonatomic) BOOL showContactActions; // @synthesize showContactActions=_showContactActions;
@property(nonatomic) BOOL hideDirectionsButtons; // @synthesize hideDirectionsButtons=_hideDirectionsButtons;
@property(nonatomic) BOOL showInlineMapInHeader; // @synthesize showInlineMapInHeader=_showInlineMapInHeader;
@property(nonatomic) BOOL hideInlineMap; // @synthesize hideInlineMap=_hideInlineMap;
@property(nonatomic) BOOL showEditButton; // @synthesize showEditButton=_showEditButton;
@property(nonatomic) __weak id <_MKPlaceViewControllerDelegate> placeViewControllerDelegate; // @synthesize placeViewControllerDelegate=_placeViewControllerDelegate;
@property(retain, nonatomic) CNContact *originalContact; // @synthesize originalContact=_originalContact;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) BOOL hasCheckedDistanceAvailability; // @synthesize hasCheckedDistanceAvailability=_hasCheckedDistanceAvailability;
@property(retain, nonatomic) MKDistanceDetailProvider *distanceMonitor; // @synthesize distanceMonitor=_distanceMonitor;
@property(retain, nonatomic) MKSegmentedControlTabBarView *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) MKPlaceHeaderView *placeHeaderView; // @synthesize placeHeaderView=_placeHeaderView;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (void)_openAppWithBundleID:(id)arg1;
- (void)_displayAppWithMetadata:(id)arg1;
- (void)nearbyAppsController:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3;
- (void)nearbyAppsController:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3;
@property(readonly, nonatomic) MKPlaceNearbyAppsMetricsCoordinator *metricsCoordinator; // @synthesize metricsCoordinator=_metricsCoordinator;
- (void)_findNearbyAppsAtCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)_searchForNearbyApps;
- (void)_searchForNearbyAppsIfNecessary;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (BOOL)_removeMapsDataFromContactWithRecordID:(int)arg1;
- (void)actionsViewControllerSimulateLocation:(id)arg1;
- (void)actionsViewControllerOpenInSkyline:(id)arg1;
- (void)actionsViewControllerCreateReminder:(id)arg1;
- (void)actionsViewControllerShare:(id)arg1;
- (void)actionsViewControllerRemovePin:(id)arg1;
- (void)actionsViewControllerReportAProblem:(id)arg1;
- (void)actionsViewControllerAddContactToExistingContact:(id)arg1;
- (void)actionsViewControllerCreateNewContact:(id)arg1;
- (void)updateActionVisibility;
- (BOOL)shouldShowReroutingForInfoViewController:(id)arg1;
- (BOOL)shouldShowFlyoverTourForInfoViewController:(id)arg1;
- (BOOL)shouldShowDirectionsForInfoViewController:(id)arg1;
- (BOOL)shouldShowInlineMapForInfoViewController:(id)arg1;
- (void)_showShareSheet:(id)arg1;
- (void)_showEditSheet:(id)arg1;
- (void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3;
- (void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3;
- (void)_openInfoAttribution;
- (void)openInfoAttribution;
- (void)placeCardReviewsController:(id)arg1 didSelectViewReviewWithID:(id)arg2;
- (void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg1;
- (void)placeCardReviewsControllerDidSelectWriteReview:(id)arg1;
- (void)placeCardReviewsControllerDidSelectCheckIn:(id)arg1;
- (void)placeCardPhotosControllerDidSelectViewAllPhotos:(id)arg1;
- (void)placeCardPhotosControllerDidSelectAddPhoto:(id)arg1;
- (void)infoViewController:(id)arg1 didSelectDeal:(id)arg2;
- (void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2;
- (BOOL)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2;
- (void)stackingViewController:(id)arg1 willSelectViewController:(id)arg2;
- (id)stackingViewController:(id)arg1 scrollViewForViewController:(id)arg2;
- (void)restartHeaderViewAnimations;
- (void)resetHeaderViewAnimations;
- (void)resetHeaderView;
- (void)presentHeaderView;
- (void)stackingViewControllerDidEndScroll:(id)arg1;
- (void)stackingViewControllerWillBeginScroll:(id)arg1;
- (void)stackingViewController:(id)arg1 calculatedTransformForHeaderView:(struct CATransform3D)arg2;
- (float)stackingViewControllerHeightForHeaderView:(id)arg1;
- (void)_switchToTabAtIndex:(int)arg1;
- (BOOL)headerViewshouldShowTitleSubtitleAndStarRatings:(id)arg1;
- (void)headerView:(id)arg1 didFinishLoadingBackgroundViewOfType:(int)arg2;
- (void)_setupHeaderView;
- (void)_tappedForFlyoverTour;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)removeAdditionalViewController:(id)arg1;
- (void)addAdditionalViewController:(id)arg1 atPosition:(int)arg2;
- (int)_sectionPositionForMapTableKey:(id)arg1;
- (id)_mapTableKeyForSectionPosition:(int)arg1;
- (id)additionalViewControllersAtPosition:(int)arg1;
- (void)setContact:(id)arg1;
- (void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(BOOL)arg3;
- (void)_updateViewControllers;
- (void)_setViewControllersWithInformationViewControllers:(id)arg1;
- (BOOL)_defaultShowReportAProblem;
@property(nonatomic) BOOL showReportAProblem; // @synthesize showReportAProblem=_showReportAProblem;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)_setHeaderSubtitleWithDistanceInfo:(id)arg1 numberOfReviews:(unsigned int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (int)preferredStatusBarStyle;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithMapItem:(id)arg1;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

