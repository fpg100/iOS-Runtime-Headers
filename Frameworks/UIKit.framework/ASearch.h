/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface ASearch : ShiftMatcher 
{
    NSInteger _mismatch;
    NSUInteger _epsilon;
    NSUInteger _acceptpat;
    NSUInteger _shiftpat[256];
    NSUInteger _pluspat[256];
}


- (id)initWithPattern:(char *)arg1 withAmbiguity:(NSInteger)arg2;
- (NSInteger)match:(char *)arg1;

@end