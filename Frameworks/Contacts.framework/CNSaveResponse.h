/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNSaveResponse : NSObject <NSSecureCoding> {
    NSMutableDictionary * _contactSnapshotsByIndexPath;
    NSMutableDictionary * _containerSnapshotsByIndexPath;
    NSMutableDictionary * _groupSnapshotsByIndexPath;
}

+ (BOOL)supportsSecureCoding;

- (void)applySnapshotsToSaveRequest:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
