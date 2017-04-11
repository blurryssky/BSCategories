/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRAlignmentLayer : CALayer {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _cardNumberHorizontalDefaultBounds;
    struct CGPoint { 
        float x; 
        float y; 
    }  _cardNumberHorizontalDefaultPos;
    NSMutableArray * _cardNumberLayers;
    CATextLayer * _cardholderNameLayer;
    CATextLayer * _expirationDateLayer;
    CALayer * _infoLayer;
    CATextLayer * _instructionLayer;
    CAShapeLayer * _maskLayer;
    CAShapeLayer * _outlineLayer;
}

@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cardNumberHorizontalDefaultBounds;
@property (nonatomic) struct CGPoint { float x1; float x2; } cardNumberHorizontalDefaultPos;
@property (retain) NSMutableArray *cardNumberLayers;
@property (retain) CATextLayer *cardholderNameLayer;
@property (retain) CATextLayer *expirationDateLayer;
@property (retain) CALayer *infoLayer;
@property (retain) CATextLayer *instructionLayer;
@property (retain) CAShapeLayer *maskLayer;
@property (retain) CAShapeLayer *outlineLayer;

+ (id)layer;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRect;
- (void)animateFoundCardRect:(id)arg1;
- (void)animateFoundCodeParts:(id)arg1 codePartPositions:(id)arg2 codeFrameIndex:(unsigned int)arg3 cardHolder:(id)arg4 cardholderPosition:(struct CGPoint { float x1; float x2; })arg5 cardholderFrameIndex:(unsigned int)arg6 expDate:(id)arg7 expdatePosition:(struct CGPoint { float x1; float x2; })arg8 expDateFrameIndex:(unsigned int)arg9 completionBlock:(id /* block */)arg10;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cardNumberHorizontalDefaultBounds;
- (struct CGPoint { float x1; float x2; })cardNumberHorizontalDefaultPos;
- (id)cardNumberLayers;
- (id)cardholderNameLayer;
- (id)expirationDateLayer;
- (void)fadePlacementImage;
- (id)infoLayer;
- (id)init;
- (id)instructionLayer;
- (void)layoutSublayers;
- (void)makeTextLayer:(id)arg1 matchWidthOfText:(id)arg2;
- (id)maskLayer;
- (id)outlineLayer;
- (struct CGPoint { float x1; float x2; })pointOnInfoLayerForPointOnCard:(struct CGPoint { float x1; float x2; })arg1;
- (void)propogateMaskColor:(id)arg1 outlineColor:(id)arg2 placementTextColor:(id)arg3 capturedTextColor:(id)arg4;
- (void)resetLayer;
- (void)setCardNumberHorizontalDefaultBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCardNumberHorizontalDefaultPos:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCardNumberLayers:(id)arg1;
- (void)setCardholderNameLayer:(id)arg1;
- (void)setExpirationDateLayer:(id)arg1;
- (void)setInfoLayer:(id)arg1;
- (void)setInstructionLayer:(id)arg1;
- (void)setMaskLayer:(id)arg1;
- (void)setOutlineLayer:(id)arg1;

@end