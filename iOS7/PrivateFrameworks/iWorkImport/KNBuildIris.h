/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/KNIrisBase.h>

#import "KNFrameBuildAnimator-Protocol.h"

// Not exported
@interface KNBuildIris : KNIrisBase <KNFrameBuildAnimator>
{
}

+ (id)thumbnailImageNameForType:(int)arg1;
+ (_Bool)requiresSingleTexturePerStage;
+ (id)supportedTypes;
+ (_Bool)isTransition;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;

@end
