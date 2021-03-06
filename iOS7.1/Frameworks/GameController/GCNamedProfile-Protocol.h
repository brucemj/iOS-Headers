//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCController, GCControllerElement, NSString;

@protocol GCNamedProfile <NSObject>
@property(readonly) NSString *name;
- (void)setController:(GCController *)arg1;
- (void)setPlayerIndex:(int)arg1;
- (id)initWithController:(GCController *)arg1;
- (void)didChangeValueForElement:(GCControllerElement *)arg1;
- (GCControllerElement *)inputForElement:(struct __IOHIDElement *)arg1;
@end

