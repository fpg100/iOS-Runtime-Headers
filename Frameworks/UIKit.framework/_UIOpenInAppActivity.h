/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIOpenInAppActivity : UIActivity <LSOpenResourceOperationDelegate> {
    BOOL  _actionIsImport;
    LSApplicationProxy * _applicationProxy;
    LSDocumentProxy * _documentProxy;
    BOOL  _sourceIsManaged;
}

@property (nonatomic) BOOL actionIsImport;
@property (nonatomic, retain) LSApplicationProxy *applicationProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) LSDocumentProxy *documentProxy;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL sourceIsManaged;
@property (readonly) Class superclass;

+ (id)activitiesForFileURL:(id)arg1 sourceIsManaged:(BOOL)arg2;
+ (int)activityCategory;
+ (void)enumerateAvailableApplicationsInPreferredOrderForOpeningDocument:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)openInActivitiesForItems:(id)arg1 sourceIsManaged:(BOOL)arg2;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (id)_firstMatchingDocumentProxyForActivityItems:(id)arg1;
- (id)_nonImportActivityTitle;
- (void)_performOpenWithUserInfo:(id)arg1;
- (BOOL)actionIsImport;
- (id)activityTitle;
- (id)activityType;
- (id)applicationProxy;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)documentProxy;
- (id)initWithApplicationProxy:(id)arg1 documentProxy:(id)arg2 sourceIsManaged:(BOOL)arg3 actionIsImport:(BOOL)arg4;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActionIsImport:(BOOL)arg1;
- (void)setApplicationProxy:(id)arg1;
- (void)setDocumentProxy:(id)arg1;
- (void)setSourceIsManaged:(BOOL)arg1;
- (BOOL)sourceIsManaged;

@end