/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSLinguisticTagger, NSMutableArray, NSMutableOrderedSet, NSString;

@interface AXLanguageTaggedContent : NSObject
{
    NSArray *_currentDialects;
    struct _NSRange _currentChunk;
    _Bool _predictedByTagger;
    _Bool _tagged;
    NSMutableArray *_tags;
    NSLinguisticTagger *_linguisticTagger;
    NSMutableOrderedSet *_unpredictedAmbiguousLangMaps;
    NSString *_userPreferredLangID;
}

@property(retain, nonatomic) NSArray *currentDialects; // @synthesize currentDialects=_currentDialects;
@property(copy, nonatomic) NSString *userPreferredLangID; // @synthesize userPreferredLangID=_userPreferredLangID;
@property(retain, nonatomic) NSMutableOrderedSet *unpredictedAmbiguousLangMaps; // @synthesize unpredictedAmbiguousLangMaps=_unpredictedAmbiguousLangMaps;
@property(retain, nonatomic) NSLinguisticTagger *linguisticTagger; // @synthesize linguisticTagger=_linguisticTagger;
@property(nonatomic, getter=isTagged) _Bool tagged; // @synthesize tagged=_tagged;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
- (void)updateTagsForLocalePrefChange;
- (id)primaryUnambiguousDialect;
- (id)primaryAmbiguousDialect;
- (void)_addTag;
- (void)_manuallyProcessContentWithRange:(struct _NSRange)arg1;
- (_Bool)hasOnlyNonWesternLangMaps;
- (_Bool)hasOnlyWesternLangMaps;
- (id)ambiguousLangMaps;
- (id)unambiguousLangMaps;
- (id)significantAmbiguousLangMapsForUserKeyboards;
- (id)significantAmbiguousLangMaps;
- (_Bool)langMapIsSignificant:(id)arg1;
- (void)tagContent;
- (void)enumeratePredictedTags:(id)arg1;
- (void)enumerateUnpredictedTags:(id)arg1;
@property(readonly, nonatomic) NSString *content;
- (id)description;
- (void)dealloc;
- (id)initWithContent:(id)arg1;

@end
