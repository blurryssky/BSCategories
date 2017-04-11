/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCBookmark : NSObject {
    BRCAppLibrary * _appLibrary;
    NSData * _bookmarkData;
    BOOL  _containsItemID;
    BOOL  _dataResolved;
    BRCAccountSession * _session;
    BRCLocalItem * _target;
    BRCRelativePath * _targetRelpath;
    BOOL  _targetResolved;
    BRCServerZone * _targetServerZone;
}

@property (nonatomic, readonly) BOOL containsItemID;
@property (nonatomic, readonly) BRCLocalItem *target;
@property (nonatomic, readonly) BRCServerZone *targetServerZone;

+ (id)createName;
+ (void)unlinkAliasAtPath:(id)arg1;

- (void).cxx_destruct;
- (void)_computeSignature:(unsigned char)arg1;
- (BOOL)_resolveDataWithError:(id*)arg1;
- (BOOL)_resolveTargetWithError:(id*)arg1;
- (int)_validateSignatureWithFd:(int)arg1;
- (BOOL)containsItemID;
- (id)initWithRelpath:(id)arg1;
- (id)initWithTarget:(id)arg1 owningAppLibrary:(id)arg2 path:(id)arg3 session:(id)arg4;
- (BOOL)resolveWithError:(id*)arg1;
- (id)target;
- (id)targetServerZone;
- (id)writeUnderParent:(id)arg1 name:(id)arg2 error:(id*)arg3;

@end