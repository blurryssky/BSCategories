/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDirectoryItem : BRCLocalItem

@property (nonatomic, readonly) BRCAliasItem *asBRAlias;
@property (nonatomic, readonly) BRCDirectoryItem *asDirectory;
@property (nonatomic, readonly) BRCDocumentItem *asDocument;

- (BOOL)_deleteFromDB:(id)arg1 keepAliases:(BOOL)arg2;
- (BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (BOOL)_markChildrenLostForDeadParent;
- (void)_markLostDirectoryAsAlmostDead;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1;
- (BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (id)asDirectory;
- (BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2;
- (BOOL)evictInTask:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)fixupItemAfterCrossZoneMovedCreationWithLookup:(id)arg1;
- (BOOL)hasDeadChildren;
- (BOOL)hasLiveChildren;
- (BOOL)hasLostChildren;
- (BOOL)hasPendingLostChildren;
- (BOOL)isDirectory;
- (BOOL)markChildrenLost;
- (void)markRemovedFromFilesystemForServerEdit:(BOOL)arg1;
- (float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (BOOL)startDownloadInTask:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (void)transformBackAsDirectoryInAppLibrary:(id)arg1;
- (void)transformIntoFSRootWithAppLibrary:(id)arg1 zone:(id)arg2;
- (BOOL)updateFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2;

@end