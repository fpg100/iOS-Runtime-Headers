/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCReadWriteLock : NSObject <FCLocking> {
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    }  _lock;
}

- (void)dealloc;
- (id)init;
- (void)lock;
- (void)performReadSync:(id /* block */)arg1;
- (void)performWriteSync:(id /* block */)arg1;
- (void)readLock;
- (void)unlock;
- (void)writeLock;

@end
