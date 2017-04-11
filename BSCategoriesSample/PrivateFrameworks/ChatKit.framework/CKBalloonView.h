/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBalloonView : CKBalloonImageView <CKInvisibleInkEffectHostView, UIGestureRecognizerDelegate> {
    CABackdropLayer * _backdropFilterLayer;
    unsigned int  _balloonCorners;
    BOOL  _balloonShape;
    BOOL  _balloonTailShape;
    BOOL  _canUseOpaqueMask;
    <CKBalloonViewDelegate> * _delegate;
    CKManualUpdater * _displayUpdater;
    UITapGestureRecognizer * _doubleTapGestureRecognizer;
    BOOL  _filled;
    NSMutableArray * _filters;
    BOOL  _hasOverlay;
    BOOL  _hasTail;
    CKInvisibleInkEffectController * _invisibleInkEffectController;
    BOOL  _invisibleInkEffectPaused;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    BOOL  _orientation;
    CKBalloonImageView * _overlay;
    BOOL  _showingMenu;
    UITapGestureRecognizer * _tapGestureRecognizer;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _textAlignmentInsets;
    BOOL  _useLargeAsset;
    BOOL  _wantsSkinnyMask;
}

@property (nonatomic, retain) CABackdropLayer *backdropFilterLayer;
@property (nonatomic) unsigned int balloonCorners;
@property (nonatomic) struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } balloonDescriptor;
@property (nonatomic) BOOL balloonShape;
@property (nonatomic) BOOL balloonTailShape;
@property (nonatomic) BOOL canUseOpaqueMask;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKBalloonViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKManualUpdater *displayUpdater;
@property (nonatomic, retain) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (getter=isFilled, nonatomic) BOOL filled;
@property (nonatomic, retain) NSMutableArray *filters;
@property (nonatomic) BOOL hasOverlay;
@property (nonatomic) BOOL hasTail;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIImage *imageForInvisibleInkEffectView;
@property (nonatomic, retain) CKInvisibleInkEffectController *invisibleInkEffectController;
@property (nonatomic) BOOL invisibleInkEffectEnabled;
@property (nonatomic) BOOL invisibleInkEffectPaused;
@property (nonatomic, readonly) Class invisibleInkEffectViewClass;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, readonly) BOOL needsGroupOpacity;
@property (nonatomic) BOOL orientation;
@property (nonatomic, retain) CKBalloonImageView *overlay;
@property (nonatomic, readonly) UIColor *overlayColor;
@property (getter=isShowingMenu, nonatomic, readonly) BOOL showingMenu;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textAlignmentInsets;
@property (nonatomic) BOOL useLargeAsset;
@property (nonatomic) BOOL wantsSkinnyMask;

- (void).cxx_destruct;
- (void)_dismissOverlay;
- (void)addFilter:(id)arg1;
- (void)attachInvisibleInkEffectView;
- (id)backdropFilterLayer;
- (unsigned int)balloonCorners;
- (struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; })balloonDescriptor;
- (BOOL)balloonShape;
- (BOOL)balloonTailShape;
- (BOOL)canUseOpaqueMask;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1;
- (void)configureForComposition:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)detachInvisibleInkEffectView;
- (id)displayUpdater;
- (void)doubleTapGestureRecognized:(id)arg1;
- (id)doubleTapGestureRecognizer;
- (id)filters;
- (BOOL)hasOverlay;
- (BOOL)hasTail;
- (id)imageForInvisibleInkEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)invisibleInkEffectController;
- (BOOL)invisibleInkEffectEnabled;
- (BOOL)invisibleInkEffectPaused;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasResumed;
- (void)invisibleInkEffectViewWasSuspended;
- (void)invisibleInkEffectViewWasUncovered;
- (BOOL)isFilled;
- (BOOL)isShowingMenu;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (void)longPressGestureRecognized:(id)arg1;
- (id)longPressGestureRecognizer;
- (BOOL)needsGroupOpacity;
- (BOOL)orientation;
- (id)overlay;
- (id)overlayColor;
- (void)prepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (void)prepareForReuse;
- (void)setBackdropFilterLayer:(id)arg1;
- (void)setBalloonCorners:(unsigned int)arg1;
- (void)setBalloonDescriptor:(struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; })arg1;
- (void)setBalloonShape:(BOOL)arg1;
- (void)setBalloonTailShape:(BOOL)arg1;
- (void)setCanUseOpaqueMask:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayUpdater:(id)arg1;
- (void)setDoubleTapGestureRecognizer:(id)arg1;
- (void)setFilled:(BOOL)arg1;
- (void)setFilters:(id)arg1;
- (void)setHasOverlay:(BOOL)arg1;
- (void)setHasOverlay:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHasOverlay:(BOOL)arg1 autoDismiss:(BOOL)arg2;
- (void)setHasTail:(BOOL)arg1;
- (void)setInvisibleInkEffectController:(id)arg1;
- (void)setInvisibleInkEffectEnabled:(BOOL)arg1;
- (void)setInvisibleInkEffectPaused:(BOOL)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setNeedsPrepareForDisplay;
- (void)setOrientation:(BOOL)arg1;
- (void)setOverlay:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTextAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setUseLargeAsset:(BOOL)arg1;
- (void)setWantsSkinnyMask:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (void)tapGestureRecognized:(id)arg1;
- (id)tapGestureRecognizer;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textAlignmentInsets;
- (void)updateRasterizationForInvisibleInkEffect;
- (BOOL)useLargeAsset;
- (BOOL)wantsSkinnyMask;

@end