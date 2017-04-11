/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIPCClient : NSObject {
    unsigned int  _assignedServerMachPort;
    NSString * _clientIdentifier;
    struct __CFRunLoopSource { } * _clientSource;
    BOOL  _connected;
    unsigned int  _connectionAttempts;
    AXAccessQueue * _connectionQueue;
    NSMutableArray * _outstandingAsyncRequests;
    int  _pid;
    AXAccessQueue * _portDeathAccessQueue;
    id /* block */  _portDeathHandler;
    NSMutableArray * _postConnectionTasks;
    struct __CFMachPort { } * _serverPort;
    NSLock * _serverPortLock;
    NSString * _serviceName;
    float  _timeout;
    BOOL  _usesPerPidLookup;
    unsigned int  clientCallbackPort;
    struct __CFRunLoopSource { } * clientCallbackSource;
    BOOL  shouldRegisterCallbackSourceOnMainRunloop;
}

@property (nonatomic, readonly) unsigned int clientCallbackPort;
@property (nonatomic, readonly) struct __CFRunLoopSource { }*clientCallbackSource;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (getter=isConnected, nonatomic) BOOL connected;
@property (nonatomic, retain) AXAccessQueue *connectionQueue;
@property (nonatomic) int pid;
@property (nonatomic, retain) AXAccessQueue *portDeathAccessQueue;
@property (nonatomic, copy) id /* block */ portDeathHandler;
@property (nonatomic, retain) NSMutableArray *postConnectionTasks;
@property (nonatomic) struct __CFMachPort { }*serverPort;
@property (nonatomic, readonly) unsigned int serviceMachPort;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic) BOOL shouldRegisterCallbackSourceOnMainRunloop;
@property (nonatomic) float timeout;
@property (nonatomic) BOOL usesPerPidLookup;

+ (id)allClients;
+ (void)initialize;

- (void)_attemptToEstablishConnection;
- (void)_commonInit;
- (id)_createRegistrationWithReplyMachPort:(unsigned int)arg1 forAsyncReplyOnQueue:(id)arg2 responseHandler:(id /* block */)arg3;
- (id)_descriptionForMachError:(int)arg1;
- (BOOL)_handleErrorWithMessage:(id)arg1 machError:(int)arg2 outError:(id*)arg3;
- (BOOL)_handleErrorWithMessage:(id)arg1 outError:(id*)arg2;
- (BOOL)_prepareToSendMessage:(id)arg1 withError:(id*)arg2 prepSuccessHandler:(id /* block */)arg3;
- (void)_registerWithServer;
- (void)_sendRegistrationMessageWithRetries:(int)arg1;
- (void)_serverDied;
- (BOOL)_verifyConnectionWithError:(id*)arg1;
- (unsigned int)clientCallbackPort;
- (struct __CFRunLoopSource { }*)clientCallbackSource;
- (id)clientIdentifier;
- (BOOL)connectWithError:(id*)arg1;
- (id)connectionQueue;
- (void)dealloc;
- (id)description;
- (BOOL)disconnectWithError:(id*)arg1;
- (void)establishConnectionWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (id)initWithPort:(unsigned int)arg1;
- (id)initWithServiceName:(id)arg1;
- (BOOL)isConnected;
- (int)pid;
- (id)portDeathAccessQueue;
- (id /* block */)portDeathHandler;
- (id)postConnectionTasks;
- (BOOL)sendAsyncMessage:(id)arg1 replyOnQueue:(id)arg2 replyHandler:(id /* block */)arg3;
- (BOOL)sendAsyncMessage:(id)arg1 withReplyHandler:(id /* block */)arg2;
- (id)sendMessage:(id)arg1 withError:(id*)arg2;
- (void)sendSimpleMessage:(id)arg1;
- (BOOL)sendSimpleMessage:(id)arg1 synchronizationPort:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)sendSimpleMessage:(id)arg1 withError:(id*)arg2;
- (struct __CFMachPort { }*)serverPort;
- (unsigned int)serviceMachPort;
- (id)serviceName;
- (void)setClientIdentifier:(id)arg1;
- (void)setConnected:(BOOL)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setPortDeathAccessQueue:(id)arg1;
- (void)setPortDeathHandler:(id /* block */)arg1;
- (void)setPostConnectionTasks:(id)arg1;
- (void)setServerPort:(struct __CFMachPort { }*)arg1;
- (void)setServiceName:(id)arg1;
- (void)setShouldRegisterCallbackSourceOnMainRunloop:(BOOL)arg1;
- (void)setTimeout:(float)arg1;
- (void)setUsesPerPidLookup:(BOOL)arg1;
- (BOOL)shouldRegisterCallbackSourceOnMainRunloop;
- (float)timeout;
- (BOOL)usesPerPidLookup;
- (BOOL)verifyConnectionExists;

@end