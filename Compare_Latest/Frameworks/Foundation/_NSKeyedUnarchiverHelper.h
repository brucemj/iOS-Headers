/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface _NSKeyedUnarchiverHelper : NSObject
{
    NSArray *_white;
    unsigned int _lastRef;
    NSMutableArray *_allowedClasses;
}

- (_Bool)classNameAllowed:(Class)arg1;
- (void)setAllowedClassNames:(id)arg1;
- (id)allowedClassNames;
- (void)dealloc;
- (id)init;

@end
