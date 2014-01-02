/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (UIStringDrawing)
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6;
- (struct CGSize)sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double *)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 withFont:(id)arg2;
- (struct CGSize)sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)sizeWithFont:(id)arg1;
@end
