/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GQDDrawable;

// Not exported
@interface GQDWrapPoint : NSObject
{
    struct CGPoint mPoint;
    float mDistance;
    GQDDrawable *mDrawable;
    int mFlowType;
    int mZIndex;
}

- (id).cxx_construct;
- (int)zIndex;
- (long long)comparePoint:(id)arg1;
- (id)initWithX:(float)arg1 y:(float)arg2 flowType:(int)arg3 drawable:(id)arg4;

@end
