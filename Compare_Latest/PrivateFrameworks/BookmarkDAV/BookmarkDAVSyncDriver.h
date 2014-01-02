/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CoreDAVContainerInfoTaskGroupDelegate-Protocol.h"
#import "CoreDAVDeleteTaskDelegate-Protocol.h"
#import "CoreDAVGetAccountPropertiesTaskGroupDelegate-Protocol.h"
#import "CoreDAVLocalDBTreeInfoProvider-Protocol.h"

@class BookmarkDAVSyncData, NSDictionary, NSMutableSet, NSString, NSURL;

@interface BookmarkDAVSyncDriver : NSObject <CoreDAVLocalDBTreeInfoProvider, CoreDAVDeleteTaskDelegate, CoreDAVGetAccountPropertiesTaskGroupDelegate, CoreDAVContainerInfoTaskGroupDelegate>
{
    id <CoreDAVAccountInfoProvider> _accountInfoProvider;
    id <CoreDAVTaskManager> _taskManager;
    NSMutableSet *_outstandingTaskGroups;
    id _getAccountPropertiesHandler;
    id _syncHandler;
    void *_changeToken;
    NSURL *_homeURL;
    NSString *_pushKey;
    NSDictionary *_pushTransport;
    id _openDBBlock;
    id _getDBBlock;
    id _saveDBBlock;
    id _closeDBBlock;
    BookmarkDAVSyncData *_topLevelSyncData;
    id _registerForPush;
    _Bool _forceSafariOrdering;
    _Bool _forceSave;
}

@property(copy) id syncHandler; // @synthesize syncHandler=_syncHandler;
@property(copy) id getAccountPropertiesHandler; // @synthesize getAccountPropertiesHandler=_getAccountPropertiesHandler;
@property(readonly) id <CoreDAVAccountInfoProvider> accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
@property(retain) NSDictionary *pushTransport; // @synthesize pushTransport=_pushTransport;
@property(retain) NSString *pushKey; // @synthesize pushKey=_pushKey;
@property(retain) NSURL *homeURL; // @synthesize homeURL=_homeURL;
@property(readonly) unsigned long long outstandingActionCount;
- (void)notePutToURL:(id)arg1 withDataPayload:(id)arg2 finishedWithIgnoredError:(id)arg3;
- (void)recursiveContainerSyncTask:(id)arg1 completedFullSyncWithNewCTag:(id)arg2 newPTag:(id)arg3 newSyncToken:(id)arg4 error:(id)arg5;
- (void)recursiveContainerSyncTask:(id)arg1 completedSyncOfFolderWithURL:(id)arg2 newCTag:(id)arg3 newPTag:(id)arg4 addedOrModified:(id)arg5 removed:(id)arg6 error:(id)arg7;
- (void)recursiveContainerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3;
- (void)_handleAddsOrModifies:(id)arg1 removes:(id)arg2;
- (void)recursiveContainerSyncTask:(id)arg1 receivedAddedOrModifiedFolder:(id)arg2;
- (void)_makeFolderFromContainer:(id)arg1;
- (void)_makeBookmarkFromDAVNode:(id)arg1;
- (_Bool)setLocalETag:(id)arg1 forItemWithURL:(id)arg2;
- (id)copyAllLocalURLsInFolderWithURL:(id)arg1;
- (id)copyLocalETagsForURLs:(id)arg1;
- (_Bool)getCTag:(id *)arg1 pTag:(id *)arg2 forFolderWithURL:(id)arg3;
- (void)syncWithRemoteChanges:(_Bool)arg1 completionHandler:(id)arg2;
- (void)_syncWithRemoteChanges:(_Bool)arg1 completionHandler:(id)arg2 skipAddChanges:(void)arg3;
- (void)_setChildrenOrder:(id)arg1 forFolderURL:(id)arg2;
- (int)_clientOrderOfItemPrecedingItemAtServerOrder:(int)arg1 inParentWithURL:(id)arg2;
- (id)_dbRelativeString:(id)arg1;
- (int)_serverOrderForChange:(void *)arg1;
- (void)_setServerIdOnItem:(void *)arg1 isBookmark:(_Bool)arg2 suggestedId:(id)arg3;
- (id)_copyDAVFolderFromFolderRef:(void *)arg1;
- (id)_copyDAVBookmarkFromBookmarkRef:(void *)arg1;
- (void)getAccountPropertiesWithCompletionHandler:(id)arg1;
- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2;
- (void)_closeDBAndSave:(_Bool)arg1;
- (void)_saveDB;
@property(readonly) BookmarkDAVSyncData *topLevelSyncData;
- (void)_invokeAndNilGetAccountPropertiesHandlerWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 openDBBlock:(id)arg3 getDBBlock:(void)arg4 saveDBBlock:(id)arg5 closeDBBlock:(void)arg6 registerForPush:(id)arg7 forceSafariOrdering:(void)arg8;

@end
