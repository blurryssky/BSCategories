/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLSecurity : NSObject

+ (id)_secTask:(struct __SecTask { }*)arg1 grantedEntitlements:(id)arg2;
+ (BOOL)canSkipUserPromptsForProcessWithName:(id)arg1 identifier:(int)arg2;
+ (id)connection:(id)arg1 grantedEntitlements:(id)arg2;
+ (BOOL)connection:(id)arg1 hasEntitlement:(id)arg2;
+ (BOOL)connectionIsEntitledForPhotoKit:(id)arg1;
+ (BOOL)containsPhotoKitEntitlement:(id)arg1;
+ (BOOL)isEntitledForCloudSharingData;
+ (BOOL)isEntitledForPhotoKit;
+ (BOOL)secTask:(struct __SecTask { }*)arg1 hasEntitlement:(id)arg2;

@end