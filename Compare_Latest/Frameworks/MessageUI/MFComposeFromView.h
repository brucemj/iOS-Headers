/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFComposeHeaderView.h>

@class UILabel, UIView;

@interface MFComposeFromView : MFComposeHeaderView
{
    UILabel *_accountLabel;
    UIView *_background;
}

- (void)tintColorDidChange;
- (void)setLabelHighlighted:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_setBackgroundVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setAccountLabel:(id)arg1;
- (struct CGRect)accountLabelRect;
- (id)_accountLabel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
