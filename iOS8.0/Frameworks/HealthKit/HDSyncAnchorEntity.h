//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HDHealthEntity.h"

@interface HDSyncAnchorEntity : HDHealthEntity
{
}

+ (int)protectionClass;
+ (id)createTableSQL;
+ (id)databaseTable;
+ (void)load;
+ (id)_predicateForSyncStoreEntity:(id)arg1;
+ (id)_predicateForSyncEntity:(id)arg1;
+ (void)_deleteAllAnchorsForSyncStoreEntity:(id)arg1 database:(id)arg2;
+ (void)setSyncAnchor:(id)arg1 forEntity:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4;
+ (id)syncAnchorForEntity:(Class)arg1 store:(id)arg2 healthDatabase:(id)arg3;
+ (id)largestSyncAnchorForEntity:(Class)arg1 healthDatabase:(id)arg2;

@end

