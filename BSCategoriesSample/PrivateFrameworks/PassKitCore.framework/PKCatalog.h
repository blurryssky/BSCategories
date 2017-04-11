/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCatalog : NSObject <NSSecureCoding> {
    NSMutableArray * _groups;
    NSDate * _timestamp;
}

@property (nonatomic, retain) NSMutableArray *groups;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)catalogWithContentsOfURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allGroupIDs;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groups;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEquivalentToCatalog:(id)arg1;
- (BOOL)isNewerThanCatalog:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)shuffle:(int)arg1;
- (id)timestamp;
- (void)writeToURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2 atomically:(BOOL)arg3;

@end