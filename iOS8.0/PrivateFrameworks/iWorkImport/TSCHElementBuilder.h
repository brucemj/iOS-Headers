//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSCHElementBuilder : NSObject
{
}

+ (struct CGRect)elementsRectForElementsDrawnByRenderState:(id)arg1;
+ (struct CGRect)clipRectForElementsDrawnByRenderState:(id)arg1;
+ (struct CGRect)p_chartLayoutSpaceClipRectUnionForElementsDrawnByRenderState:(id)arg1 returningItemCount:(unsigned int *)arg2;
- (BOOL)hasAxisLineInBody:(id)arg1 forAxis:(id)arg2 outTransform:(struct CGAffineTransform *)arg3 outLine:(CDStruct_6fa32076 *)arg4;
- (unsigned int)countOfGridLinesInBody:(id)arg1 forAxis:(id)arg2 minor:(BOOL)arg3 outNewLineDescriptors:(CDStruct_183601bc **)arg4;
- (struct CGPoint)labelPointForPosition:(unsigned int)arg1 rect:(struct CGRect)arg2 stringSize:(struct CGSize)arg3;
- (unsigned int)countOfHitCheckRegionsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementPaths:(const struct CGPath ***)arg4 outSelectionKnobLocations:(id *)arg5;
- (struct CGAffineTransform)transformForRenderingTrendlineTextForSeries:(id)arg1 forAreaLayout:(id)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 outParagraphStyle:(id *)arg5 outNewString:(const struct __CFAttributedString **)arg6;
- (struct CGAffineTransform)transformForRenderingR2TextForSeries:(id)arg1 forAreaLayout:(id)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 outParagraphStyle:(id *)arg5 outString:(id *)arg6;
- (struct CGAffineTransform)p_transformForRenderingTrendlineTextNotR2:(BOOL)arg1 forSeries:(id)arg2 forAreaLayout:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outParagraphStyle:(id *)arg6 outString:(const struct __CFAttributedString **)arg7;
- (void)trendlineElementForSeries:(id)arg1 forBodyLayout:(id)arg2 outElementBounds:(struct CGRect *)arg3 outElementClipRect:(struct CGRect *)arg4 outElementPath:(id *)arg5;
- (void)p_trendlineInfoForSeries:(id)arg1 forBodyLayout:(id)arg2 outVertical:(char *)arg3 outOffsetInBody:(double *)arg4;
- (unsigned int)countOfErrorBarsInSeries:(id)arg1 forGroups:(id)arg2 forAxisID:(id)arg3 forBodyLayout:(id)arg4 outClipRect:(struct CGRect *)arg5 outNewErrorBarDescriptors:(CDStruct_183601bc **)arg6;
- (struct CGAffineTransform)transformForRenderingLabelInBody:(id)arg1 forSeries:(unsigned int)arg2 forGroup:(unsigned int)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5;
- (unsigned int)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform **)arg4 outNewElementSizes:(struct CGSize **)arg5 outNewClipRect:(struct CGRect **)arg6 outNewStrings:(id **)arg7;
- (unsigned int)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect **)arg4 outNewClipRects:(struct CGRect **)arg5 outNewElementPaths:(const struct CGPath ***)arg6 outSelectionKnobLocations:(id *)arg7;

@end
