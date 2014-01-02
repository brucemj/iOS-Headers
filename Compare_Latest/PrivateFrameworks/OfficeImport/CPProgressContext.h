/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CPProgressStage, NSDate, NSMutableArray, TSUProgressContext;

// Not exported
@interface CPProgressContext : NSObject
{
    TSUProgressContext *m_parentProgressContext;
    CPProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    NSMutableArray *m_stackOfBranches;
}

+ (double)currentPosition;
+ (void)setMessage:(id)arg1;
+ (void)setProgress:(double)arg1;
+ (void)advanceProgress:(double)arg1;
+ (void)popBranch;
+ (void)pushBranch:(id)arg1;
+ (void)endBranch:(id)arg1;
+ (id)createBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;
+ (void)endStage;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
+ (void)removeProgressObserver:(id)arg1;
+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
+ (void)removeContextForCurrentThread;
+ (void)createContextForCurrentThreadWithParentContext:(id)arg1;

@end
