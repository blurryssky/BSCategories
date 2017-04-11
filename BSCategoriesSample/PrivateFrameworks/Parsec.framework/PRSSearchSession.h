/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSSearchSession : NSObject <PARResultFactory, PARSessionDelegate> {
    <PRSSessionController> * _client;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableArray * _feedback;
    double  _lastQueryTime;
    PRSFeedbackProxy * _listener;
    NSString * _queryLanguage;
    double  _retryAfter;
    PARSession * _session;
    double  _sessionStartTime;
    NSDictionary * _sqfData;
    NSArray * _supportedServices;
    NSString * _userAgent;
}

@property (nonatomic, readonly) NSSet *appBlacklist;
@property (nonatomic, readonly) PRSCEPData *cannedCEPValues;
@property (nonatomic, readonly) NSDictionary *cepDictionary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <SFFeedbackListener> *listener;
@property (nonatomic, readonly) PRSRankingKnobs *rankingKnobs;
@property double retryAfter;
@property (nonatomic, readonly) double searchRenderTimeout;
@property (retain) PARSession *session;
@property (nonatomic) double sessionStartTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedServices;
@property (retain) NSString *userAgent;

- (void).cxx_destruct;
- (void)activate;
- (id)appBlacklist;
- (id)cannedCEPValues;
- (id)cepDictionary;
- (id)clientQueue;
- (void)deactivate;
- (id)dictationQueryWithResponse:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 webSearch:(BOOL)arg4 handler:(id)arg5 queryIdent:(unsigned long long)arg6 whyQuery:(unsigned int)arg7;
- (id)feedbackListener;
- (void)getCachedQueries:(id*)arg1 results:(id*)arg2 webSearch:(BOOL)arg3;
- (int)getCategoryScoreToReturnInFeedback;
- (void)getFTEStringsWithReply:(id /* block */)arg1;
- (id)getModelParameters;
- (id)getQueryTaskForHandler:(id)arg1 scaleFactor:(float)arg2 whyQuery:(unsigned int)arg3;
- (id)initWithClient:(id)arg1 clientQueue:(id)arg2;
- (id)listener;
- (void)pruneCache;
- (void)queryCompleted:(id)arg1;
- (id)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 handler:(id)arg4 queryIdent:(unsigned long long)arg5 whyQuery:(unsigned int)arg6;
- (id)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 scaleFactor:(float)arg4 handler:(id)arg5 queryIdent:(unsigned long long)arg6 whyQuery:(unsigned int)arg7;
- (id)rankingKnobs;
- (double)retryAfter;
- (double)searchRenderTimeout;
- (id)session;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (double)sessionStartTime;
- (void)setClientQueue:(id)arg1;
- (void)setFeedbackStartTime;
- (void)setParsecFeedbackAllowed:(BOOL)arg1;
- (void)setQueryLanguage:(id)arg1;
- (void)setRetryAfter:(double)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionStartTime:(double)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setUserAgentString:(id)arg1;
- (void)shrinkCaches;
- (id)supportedServices;
- (id)userAgent;
- (void)warmup;

@end