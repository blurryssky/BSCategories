/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAPaymentSummaryResponse : AAResponse {
    NSDictionary * _responseParameters;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned int numberOfCards;

- (void).cxx_destruct;
- (id)description;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (unsigned int)numberOfCards;

@end