/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpringBoardFoundation/SBFWallpaperView.h>

@class NSMutableSet, UIImage;

@interface SBFStaticWallpaperView : SBFWallpaperView
{
    NSMutableSet *_mappedBackdropKeys;
    UIImage *_image;
    struct **_colorBoxes;
    unsigned long long _colorBoxRowCount;
    unsigned long long _colorBoxColCount;
    unsigned long long _colorBoxSize;
}

+ (_Bool)_allowsRasterization;
+ (_Bool)_allowsParallax;
- (void)_freeColorBoxes;
- (void)_buildColorBoxes;
- (void)_rebuildColorBoxes;
- (struct CGSize)_imageSize;
- (float)_zoomScale;
- (unsigned long long)_colorBoxSize;
- (void)_removeMappedBlurs;
- (id)_treatedImageKey;
- (id)_mappedImageKeyForParameters:(CDStruct_2ec95fd7)arg1 includingTint:(_Bool)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)_averageColorInContentViewRect:(struct CGRect)arg1 smudgeRadius:(double)arg2;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (double)contrastInRect:(struct CGRect)arg1;
- (void)setContentsRect:(struct CGRect)arg1;
- (id)_treatedImage;
- (id)_displayedImage;
- (id)_untintedImageForBackdropParameters:(CDStruct_2ec95fd7)arg1;
- (id)_imageForBackdropParameters:(CDStruct_2ec95fd7)arg1 includeTint:(_Bool)arg2;
- (id)_blurredImage;
- (id)_computeAverageColor;
- (id)wallpaperImage;
- (_Bool)isDisplayingWallpaper:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2;

@end

