/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "CAMFlashButtonDelegate-Protocol.h"

@class CAMElapsedTimeView, CAMFlashButton, CAMFlipButton, CAMHDRButton;

@interface CAMTopBar : UIView <CAMFlashButtonDelegate>
{
    _Bool __flashButtonExpanded;
    long long _style;
    long long _backgroundStyle;
    CAMFlashButton *_flashButton;
    CAMElapsedTimeView *_elapsedTimeView;
    CAMHDRButton *_HDRButton;
    CAMFlipButton *_flipButton;
    long long _orientation;
    UIView *__backgroundView;
}

@property(nonatomic, getter=_isFlashButtonExpanded, setter=_setFlashButtonExpanded:) _Bool _flashButtonExpanded; // @synthesize _flashButtonExpanded=__flashButtonExpanded;
@property(readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) CAMFlipButton *flipButton; // @synthesize flipButton=_flipButton;
@property(retain, nonatomic) CAMHDRButton *HDRButton; // @synthesize HDRButton=_HDRButton;
@property(retain, nonatomic) CAMElapsedTimeView *elapsedTimeView; // @synthesize elapsedTimeView=_elapsedTimeView;
@property(retain, nonatomic) CAMFlashButton *flashButton; // @synthesize flashButton=_flashButton;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)flashButtonDidCollapse:(id)arg1;
- (void)flashButtonWillExpand:(id)arg1;
- (void)flashButtonWasPressed:(id)arg1;
- (void)flashButtonModeDidChange:(id)arg1;
- (void)_layoutFloatingRecordingStyle;
- (void)_layoutFloatingStyle;
- (void)_layoutDefaultStyle;
- (struct UIEdgeInsets)_backgroundEdgeInsetsForStyle:(long long)arg1;
- (_Bool)_shouldHideHDRButton;
- (_Bool)_shouldHideElapsedTimeView;
- (void)_updateHiddenViewsForFlashExpansion;
- (void)_updateBackgroundStyleAnimated:(_Bool)arg1;
- (void)_updateStyleAnimated:(_Bool)arg1;
@property(readonly, nonatomic, getter=isFloating) _Bool floating;
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMTopBarInitialization;

@end
