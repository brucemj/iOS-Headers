/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVCaptureDeviceFormat, NSMutableDictionary, NSString;

@interface AVResolvedCaptureOptions : NSObject
{
    NSString *sessionPreset;
    _Bool captureSessionPresetChanging;
    NSMutableDictionary *baseCaptureOptions;
    NSMutableDictionary *optionsOverrides;
    struct __CFDictionary *outputSettingsOverrides;
    _Bool usePreviewSizedCaptureBuffers;
    _Bool useStabilizationIfAvailable;
    _Bool hasStillImageOutput;
    NSString *faceDetectionMode;
    _Bool faceDetectionNotificationsEnabled;
    CDStruct_1b6d18a9 videoConnectionMinFrameDuration;
    CDStruct_1b6d18a9 videoConnectionMaxFrameDuration;
    AVCaptureDeviceFormat *resolvedVideoDeviceFormat;
    CDStruct_1b6d18a9 resolvedVideoMinFrameDuration;
    CDStruct_1b6d18a9 resolvedVideoMaxFrameDuration;
    NSMutableDictionary *resolvedVideoCompressionProperties;
    NSMutableDictionary *resolvedCaptureOptions;
    _Bool resolvesFrameRatesUsingDefaultValues;
    _Bool resetsVideoZoomFactorToDefaultValue;
}

+ (id)resolvedCaptureOptionsWithSessionPreset:(id)arg1 captureOptionsDictionary:(id)arg2;
+ (void)initialize;
@property(readonly) NSString *sessionPreset; // @synthesize sessionPreset;
@property _Bool resetsVideoZoomFactorToDefaultValue; // @synthesize resetsVideoZoomFactorToDefaultValue;
@property _Bool resolvesFrameRatesUsingDefaultValues; // @synthesize resolvesFrameRatesUsingDefaultValues;
- (void)setBestCaptureResolutionForAVScalingMode:(id)arg1 captureOptions:(id)arg2;
- (void)setBestPreviewResolutionForCaptureOptions:(id)arg1;
- (id)deviceFormatForCamera:(id)arg1 captureOptions:(id)arg2;
- (void)applyInputPriorityOverridesToCaptureOptions:(id)arg1 forCamera:(id)arg2;
- (void)resolveOutputSettingsToCaptureOptions:(id)arg1 resolvedScalingMode:(id *)arg2;
- (void)resolveFrameRatesToCaptureOptions:(id)arg1 withCamera:(id)arg2 activeFormat:(id)arg3;
- (_Bool)hasOverridesAffectingPreviewFormatInResolvedOptions:(id)arg1 withScalingMode:(id)arg2;
- (_Bool)hasOverridesAffectingCaptureFormatInResolvedOptions:(id)arg1 withScalingMode:(id)arg2;
- (_Bool)hasHeightOverrideInResolvedOptions:(id)arg1;
- (_Bool)hasWidthOverrideInResolvedOptions:(id)arg1;
- (id)cameraForCaptureOptions:(id)arg1;
- (id)resolvedVideoCompressionProperties;
- (id)resolvedVideoSettingsForMovieFileOutput;
- (id)resolvedVideoSettingsForAssetWriter;
- (id)resolvedVideoSettingsWithScalingAllowed:(_Bool)arg1;
- (CDStruct_1b6d18a9)resolvedVideoMaxFrameDuration;
- (CDStruct_1b6d18a9)resolvedVideoMinFrameDuration;
- (id)resolvedVideoDeviceFormat;
- (id)resolvedCaptureOptionsDictionary;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)addMaxFrameDuration:(CDStruct_1b6d18a9)arg1 forConnection:(id)arg2;
- (void)addMinFrameDuration:(CDStruct_1b6d18a9)arg1 forConnection:(id)arg2;
- (void)enableFaceDetectionNotificationsForConnection:(id)arg1;
- (void)addFaceDetectionMode:(id)arg1 forConnection:(id)arg2;
- (int)rankForFaceDetectionMode:(id)arg1;
@property(nonatomic) _Bool hasStillImageOutput;
- (void)useStabilizationIfAvailableForConnection:(id)arg1;
- (void)usePreviewSizedCaptureBuffersForConnection:(id)arg1;
- (void)addOutputSettings:(id)arg1 forConnection:(id)arg2;
- (id)baseCaptureOptions;
- (void)dealloc;
- (id)initWithSessionPreset:(id)arg1 captureOptionsDictionary:(id)arg2;

@end
