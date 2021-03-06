//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UISettings.h"

@interface SBFParallaxSettings : _UISettings
{
    BOOL _slideEnabled;
    BOOL _tiltEnabled;
    BOOL _increaseEnabled;
    int _slideDirectionX;
    int _slideDirectionY;
    float _slidePixelsX;
    float _slidePixelsY;
    int _tiltDirectionX;
    int _tiltDirectionY;
    float _tiltDegreesX;
    float _tiltDegreesY;
    int _distanceFromScreen;
    float _slideIncreaseX;
    float _slideIncreaseY;
}

+ (id)settingsControllerModule;
@property float slideIncreaseY; // @synthesize slideIncreaseY=_slideIncreaseY;
@property float slideIncreaseX; // @synthesize slideIncreaseX=_slideIncreaseX;
@property BOOL increaseEnabled; // @synthesize increaseEnabled=_increaseEnabled;
@property int distanceFromScreen; // @synthesize distanceFromScreen=_distanceFromScreen;
@property float tiltDegreesY; // @synthesize tiltDegreesY=_tiltDegreesY;
@property float tiltDegreesX; // @synthesize tiltDegreesX=_tiltDegreesX;
@property int tiltDirectionY; // @synthesize tiltDirectionY=_tiltDirectionY;
@property int tiltDirectionX; // @synthesize tiltDirectionX=_tiltDirectionX;
@property BOOL tiltEnabled; // @synthesize tiltEnabled=_tiltEnabled;
@property float slidePixelsY; // @synthesize slidePixelsY=_slidePixelsY;
@property float slidePixelsX; // @synthesize slidePixelsX=_slidePixelsX;
@property int slideDirectionY; // @synthesize slideDirectionY=_slideDirectionY;
@property int slideDirectionX; // @synthesize slideDirectionX=_slideDirectionX;
@property BOOL slideEnabled; // @synthesize slideEnabled=_slideEnabled;
- (void)setDefaultValues;

@end

