/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)_setAttributedDictionaryClass:(Class)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned int)arg3 usingBlock:(id)arg4;
- (void)enumerateAttributesInRange:(struct _NSRange)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attributesAtIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToAttributedString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)length;
- (id)attributedStringByWeaklyAddingAttributes:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1 replacingCharactersInRanges:(const struct _NSRange *)arg2 numberOfRanges:(int)arg3 withString:(id)arg4;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)_createAttributedSubstringWithRange:(struct _NSRange)arg1;
- (unsigned long)_cfTypeID;

@end

