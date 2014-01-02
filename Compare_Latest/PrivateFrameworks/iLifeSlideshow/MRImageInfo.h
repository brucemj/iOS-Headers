/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MRGIFMoviePlayer, MRImage, NSDate, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MRImageInfo : NSObject
{
    NSString *_imageBufferKey;
    NSRecursiveLock *_lock;
    unsigned long long _retainCount;
    NSDate *_modDate;
    MRImage *_image;
    NSMutableDictionary *_options;
    MRGIFMoviePlayer *_gifMoviePlayer;
    NSMutableDictionary *_imagesForRemoteKeys;
    _Bool _isMovie;
}

@property(retain) NSMutableDictionary *imagesForRemoteKeys; // @synthesize imagesForRemoteKeys=_imagesForRemoteKeys;
@property(retain) MRGIFMoviePlayer *gifMoviePlayer; // @synthesize gifMoviePlayer=_gifMoviePlayer;
@property _Bool isMovie; // @synthesize isMovie=_isMovie;
@property(retain) NSMutableDictionary *options; // @synthesize options=_options;
@property(retain) MRImage *image; // @synthesize image=_image;
@property(retain) NSDate *modDate; // @synthesize modDate=_modDate;
@property unsigned long long retainCount; // @synthesize retainCount=_retainCount;
@property(readonly) NSString *imageBufferKey; // @synthesize imageBufferKey=_imageBufferKey;
- (void)unlock;
- (void)lock;
- (void)cleanup;
- (void)dealloc;
- (id)initWithImageBufferKey:(id)arg1;

@end
