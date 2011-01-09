/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSOperationQueue, NSAutoreleasePool;



@interface CMMotionManagerInternal : NSObject 
{
    struct __CLClient { } *fClient;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fAccelerometerHandler;

    NSOperationQueue *fAccelerometerQueue;
    struct { 
        double x; 
        double y; 
        double z; 
        double timestamp; 
    } fAccelerometer;
    double fAccelerometerUpdateInterval;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*fUpdatingAccelerometer;

    double fLastAccelerometerNotificationTimestamp;
    struct __CFRunLoopSource { } *fAccelerometerRls;
    struct __CFRunLoop { } *fAccelerometerRunloop;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fGyroHandler;

    NSOperationQueue *fGyroQueue;
    struct { 
        double x; 
        double y; 
        double z; 
        double timestamp; 
    } fGyro;
    double fGyroUpdateInterval;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*fUpdatingGyro;

    double fLastGyroNotificationTimestamp;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fDeviceMotionHandler;

    NSOperationQueue *fDeviceMotionQueue;
    double fDeviceMotionUpdateInterval;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*fUpdatingDeviceMotion;

    double fLastDeviceMotionNotificationTimestamp;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*fCapabilitiesValid;

    struct { 
        double bestAccuracy; 
    } fCapabilities;
    struct CLGyroDataSource { struct CLIoHidManager {} *x1; int (*x2)(); void *x3; double x4; float x5; float x6[3]; NSInteger x7; NSInteger x8; NSInteger x9; } *fGyroDataSource;
    struct CLAccelerometerDataSource { struct CLIoHidManager {} *x1; int (*x2)(); void *x3; } *fAccelerometerDataSource;
    struct CLSensorFusion { int (**x1)(); } *fFusion;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*fHaveBiasFit;

    double fLastAccelerometerTimestamp;
    double fLastGyroTemperatureTimestamp;
    double fLastGyroTimestamp;

  /* Error parsing encoded ivar type info: ^{CLPreferences=^^?^{__CFDictionary}B{basic_string<char,std::char_traits<char>,std::allocator<char> >="_M_dataplus"{_Alloc_hider="_M_p"*}}^{__CFString}^{__CFString}IIB} */
    struct CLPreferences { int (**x1)(); struct __CFDictionary {} *x2; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x3; struct basic_string<char,std::char_traits<char>,std::allocator<char> > { 
            struct _Alloc_hider { 
                char *_M_p; 
            } _M_dataplus; 
        } x4; struct __CFString {} *x5; struct __CFString {} *x6; NSUInteger x7; NSUInteger x8; void*x9; } *fPreferences;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*fLog;

    NSAutoreleasePool *fPool;
    double fLastDrainTimestamp;
    struct __CFRunLoopSource { } *fIoHidRls;
    struct queue<Operation,std::deque<Operation, std::allocator<Operation> > > { struct deque<Operation,std::allocator<Operation> > { 
            struct _Deque_impl { 
                struct Operation {} **_M_map; 
                NSUInteger _M_map_size; 
                struct _Deque_iterator<Operation,Operation&,Operation*> { 
                    struct Operation {} *_M_cur; 
                    struct Operation {} *_M_first; 
                    struct Operation {} *_M_last; 
                    struct Operation {} **_M_node; 
                } _M_start; 
                struct _Deque_iterator<Operation,Operation&,Operation*> { 
                    struct Operation {} *_M_cur; 
                    struct Operation {} *_M_first; 
                    struct Operation {} *_M_last; 
                    struct Operation {} **_M_node; 
                } _M_finish; 
            } _M_impl; 
        } x1; } *fOperationQueue;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*fRunningInLocationd;

    double fCurrentAccelerometerIoHidUpdateInterval;
    double fPreviousAccelerometerIoHidUpdateInterval;
    double fCurrentGyroIoHidUpdateInterval;
    double fPreviousGyroIoHidUpdateInterval;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*fInactive;

    struct Mutex { void *x1; } *fMutex;
    struct Condition { void *x1; } *fCondition;
}


- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end