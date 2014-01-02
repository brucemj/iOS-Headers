/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface MFHardwareJPEGScaler : NSObject
{
    struct __IOSurface *_ioSurfaceRef;
    NSData *_imageData;
    struct __CFDictionary *_imageProperties;
    _Bool _canHardwareScaleImage;
}

- (_Bool)scaleImageToFitLargestDimension:(id)arg1 dataConsumer:(id)arg2;
- (_Bool)_decodeImageToIOSurface;
- (_Bool)_isJPEGImage:(struct CGImageSource *)arg1;
- (void)dealloc;
- (id)initWithImageData:(id)arg1 imageSource:(struct CGImageSource *)arg2;

@end
