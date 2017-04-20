/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCommandQueue : NSObject <FCCommandDelegate, FCNetworkReachabilityObserving> {
    FCCloudContext * _context;
    NSObject<OS_dispatch_source> * _cooldownTimer;
    BOOL  _executingCommand;
    NSObject<OS_dispatch_group> * _executingCommandsGroup;
    NSMutableArray * _pendingCommands;
    NSObject<OS_dispatch_group> * _pendingCommandsGroup;
    FCKeyValueStore * _persistentStore;
    BOOL  _suspended;
    int  _urgency;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *cooldownTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExecutingCommand, nonatomic) BOOL executingCommand;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *executingCommandsGroup;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableArray *pendingCommands;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *pendingCommandsGroup;
@property (nonatomic, retain) FCKeyValueStore *persistentStore;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) BOOL suspended;
@property (nonatomic) int urgency;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedWorkQueue;

- (void).cxx_destruct;
- (void)_addCommand:(id)arg1 saveCompletion:(id /* block */)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)_decodeCommand:(id)arg1;
- (id)_deserializeCommandsFromStore:(id)arg1;
- (id)_encodeCommand:(id)arg1;
- (void)_executeNextCommand;
- (void)_loadFromDisk;
- (void)_savePendingCommandsWithCompletionHandler:(id /* block */)arg1;
- (void)_scheduleCommandExecution;
- (void)_serializeCommands:(id)arg1 toStore:(id)arg2;
- (void)addCommand:(id)arg1;
- (void)addCommand:(id)arg1 saveCompletion:(id /* block */)arg2;
- (void)clear;
- (void)command:(id)arg1 didFinishWithStatus:(unsigned int)arg2;
- (id)context;
- (id)cooldownTimer;
- (void)dealloc;
- (id)executingCommandsGroup;
- (id)initWithContext:(id)arg1 persistentStore:(id)arg2 urgency:(int)arg3 suspended:(BOOL)arg4;
- (id)initWithContext:(id)arg1 storeDirectory:(id)arg2 storeFilename:(id)arg3 urgency:(int)arg4 suspended:(BOOL)arg5;
- (id)initWithContext:(id)arg1 urgency:(int)arg2 suspended:(BOOL)arg3;
- (BOOL)isEmpty;
- (BOOL)isExecutingCommand;
- (BOOL)isSuspended;
- (void)networkReachabilityDidChange:(id)arg1;
- (id)pendingCommands;
- (id)pendingCommandsGroup;
- (void)performBlockWhenEmpty:(id /* block */)arg1;
- (id)persistentStore;
- (void)resume;
- (void)setContext:(id)arg1;
- (void)setCooldownTimer:(id)arg1;
- (void)setExecutingCommand:(BOOL)arg1;
- (void)setExecutingCommandsGroup:(id)arg1;
- (void)setPendingCommands:(id)arg1;
- (void)setPendingCommandsGroup:(id)arg1;
- (void)setPersistentStore:(id)arg1;
- (void)setSuspended:(BOOL)arg1;
- (void)setUrgency:(int)arg1;
- (void)setWorkQueue:(id)arg1;
- (int)urgency;
- (id)workQueue;

@end