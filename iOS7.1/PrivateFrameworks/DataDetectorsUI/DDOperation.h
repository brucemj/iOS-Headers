//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSCopying.h"

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface DDOperation : NSOperation <NSCopying>
{
    id _container;
    BOOL _needContinuation;
    int _generationNumber;
    unsigned int _types;
    struct __DDScanQuery *_query;
    NSArray *_results;
    BOOL _isCurrentlyUsingTheScanner;
    BOOL _isDiscarded;
    int _tryCount;
    int _containerNotReadyTryCount;
    NSDictionary *_context;
}

+ (BOOL)_needsFullScannerForDetectionTypes:(unsigned int)arg1;
+ (struct __DDScanner *)_sharedScannerForTypes:(unsigned int)arg1;
+ (CDUnknownBlockType)urlificationBlockForTypes:(unsigned int)arg1;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property BOOL isDiscarded; // @synthesize isDiscarded=_isDiscarded;
@property(nonatomic) unsigned int detectionTypes; // @synthesize detectionTypes=_types;
@property int tryCount; // @synthesize tryCount=_tryCount;
@property int generationNumber; // @synthesize generationNumber=_generationNumber;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property BOOL needContinuation; // @synthesize needContinuation=_needContinuation;
@property(retain, nonatomic) id container; // @synthesize container=_container;
- (void)dispatchScanQueryCreationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)needsToStartOver;
- (BOOL)containerIsReady;
- (BOOL)needsFullScanner;
- (void)_setScanQuery:(struct __DDScanQuery *)arg1;
- (void)cleanup;
- (void)cancel;
- (void)main;
- (void)dispatchContainerModificationBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithContainer:(id)arg1;
- (struct __DDScanQuery *)scanQuery;
- (BOOL)doURLificationOnDocument;
- (int)_createScanQuery;
- (struct __DDScanQuery *)_createScanQueryForBackend;
- (void)_updateGenerationNumber;
- (BOOL)_rangeValidForContainer;
- (BOOL)_containerReadyForDetection;
- (void)_applyContainerRestrictionsToTypes;

@end
