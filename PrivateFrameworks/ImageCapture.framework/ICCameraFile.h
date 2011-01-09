/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */



@interface ICCameraFile : ICCameraItem 
{
    void *_fileProperties;
}

@property(getter=isRaw) BOOL raw;
@property long long fileSize;
@property NSUInteger orientation;
@property BOOL fetchingThumbnail;
@property BOOL fetchingMetadata;
@property(readonly) BOOL hasOverriddenOrientation;
@property(retain) NSMutableDictionary *metadata_hidden;


- (BOOL)hasMetadata;
- (BOOL)hasThumbnail;
- (void)flushMetadataCache;
- (void)flushThumbnailCache;
- (void)requestThumbnail;
- (BOOL)isRaw;
- (void)requestMetadata;
- (struct CGImage { }*)thumbnail;
- (id)metadata;
- (void)setOrientation:(NSUInteger)arg1;
- (void)finalize;
- (NSUInteger)orientation;
- (void)dealloc;
- (id)description;
- (void)setMetadata_hidden:(id)arg1;
- (BOOL)fetchingMetadata;
- (BOOL)raw;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (void)setFileSize:(long long)arg1;
- (void)setRaw:(BOOL)arg1;
- (BOOL)hasOverriddenOrientation;
- (void)setHasThumbnail:(BOOL)arg1;
- (void)setHasMetadata:(BOOL)arg1;
- (BOOL)fetchingThumbnail;
- (void)setFetchingMetadata:(BOOL)arg1;
- (void)overrideOrientation:(NSUInteger)arg1;
- (void)handleCommandCompletionNotification:(id)arg1;
- (id)metadata_hidden;
- (void)setFetchingThumbnail:(BOOL)arg1;
- (long long)fileSize;
- (id)fileExtension;
- (id)importIdentifier;
- (id)parentFolderName;

@end