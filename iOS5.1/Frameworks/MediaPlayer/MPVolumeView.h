/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "NSCoding-Protocol.h"

@class MPVolumeSlider;

@interface MPVolumeView : UIView <NSCoding>
{
    void *_internal;
}

- (id)_routeButtonImage;
- (void)_setShowsVolumeSlider:(BOOL)arg1;
- (void)_setShowsRouteButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_displayAudioRoutePicker;
- (void)_createSubviews;
- (id)_routeButton;
- (void)_setVolumeAudioCategory:(id)arg1;
- (BOOL)isShowingActiveOverlays;
- (void)dismissActiveOverlaysAnimated:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isShowingRouteButton;
@property(readonly, nonatomic) BOOL isVisible;
@property(nonatomic) BOOL volumeSliderShrinksFromBothEnds;
@property(nonatomic) BOOL hidesRouteLabelWhenNoRouteChoice;
@property(readonly, nonatomic) MPVolumeSlider *volumeSlider;
@property(readonly, nonatomic) int style;
@property(nonatomic) BOOL showsRouteButton;
@property(nonatomic) BOOL showsVolumeSlider;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setAlpha:(float)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_initWithStyle:(int)arg1;

@end
