/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class AVPlayerItemAccessLog, AVPlayerItemAccessLogEvent, AVPlayerItemErrorLog, AVPlayerItemErrorLogEvent, MPMediaItem, MPMediaLibrary, MPMediaQuery, MPMediaQueryCriteria, NSArray, NSString, UIImage;

#pragma mark Named Structures

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct MLArtworkFormatSpec {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    int _field5;
    int _field6;
    char _field7;
};

struct MLArtworkInstanceInfo {
    struct MLArtworkFormatSpec _field1;
    struct CGRect _field2;
};

struct MPMediaItemArtworkInternal {
    UIImage *image;
};

struct MPMediaItemCollectionInternal {
    NSArray *_items;
    MPMediaQuery *_itemsQuery;
    unsigned int _itemsCount;
    MPMediaItem *_representativeItem;
    int _containedMediaTypes;
};

struct MPMediaPropertyPredicateInternal {
    NSString *_property;
    id _value;
    int _comparisonType;
};

struct MPMediaQueryInternal {
    MPMediaLibrary *_mediaLibrary;
    MPMediaQueryCriteria *_criteria;
    int _isFilteringDisabled;
    NSArray *_staticEntities;
    int _staticEntityType;
};

struct MPMovieAccessLogEventInternal {
    AVPlayerItemAccessLogEvent *event;
};

struct MPMovieAccessLogInternal {
    AVPlayerItemAccessLog *accessLog;
};

struct MPMovieErrorLogEventInternal {
    AVPlayerItemErrorLogEvent *event;
};

struct MPMovieErrorLogInternal {
    AVPlayerItemErrorLog *errorLog;
};

struct StackItem {
    void *_field1;
    struct StackItem *_field2;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    int _field1;
    id _field2;
    float _field3;
    int _field4;
    int _field5;
    struct UIEdgeInsets _field6;
    struct UIEdgeInsets _field7;
    id _field8;
    id _field9;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
        float _field7;
        float _field8;
    } _field10;
} CDStruct_1d16deb2;

