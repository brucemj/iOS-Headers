/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UIStatusBarTinting-Protocol.h"

@class NSArray, NSString, UIButton, UIColor, UIImage, UIImageView, UILabel, UITextField;

@interface UISearchBar : UIView <UIStatusBarTinting>
{
    UITextField *_searchField;
    UILabel *_promptLabel;
    UIButton *_cancelButton;
    id <UISearchBarDelegate> _delegate;
    id _controller;
    UIColor *_tintColor;
    UIImageView *_separator;
    NSString *_cancelButtonText;
    NSArray *_scopes;
    int _selectedScope;
    UIView *_background;
    UIView *_scopeBar;
    struct UIEdgeInsets _contentInset;
    UIImageView *_shadowView;
    id _appearanceStorage;
    struct {
        unsigned int barStyle:3;
        unsigned int showsBookmarkButton:1;
        unsigned int showsCancelButton:1;
        unsigned int isTranslucent:1;
        unsigned int autoDisableCancelButton:1;
        unsigned int showsScopeBar:1;
        unsigned int hideBackground:1;
        unsigned int combinesLandscapeBars:1;
        unsigned int usesEmbeddedAppearance:1;
        unsigned int showsSearchResultsButton:1;
        unsigned int searchResultsButtonSelected:1;
        unsigned int pretendsIsInBar:1;
        unsigned int disabled:1;
    } _searchBarFlags;
    UIColor *_statusBarTintColor;
    UIView *_inputAccessoryView;
}

@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor; // @synthesize _statusBarTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) id <UISearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (struct UIOffset)positionAdjustmentForSearchBarIcon:(int)arg1;
- (void)setPositionAdjustment:(struct UIOffset)arg1 forSearchBarIcon:(int)arg2;
@property(nonatomic) struct UIOffset searchTextPositionAdjustment;
@property(nonatomic) struct UIOffset searchFieldBackgroundPositionAdjustment;
- (id)scopeBarButtonTitleTextAttributesForState:(unsigned int)arg1;
- (void)setScopeBarButtonTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2;
- (void)setScopeBarButtonDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3;
- (id)scopeBarButtonBackgroundImageForState:(unsigned int)arg1;
- (void)setScopeBarButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage;
- (id)imageForSearchBarIcon:(int)arg1 state:(unsigned int)arg2;
- (id)_imageForSearchBarIcon:(int)arg1 state:(unsigned int)arg2;
- (void)setImage:(id)arg1 forSearchBarIcon:(int)arg2 state:(unsigned int)arg3;
- (id)searchFieldBackgroundImageForState:(unsigned int)arg1;
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)_setSeparatorImage:(id)arg1;
- (id)_separatorImage;
@property(retain, nonatomic) UIImage *backgroundImage;
- (void)_setTintColor:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_scopeChanged:(id)arg1;
@property(nonatomic) BOOL showsScopeBar;
- (void)_setScopeBarHidden:(BOOL)arg1;
@property(nonatomic) int selectedScopeButtonIndex;
@property(copy, nonatomic) NSArray *scopeButtonTitles;
- (void)_setUpScopeBar;
- (struct UIEdgeInsets)contentInset;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (id)_makeShadowView;
- (BOOL)_shouldDisplayShadow;
- (void)_setShadowVisibleIfNecessary:(BOOL)arg1;
- (id)_navigationBarForShadow;
- (void)layoutSubviews;
- (float)_searchFieldHeight;
- (float)_landscapeScopeBarWidth;
- (float)_landscapeSearchFieldWidth;
- (float)_availableBoundsWidth;
- (void)_setShowsSeparator:(BOOL)arg1;
- (id)_currentSeparatorImage;
- (struct CGSize)intrinsicContentSize;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (float)_defaultHeight;
- (int)shortcutConversionType;
- (void)setShortcutConversionType:(int)arg1;
@property(nonatomic) int keyboardType;
@property(nonatomic) int spellCheckingType;
@property(nonatomic) int autocorrectionType;
@property(nonatomic) int autocapitalizationType;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (BOOL)usesEmbeddedAppearance;
- (void)setUsesEmbeddedAppearance:(BOOL)arg1;
- (BOOL)_shouldCombineLandscapeBars;
- (BOOL)combinesLandscapeBars;
- (void)setCombinesLandscapeBars:(BOOL)arg1;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)_setShowsCancelButton:(BOOL)arg1;
@property(nonatomic) BOOL showsCancelButton;
- (void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_hideShowAnimationDidFinish;
@property(nonatomic) BOOL showsBookmarkButton;
@property(nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;
@property(nonatomic) BOOL showsSearchResultsButton;
- (void)_updateRightView;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *prompt;
@property(copy, nonatomic) NSString *text;
@property(nonatomic, getter=isTranslucent) BOOL translucent;
@property(nonatomic) int barStyle;
- (void)movedToSuperview:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToWindow:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)_scopeBar;
- (id)searchField;
- (id)controller;
- (void)setController:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setScopeBarSegmentsEnabled:(BOOL)arg1;
- (void)_setEnabled:(BOOL)arg1;
- (BOOL)_isEnabled;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)reloadInputViews;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_searchFieldEditingChanged;
- (void)_searchFieldReturnPressed;
- (void)_searchFieldEndEditing;
- (void)_searchFieldBeginEditing;
- (void)_resultsListButtonPressed;
- (void)_bookmarkButtonPressed;
- (void)_cancelButtonPressed;
- (void)_destroyCancelButton;
- (void)_setupCancelButtonWithAppearance:(id)arg1;
- (void)_setupCancelButton;
- (void)_setAutoDisableCancelButton:(BOOL)arg1;
- (void)_setCancelButtonText:(id)arg1;
- (void)_setupPromptLabel;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)_updateOpacity;
- (void)_setupSearchField;
- (void)_updateMagnifyingGlassView;
- (void)_updateSearchFieldArt;
- (BOOL)_isInBar;
- (void)setPretendsIsInBar:(BOOL)arg1;
- (BOOL)pretendsIsInBar;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;

@end
