/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUSRichTitleCardSection : SAUSTitleCardSection

@property (nonatomic) BOOL centered;
@property (nonatomic, copy) NSString *contentRatingText;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) SAUIImageResource *titleImage;

+ (id)richTitleCardSection;
+ (id)richTitleCardSectionWithDictionary:(id)arg1 context:(id)arg2;

- (BOOL)centered;
- (id)contentRatingText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCentered:(BOOL)arg1;
- (void)setContentRatingText:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitleImage:(id)arg1;
- (id)subtitle;
- (id)titleImage;

@end