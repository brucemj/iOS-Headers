//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABContactGroupPickerViewController, NSArray, NSString;

@protocol ABContactGroupPickerDelegate <NSObject>
- (void)contactGroupPickerDidFinish:(ABContactGroupPickerViewController *)arg1 withGroup:(NSString *)arg2;
- (void)contactGroupPickerDidCancel:(ABContactGroupPickerViewController *)arg1;
- (NSArray *)alreadyPickedGroups;
@end
