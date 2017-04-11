/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFUserUtterance : NSObject {
    NSDictionary * _correctionIdentifier;
    NSMutableArray * _phrases;
    int  _sentenceConfidence;
    NSString * _text;
    NSMutableArray * _tokens;
    NSMutableArray * _utterances;
}

@property (nonatomic, readonly) NSDictionary *correctionIdentifier;
@property (nonatomic, readonly) NSArray *dictationResult;

- (void).cxx_destruct;
- (void)_updatePhraseswithSwapIndices:(id)arg1;
- (void)_updateUtteranceswithAlternativeUtteranceAtIndex:(unsigned int)arg1 swapIndices:(id)arg2;
- (struct NSDictionary { Class x1; }*)allRecognitionStringsAndScores;
- (id)bestTextInterpretation;
- (id)correctionIdentifier;
- (id)description;
- (id)dictationResult;
- (id)initWithPhrases:(id)arg1 correctionIdentifier:(id)arg2;
- (id)initWithPhrases:(id)arg1 sentenceConfidence:(int)arg2 utterances:(id)arg3 correctionIdentifier:(id)arg4;
- (id)initWithPhrases:(id)arg1 utterances:(id)arg2;
- (id)initWithString:(id)arg1 correctionIdentifier:(id)arg2;
- (id)initWithTokens:(id)arg1 correctionIdentifier:(id)arg2;
- (id)interpretationOfUtteranceAtIndex:(unsigned int)arg1;
- (id)longestCommonSubsequenceBetweenList:(id)arg1 andList:(id)arg2;
- (int)numberOfAlternativeUtterances;
- (id)rangeListOfDifferingTextFromSpeechInterpretation:(id)arg1 comparedToBaseTokenList:(id)arg2;
- (id)rangeListOfDifferingTextFromSpeechInterpretation:(id)arg1 comparedToBaseUtteranceAtIndex:(unsigned int)arg2;
- (id)rangeListOfDifferingTextFromTargetTokenList:(id)arg1 comparedToBaseTokenList:(id)arg2;
- (id)rangeListOfDifferingTextFromUtteranceAtIndex:(unsigned int)arg1 comparedToBaseUtteranceAtIndex:(unsigned int)arg2;
- (id)speechTokensForUtteranceAdIndex:(unsigned int)arg1;
- (id)streamingTokens;
- (id)textOfUtteranceAtIndex:(unsigned int)arg1;
- (id)updateDictationResult:(id)arg1 withAlternativeUtteranceAtIndex:(unsigned int)arg2;

@end