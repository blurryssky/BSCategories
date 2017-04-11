/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKRemoteItemForSending : NSObject <NSSecureCoding> {
    NSURL * _appendedBundleURL;
    MSMessage * _appendedMessage;
    NSData * _appendedRichLinkData;
    NSURL * _appendedRichLinkURL;
    NSURL * _appendedVideoURL;
    NSString * _attachmentDescription;
    NSURL * _attachmentURL;
    struct CGImageBlockSet { } * _blockSet;
    struct __IOSurface { } * _previewImage;
    BOOL  _previewIsFullyRealizedByChatKit;
}

@property (nonatomic, retain) NSURL *appendedBundleURL;
@property (nonatomic, copy) MSMessage *appendedMessage;
@property (nonatomic, copy) NSData *appendedRichLinkData;
@property (nonatomic, retain) NSURL *appendedRichLinkURL;
@property (nonatomic, retain) NSURL *appendedVideoURL;
@property (nonatomic, retain) NSString *attachmentDescription;
@property (nonatomic, retain) NSURL *attachmentURL;
@property (nonatomic) struct CGImageBlockSet { }*blockSet;
@property (nonatomic) struct __IOSurface { }*previewImage;
@property (nonatomic) BOOL previewIsFullyRealizedByChatKit;

+ (BOOL)hasAppendedVideo:(id)arg1;
+ (id)previewQueue;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setPreviewUIImage:(id)arg1;
- (id)appendedBundleURL;
- (id)appendedMessage;
- (id)appendedRichLinkData;
- (id)appendedRichLinkURL;
- (id)appendedVideoURL;
- (id)attachmentDescription;
- (id)attachmentURL;
- (void)beginPreviewCreation;
- (struct CGImageBlockSet { }*)blockSet;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttachmentURL:(id)arg1 description:(id)arg2;
- (id)initWithAttachmentURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithMSMessage:(id)arg1;
- (id)initWithRichLinkWithURL:(id)arg1 data:(id)arg2;
- (struct __IOSurface { }*)previewImage;
- (BOOL)previewIsFullyRealizedByChatKit;
- (id)previewUIImage;
- (void)setAppendedBundleURL:(id)arg1;
- (void)setAppendedMessage:(id)arg1;
- (void)setAppendedRichLinkData:(id)arg1;
- (void)setAppendedRichLinkURL:(id)arg1;
- (void)setAppendedVideoURL:(id)arg1;
- (void)setAttachmentDescription:(id)arg1;
- (void)setAttachmentURL:(id)arg1;
- (void)setBlockSet:(struct CGImageBlockSet { }*)arg1;
- (void)setPreviewImage:(struct __IOSurface { }*)arg1;
- (void)setPreviewIsFullyRealizedByChatKit:(BOOL)arg1;
- (void)waitForPreviewCreation;

@end