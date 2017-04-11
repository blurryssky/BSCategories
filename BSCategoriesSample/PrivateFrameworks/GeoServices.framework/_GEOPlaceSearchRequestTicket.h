/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceSearchRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceSearchTicket>

@property (getter=isChainResultSet, nonatomic, readonly) BOOL chainResultSet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *relatedSearchSuggestions;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (nonatomic, readonly) GEOMapRegion *resultBoundingRegion;
@property (nonatomic, readonly) NSString *resultDisplayHeader;
@property (nonatomic, readonly) NSString *resultSectionHeader;
@property (nonatomic, readonly) NSString *searchQuery;
@property (nonatomic, readonly) int searchResultType;
@property (nonatomic, readonly) BOOL shouldEnableRedoSearch;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (id)searchQuery;

@end