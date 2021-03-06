/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface STWorkoutController : NSObject
{
    int _workoutState;
    int _workoutType;
    int _calibrationType;
    int _workoutPreset;
    float _customWorkoutDuration;
    float _customWorkoutDistance;
    int _customWorkoutCalories;
    double _elapsedWorkoutTime;
    int _distanceUnits;
    BOOL _skipNextEmpedSearch;
}

+ (id)shortDescriptionForWorkoutType:(int)arg1 preset:(int)arg2;
+ (id)stringQuantificationForWorkoutType:(int)arg1 preset:(int)arg2;

@end

