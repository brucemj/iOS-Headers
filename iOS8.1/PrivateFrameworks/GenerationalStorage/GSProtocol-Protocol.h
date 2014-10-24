//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GSDocumentIdentifier, NSArray, NSData, NSDictionary, NSFileHandle, NSString, NSURL, NSUUID;

@protocol GSProtocol
- (void)getFileIdForDocumentId:(unsigned long long)arg1 onDevice:(int)arg2 reply:(void (^)(unsigned long long, int))arg3;
- (oneway void)setLogLevel:(unsigned int)arg1;
- (void)requestFreeSpace:(unsigned long long)arg1 forVolume:(NSURL *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)setAdditionNameSpaceInStorage:(long long)arg1 nameSpace:(NSString *)arg2 additionName:(NSString *)arg3 value:(NSString *)arg4 completionHandler:(void (^)(NSDictionary *, NSError *))arg5;
- (void)setAdditionDisplayNameInStorage:(long long)arg1 nameSpace:(NSString *)arg2 additionName:(NSString *)arg3 value:(NSString *)arg4 reply:(void (^)(BOOL, NSError *))arg5;
- (void)mergeAdditionInfoValueInStorage:(long long)arg1 nameSpace:(NSString *)arg2 additionName:(NSString *)arg3 value:(NSData *)arg4 reply:(void (^)(BOOL, NSError *))arg5;
- (void)createAdditionInStorage:(long long)arg1 stagedFileDescriptor:(NSFileHandle *)arg2 creationInfo:(NSDictionary *)arg3 completionHandler:(void (^)(NSDictionary *, NSData *, NSData *, NSError *))arg4;
- (void)removeAdditionsInStorage:(long long)arg1 removalSpec:(NSDictionary *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)setAdditionOptionsInStorage:(long long)arg1 nameSpace:(NSString *)arg2 additionName:(NSString *)arg3 value:(unsigned long long)arg4 reply:(void (^)(BOOL, NSError *))arg5;
- (void)listAdditionsOfStorage:(long long)arg1 nameSpace:(NSString *)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 andEnumerationState:(id)arg5 completionHandler:(void (^)(NSArray *, NSData *, NSData *, id, NSError *))arg6;
- (void)getAdditionsInStorage:(long long)arg1 andNameSpace:(NSString *)arg2 named:(NSArray *)arg3 completionHandler:(void (^)(NSArray *, NSData *, NSData *, NSError *))arg4;
- (void)getAdditionInStorage:(long long)arg1 andNameSpace:(NSString *)arg2 named:(NSString *)arg3 completionHandler:(void (^)(NSDictionary *, NSData *, NSData *, NSError *))arg4;
- (oneway void)permanentStorageClose:(unsigned long long)arg1;
- (void)permanentStorageOpenForHandle:(NSFileHandle *)arg1 withRemoteID:(unsigned long long)arg2 andDocumentID:(GSDocumentIdentifier *)arg3 reply:(void (^)(NSNumber *, NSData *, NSData *, NSError *))arg4;
- (oneway void)stagingPrefixRelinquish:(NSString *)arg1;
- (void)stagingPrefixForDevice:(int)arg1 volumeUUID:(NSUUID *)arg2 reply:(void (^)(NSString *, NSData *, NSError *))arg3;
- (void)isPermanentStorageSupportedForHandle:(NSFileHandle *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
@end
