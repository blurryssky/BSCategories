/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSContinuity : NSObject <IDSDaemonListenerProtocol> {
    CUTWeakReference * _delegate;
    id  _delegateContext;
    NSObject<OS_dispatch_queue> * _queue;
    int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) int state;
@property (readonly) Class superclass;

- (void)_callDelegateWithBlock:(id /* block */)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_handleReconnect;
- (void)continuityDidDiscoverType:(int)arg1 withData:(id)arg2 fromPeer:(id)arg3;
- (void)continuityDidFailToStartAdvertisingOfType:(int)arg1 withError:(id)arg2;
- (void)continuityDidFailToStartScanningForType:(int)arg1 withError:(id)arg2;
- (void)continuityDidLosePeer:(id)arg1;
- (void)continuityDidLosePeer:(id)arg1 forType:(int)arg2;
- (void)continuityDidStartAdvertisingOfType:(int)arg1;
- (void)continuityDidStartScanningForType:(int)arg1;
- (void)continuityDidStartTrackingPeer:(id)arg1 error:(id)arg2;
- (void)continuityDidStartTrackingPeer:(id)arg1 forType:(int)arg2 error:(id)arg3;
- (void)continuityDidStopAdvertisingOfType:(int)arg1;
- (void)continuityDidStopScanningForType:(int)arg1;
- (void)continuityDidStopTrackingPeer:(id)arg1;
- (void)continuityDidStopTrackingPeer:(id)arg1 forType:(int)arg2;
- (void)continuityDidUpdateState:(int)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 delegateContext:(id)arg3;
- (void)startAdvertisingOfType:(int)arg1 withData:(id)arg2 withOptions:(id)arg3;
- (void)startScanningForType:(int)arg1 withData:(id)arg2 mask:(id)arg3;
- (void)startScanningForType:(int)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(BOOL)arg4 duplicates:(BOOL)arg5;
- (void)startScanningForType:(int)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4;
- (void)startScanningForType:(int)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(BOOL)arg5 duplicates:(BOOL)arg6;
- (void)startTrackingPeer:(id)arg1 forType:(int)arg2;
- (int)state;
- (void)stopAdvertisingOfType:(int)arg1;
- (void)stopScanningForType:(int)arg1;
- (void)stopTrackingPeer:(id)arg1 forType:(int)arg2;

@end