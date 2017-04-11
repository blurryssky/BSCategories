/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPRep : TSDContainerRep {
    TSWPSearchReference * _activeSearchReference;
    BOOL  _caretAnimationDisabled;
    BOOL  _caretCancelled;
    CALayer * _caretLayer;
    NSTimer * _caretTimer;
    CALayer * _dragAndDropCaretLayer;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _dragRange;
    TSWPSelection * _dropSelection;
    BOOL  _findIsShowing;
    CALayer * _floatingCaretLayer;
    BOOL  _hudStateDirty;
    CALayer * _indentAnimationLayer;
    BOOL  _indentAnimationRunning;
    int  _indentDelta;
    SEL  _indentSelector;
    id  _indentTarget;
    BOOL  _invalidateHUDState;
    BOOL  _isShowingCommentKnobs;
    TSWPSelection * _lastSelection;
    BOOL  _markChanged;
    CAShapeLayer * _markHighlightLayer;
    unsigned long long  _newSelectionFlags;
    BOOL  _repFieldsAreActive;
    NSArray * _searchReferences;
    CAShapeLayer * _secondaryHighlightLayer;
    int  _secondaryHighlightPathStyle;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _secondaryHighlightRange;
    BOOL  _selectionChanged;
    CAShapeLayer * _selectionHighlightLayer;
    CAShapeLayer * _selectionLineLayers;
    CAShapeLayer * _selectionParagraphBorderLayer;
    CAShapeLayer * _smartFieldHighlightLayer;
    BOOL  _suppressCaret;
    BOOL  _suppressSelectionHighlight;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _suppressedMisspellingRange;
    TSWPTextEditor * _textEditor;
    CALayer * _textLayers;
    BOOL  _tornDown;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _transformToConvertNaturalToScaledRoot;
    BOOL  _updatingHighlights;
    BOOL  _useKeyboardWhenEditing;
}

@property (nonatomic, retain) TSWPSearchReference *activeSearchReference;
@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } dragRange;
@property (nonatomic) TSWPSelection *dropSelection;
@property (nonatomic) BOOL findIsShowing;
@property (nonatomic, retain) CALayer *floatingCaretLayer;
@property (nonatomic, readonly) BOOL isBeingEdited;
@property (nonatomic, copy) TSWPSelection *lastSelection;
@property (nonatomic, readonly) TSDLayout<TSWPLayoutTarget> *layout;
@property (nonatomic, retain) NSArray *searchReferences;
@property (nonatomic, readonly) TSWPSelection *selection;
@property (nonatomic, readonly) TSWPStorage *storage;
@property (getter=isSelectionHighlightSuppressed, nonatomic) BOOL suppressSelectionHighlight;
@property (nonatomic, readonly) TSWPTextEditor *textEditor;
@property (nonatomic, readonly) BOOL textIsVertical;
@property (nonatomic, readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transformToConvertNaturalToScaledRoot;
@property (nonatomic) BOOL useKeyboardWhenEditing;

- (id)activeSearchReference;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForCharIndex:(unsigned int)arg1 caretAffinity:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForCharIndex:(unsigned int)arg1 leadingEdge:(BOOL)arg2 caretAffinity:(int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForSelection:(id)arg1;
- (unsigned int)charCountOfGlyphStartingAtCharIndex:(unsigned int)arg1;
- (unsigned int)charIndexForPointWithPinning:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)charIndexForPointWithPinning:(struct CGPoint { float x1; float x2; })arg1 isTail:(BOOL)arg2 selectionType:(int)arg3;
- (unsigned int)charIndexFromPoint:(struct CGPoint { float x1; float x2; })arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 isAtEndOfLine:(BOOL*)arg4 leadingEdge:(BOOL*)arg5;
- (unsigned int)charIndexFromPoint:(struct CGPoint { float x1; float x2; })arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 pastCenterGoesToNextChar:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 leadingEdge:(BOOL*)arg6;
- (unsigned int)charIndexFromPoint:(struct CGPoint { float x1; float x2; })arg1 allowPastBreak:(BOOL)arg2 isAtEndOfLine:(BOOL*)arg3;
- (id)closestColumnForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)columnForCharIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })columnRectForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)columns;
- (void)dealloc;
- (BOOL)directlyManagesLayerContent;
- (struct _NSRange { unsigned int x1; unsigned int x2; })dragRange;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1 limitSelection:(id)arg2 suppressInvisibles:(BOOL)arg3;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (void)drawRubyInContext:(struct CGContext { }*)arg1 rubyFieldStart:(unsigned int)arg2 rubyGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)dropSelection;
- (BOOL)findIsShowing;
- (id)floatingCaretLayer;
- (unsigned int)fontTraitsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 includingLabel:(BOOL)arg2;
- (id)footnoteMarkAttachmentAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)footnoteReferenceAttachmentAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)glyphCountForRubyFieldAtCharIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })glyphRectForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 includingLabel:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })glyphRectForRubyFieldAtCharIndex:(unsigned int)arg1 glyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)hyperlinkContainerRep;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)isBeingEdited;
- (BOOL)isOverflowing;
- (BOOL)isPointInSelectedArea:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isSelectionHighlightSuppressed;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })labelRectForCharIndex:(unsigned int)arg1;
- (id)lastSelection;
- (Class)layerClass;
- (id)layout;
- (struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; float x2; float x3; float x4; float x5; })lineMetricsAtCharIndex:(unsigned int)arg1;
- (struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; float x2; float x3; float x4; float x5; })lineMetricsAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })naturalBoundsRectForHyperlinkField:(id)arg1;
- (struct CGPath { }*)newPathForSelection:(id)arg1;
- (BOOL)p_allowCaretForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_caretRectForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_closestCaretRectForPoint:(struct CGPoint { float x1; float x2; })arg1 inSelection:(BOOL)arg2 allowPastBreak:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_convertNaturalRectToRotated:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 repAngle:(float)arg2;
- (void)p_drawTextInLayer:(id)arg1 context:(struct CGContext { }*)arg2 limitSelection:(id)arg3 rubyGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 renderMode:(int)arg5 suppressInvisibles:(BOOL)arg6;
- (BOOL)p_hasEmptyList;
- (BOOL)p_hasVisibleContents;
- (id)p_hyperlinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_paragraphModeRectangleForColumn:(id)arg1 selection:(id)arg2;
- (struct CGPoint { float x1; float x2; })p_pinPoint:(struct CGPoint { float x1; float x2; })arg1 toRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)p_shouldShowCommentsIncludingHighlights:(BOOL)arg1;
- (void)p_teardown;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_topicDragRectForSelection:(id)arg1;
- (void)p_updateLayersForInsertionPointSelection:(id)arg1;
- (void)performBlockOnTextLayers:(id /* block */)arg1;
- (struct CGPoint { float x1; float x2; })pinToClosestColumn:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })pinToNaturalBounds:(struct CGPoint { float x1; float x2; })arg1 andLastLineFragment:(BOOL)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(id)arg1 includeRuby:(BOOL)arg2;
- (id)repForCharIndex:(unsigned int)arg1 isStart:(BOOL)arg2;
- (id)repForDragging;
- (id)rubyFieldAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)searchReferences;
- (id)selection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionRect;
- (void)setActiveSearchReference:(id)arg1;
- (void)setDragRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setDropSelection:(id)arg1;
- (void)setFindIsShowing:(BOOL)arg1;
- (void)setFloatingCaretLayer:(id)arg1;
- (void)setLastSelection:(id)arg1;
- (void)setSearchReferences:(id)arg1;
- (void)setSuppressSelectionHighlight:(BOOL)arg1;
- (void)setUseKeyboardWhenEditing:(BOOL)arg1;
- (BOOL)shouldLayoutTilingLayer:(id)arg1;
- (id)siblings;
- (id)smartFieldAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)storage;
- (id)textBackgroundLayer;
- (id)textEditor;
- (BOOL)textIsVertical;
- (id)textLayer;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToConvertNaturalToScaledRoot;
- (BOOL)useKeyboardWhenEditing;
- (void)willBeRemoved;
- (struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; float x2; float x3; float x4; float x5; BOOL x6; })wordMetricsAtCharIndex:(unsigned int)arg1;

@end