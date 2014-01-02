/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBDismissOnlyAlertItem.h"

@class NSString, UITextView, UIView;

@interface SBActivationInfoAlertItem : SBDismissOnlyAlertItem
{
    UIView *_accessoryView;
    UITextView *_textView;
    NSString *_meid;
    NSString *_imei;
    NSString *_iccid;
    double _alertHeight;
}

+ (id)activeItem;
- (id)_formattedIMEI;
- (id)_formattedICCID;
- (_Bool)allowInSetup;
- (_Bool)forcesModalAlertAppearance;
- (void)didDeactivateForReason:(int)arg1;
- (void)willActivate;
- (void)_simStatusChanged:(id)arg1;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)_updateTextView;
- (void)dealloc;
- (id)init;

@end
