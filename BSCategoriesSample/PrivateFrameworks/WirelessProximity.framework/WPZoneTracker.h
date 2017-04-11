/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPZoneTracker : WPClient {
    <WPZoneTrackerDelegate> * _delegate;
    BOOL  _wantEntry;
    BOOL  _wantExit;
}

@property (nonatomic) <WPZoneTrackerDelegate> *delegate;
@property (nonatomic) BOOL wantEntry;
@property (nonatomic) BOOL wantExit;

- (void).cxx_destruct;
- (id)clientAsString;
- (id)delegate;
- (id)description;
- (void)enteredZone:(id)arg1;
- (void)exitedZone:(id)arg1;
- (void)failedToRegisterZones:(id)arg1 withError:(id)arg2;
- (void)fetchedCurrentlyTrackedZones:(id)arg1;
- (void)getCurrentTrackedZones;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)registerForZoneChangesMatching:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWantEntry:(BOOL)arg1;
- (void)setWantExit:(BOOL)arg1;
- (void)stateDidChange:(int)arg1;
- (void)unregisterAllZoneChanges;
- (void)unregisterForZoneChanges:(id)arg1;
- (BOOL)wantEntry;
- (BOOL)wantExit;

@end