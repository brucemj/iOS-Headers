/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SBWidgetViewControllerHostDelegate <NSObject>

@optional
- (void)widget:(id)arg1 didUpdatePreferredSize:(struct CGSize)arg2;
- (void)widget:(id)arg1 requestsLaunchOfURL:(id)arg2;
- (void)widget:(id)arg1 requestsPresentationOfViewController:(id)arg2 presentationStyle:(long long)arg3 context:(id)arg4 completion:(id)arg5;
@end

