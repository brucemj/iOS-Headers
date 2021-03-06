/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol AssistantUIDelegate
- (void)doneWithAssistantResult:(int)arg1;
- (void)showUIConfigPromptForGuestNetConfigWithParamDict:(id)arg1;
- (void)showUIConfigPromptToSendDiagsUsageStatsWithParamDict:(id)arg1;
- (void)connectionVerificationSucceededForSelector:(int)arg1;
- (void)showAskUserPluginAudioCablingForStatus:(int)arg1 paramDict:(id)arg2;
- (void)showAskUserSwapCablingForStatus:(int)arg1 paramDict:(id)arg2;
- (void)showAskUserForPPPoECredentialsForStatus:(int)arg1 paramDict:(id)arg2;
- (void)showTellUserToResetBroadbandDeviceForStatus:(int)arg1 paramDict:(id)arg2;
- (void)showTellUserToPlugInEthernetForStatus:(int)arg1 paramDict:(id)arg2;
- (void)presentUIForSetupResult:(int)arg1 baseStationInfo:(id)arg2 withPrompt:(id)arg3;
- (void)presentUIForSetupStatusWithRecommendationDict:(id)arg1;
- (void)presentUIForStepByStepResult:(int)arg1;
- (void)presentUIForStepByStepNextStep:(int)arg1 paramDict:(id)arg2;
- (void)presentUIForStepByStepStart;
- (void)presentUIForRecommendationResult:(int)arg1 paramDict:(id)arg2;
- (void)presentUIForRecommmendationTargetInfo:(id)arg1;
- (void)presentUIForRecommendationStatus;
- (void)assistantUpdateProgress:(id)arg1 forState:(int)arg2;

@optional
- (void)showUIConfigPromptPostHook;
- (void)showUIConfigPromptPreHook;
@end

