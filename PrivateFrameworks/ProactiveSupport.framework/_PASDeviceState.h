/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASDeviceState : NSObject <_PASDeviceStateProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)blockUntilFirstUnlock;
+ (id)currentOsBuild;
+ (BOOL)isClassCLocked;
+ (BOOL)isConstrainedDevice;
+ (BOOL)isDeviceFormattedForProtection;
+ (BOOL)isUnlocked;
+ (int)lockState;
+ (id)registerForLockStateChangeNotifications:(id /* block */)arg1;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)arg1;
+ (void)unregisterForLockStateChangeNotifications:(id)arg1;

@end
