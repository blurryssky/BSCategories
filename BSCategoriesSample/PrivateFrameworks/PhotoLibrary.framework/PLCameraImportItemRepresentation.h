/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCameraImportItemRepresentation : NSObject {
    ICCameraFile * _cameraFile;
    BOOL  _canRequestMetadata;
    BOOL  _canRequestThumbnail;
    BOOL  _inDatabase;
    NSDictionary * _metadata;
    NSString * _path;
}

@property (nonatomic, retain) ICCameraFile *cameraFile;
@property (nonatomic) BOOL canRequestMetadata;
@property (nonatomic) BOOL canRequestThumbnail;
@property (nonatomic) BOOL inDatabase;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, copy) NSString *path;

- (id)cameraFile;
- (BOOL)canRequestMetadata;
- (BOOL)canRequestThumbnail;
- (void)dealloc;
- (id)description;
- (id)fileExtension;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)inDatabase;
- (id)initWithCameraFile:(id)arg1;
- (BOOL)isAudio;
- (BOOL)isInDatabaseForce:(BOOL)arg1;
- (BOOL)isJPEG;
- (BOOL)isMovie;
- (BOOL)isRaw;
- (id)metadata;
- (id)path;
- (void)setCameraFile:(id)arg1;
- (void)setCanRequestMetadata:(BOOL)arg1;
- (void)setCanRequestThumbnail:(BOOL)arg1;
- (void)setInDatabase:(BOOL)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPath:(id)arg1;

@end