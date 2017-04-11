/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWPLayout : TSWPLayout {
    BOOL  _cacheIsValid;
    unsigned int  _cachedAutoSizeFlags;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _cachedAutosizedFrame;
    struct TSUCellCoord { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  _cachedCellID;
    TSTCellStyle * _cachedCellStyle;
    BOOL  _cachedCellWraps;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _cachedMaskRect;
    struct TSUCellRect { 
        struct TSUCellCoord { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  _cachedMaskSpillRange;
    struct TSUCellRect { 
        struct TSUCellCoord { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  _cachedMergeRange;
    TSWPPadding * _cachedPadding;
    int  _cachedParagraphAlignment;
    TSWPParagraphStyle * _cachedTextStyle;
    int  _cachedVerticalAlignment;
}

@property (nonatomic) BOOL cacheIsValid;
@property (nonatomic) unsigned int cachedAutoSizeFlags;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cachedAutosizedFrame;
@property (nonatomic) struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; } cachedCellID;
@property (nonatomic, retain) TSTCellStyle *cachedCellStyle;
@property (nonatomic) BOOL cachedCellWraps;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cachedMaskRect;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } cachedMaskSpillRange;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } cachedMergeRange;
@property (nonatomic, retain) TSWPPadding *cachedPadding;
@property (nonatomic) int cachedParagraphAlignment;
@property (nonatomic, retain) TSWPParagraphStyle *cachedTextStyle;
@property (nonatomic) int cachedVerticalAlignment;

- (BOOL)cacheIsValid;
- (unsigned int)cachedAutoSizeFlags;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cachedAutosizedFrame;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })cachedCellID;
- (id)cachedCellStyle;
- (BOOL)cachedCellWraps;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cachedMaskRect;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })cachedMaskSpillRange;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })cachedMergeRange;
- (id)cachedPadding;
- (int)cachedParagraphAlignment;
- (id)cachedTextStyle;
- (int)cachedVerticalAlignment;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 parentLayout:(id)arg2 cellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)invalidate;
- (void)setCacheIsValid:(BOOL)arg1;
- (void)setCachedAutoSizeFlags:(unsigned int)arg1;
- (void)setCachedAutosizedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCachedCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setCachedCellStyle:(id)arg1;
- (void)setCachedCellWraps:(BOOL)arg1;
- (void)setCachedMaskRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCachedMaskSpillRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setCachedMergeRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setCachedPadding:(id)arg1;
- (void)setCachedParagraphAlignment:(int)arg1;
- (void)setCachedTextStyle:(id)arg1;
- (void)setCachedVerticalAlignment:(int)arg1;
- (void)validate;

@end