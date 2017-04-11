/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerMetadataSyncPersistedState : BRCPersistedState {
    NSDate * _lastSyncDate;
    BOOL  _needsContainerMetadataSyncDown;
    BOOL  _needsSharedDBSyncDown;
    CKServerChangeToken * _serverChangeToken;
}

@property (retain) NSDate *lastSyncDate;
@property (nonatomic) BOOL needsContainerMetadataSyncDown;
@property (nonatomic) BOOL needsSharedDBSyncDown;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;

+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastSyncDate;
- (BOOL)needsContainerMetadataSyncDown;
- (BOOL)needsSharedDBSyncDown;
- (id)serverChangeToken;
- (void)setLastSyncDate:(id)arg1;
- (void)setNeedsContainerMetadataSyncDown:(BOOL)arg1;
- (void)setNeedsSharedDBSyncDown:(BOOL)arg1;
- (void)setServerChangeToken:(id)arg1;

@end