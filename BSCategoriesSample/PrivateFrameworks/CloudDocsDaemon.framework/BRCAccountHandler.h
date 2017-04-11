/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAccountHandler : NSObject <MCProfileConnectionObserver> {
    NSString * _currentAccountID;
    <BRCAccountHandlerDelegate> * _delegate;
    BOOL  _hasSetMigrationComplete;
    NSObject<OS_dispatch_queue> * _migrationStatusSetterQueue;
    NSObject<OS_dispatch_queue> * _pushQueue;
    NSObject<OS_dispatch_queue> * _queue;
    BRCAccountSession * _session;
    NSMutableDictionary * _syncPolicyByFolderType;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BRCAccountHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *pushQueue;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (readonly) Class superclass;

+ (void)_migrateAccountIfNecessaryForAccountID:(id)arg1;
+ (id)accountIDPath;
+ (id)dbAccountID;
+ (BOOL)destroyCurrentAccountSynchronously;
+ (id)icloudDriveAccountID;
+ (id)mobileDocsAccountID;
+ (id)primaryiCloudAccount;
+ (id)primaryiCloudAccountID;

- (void).cxx_destruct;
- (void)__destroySessionWithIntents:(id)arg1;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (BOOL)_createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2;
- (void)_destroyCurrentSessionSynchronously;
- (void)_handleAccountDidChange;
- (void)_handleAccountWillChange;
- (BOOL)_loadCurrentOnDiskAccountSessionWithError:(id*)arg1;
- (void)_updateAccountToAccountID:(id)arg1;
- (BOOL)createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)destroyCurrentSessionSynchronously;
- (id)init;
- (void)jetsamCloudDocsApps;
- (void)markMigrationCompletedForDSID:(id)arg1;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)pushQueue;
- (void)reloadSyncedFolderPolicies;
- (void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(BOOL)arg1;
- (id)session;
- (BOOL)setDBAccountID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldUpdateAccount:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)setSyncPolicy:(int)arg1 forSyncedFolderType:(unsigned int)arg2;
- (void)startAndLoadCurrentAccountSynchronously;
- (int)syncPolicyforSyncedFolderType:(unsigned int)arg1;

@end