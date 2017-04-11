/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationGuidanceState : PBCodable <NSCopying> {
    int  _guidanceLevel;
    int  _guidanceLevelIgnoringTimeCriterion;
    struct { 
        unsigned int guidanceLevel : 1; 
        unsigned int guidanceLevelIgnoringTimeCriterion : 1; 
        unsigned int navigationState : 1; 
        unsigned int trackedTransportType : 1; 
        unsigned int shouldSuppressCellularDataAlerts : 1; 
    }  _has;
    int  _navigationState;
    BOOL  _shouldSuppressCellularDataAlerts;
    int  _trackedTransportType;
}

@property (nonatomic) int guidanceLevel;
@property (nonatomic) int guidanceLevelIgnoringTimeCriterion;
@property (nonatomic) BOOL hasGuidanceLevel;
@property (nonatomic) BOOL hasGuidanceLevelIgnoringTimeCriterion;
@property (nonatomic) BOOL hasNavigationState;
@property (nonatomic) BOOL hasShouldSuppressCellularDataAlerts;
@property (nonatomic) BOOL hasTrackedTransportType;
@property (nonatomic) int navigationState;
@property (nonatomic) BOOL shouldSuppressCellularDataAlerts;
@property (nonatomic) int trackedTransportType;

+ (BOOL)_currentLocationInsideTrackingRegionForRoute:(id)arg1 location:(id)arg2;
+ (BOOL)_currentLocationInsideTurnByTurnRegionForRoute:(id)arg1 location:(id)arg2;
+ (BOOL)_currentTimeInsideTrackingRegionForRoute:(id)arg1 location:(id)arg2;
+ (int)routeGuidanceLevelForLocation:(id)arg1 route:(id)arg2 withCurrentGuidanceLevel:(int)arg3;
+ (int)routeGuidanceLevelForLocation:(id)arg1 route:(id)arg2 withCurrentGuidanceLevel:(int)arg3 ignoreTimeCriterion:(BOOL)arg4;

- (int)StringAsGuidanceLevel:(id)arg1;
- (int)StringAsGuidanceLevelIgnoringTimeCriterion:(id)arg1;
- (int)StringAsNavigationState:(id)arg1;
- (int)StringAsTrackedTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)guidanceLevel;
- (id)guidanceLevelAsString:(int)arg1;
- (int)guidanceLevelIgnoringTimeCriterion;
- (id)guidanceLevelIgnoringTimeCriterionAsString:(int)arg1;
- (BOOL)hasGuidanceLevel;
- (BOOL)hasGuidanceLevelIgnoringTimeCriterion;
- (BOOL)hasNavigationState;
- (BOOL)hasShouldSuppressCellularDataAlerts;
- (BOOL)hasTrackedTransportType;
- (unsigned int)hash;
- (id)initWithGuidanceLevel:(int)arg1;
- (id)initWithTransportType:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)navigationState;
- (id)navigationStateAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setGuidanceLevel:(int)arg1;
- (void)setGuidanceLevelIgnoringTimeCriterion:(int)arg1;
- (void)setHasGuidanceLevel:(BOOL)arg1;
- (void)setHasGuidanceLevelIgnoringTimeCriterion:(BOOL)arg1;
- (void)setHasNavigationState:(BOOL)arg1;
- (void)setHasShouldSuppressCellularDataAlerts:(BOOL)arg1;
- (void)setHasTrackedTransportType:(BOOL)arg1;
- (void)setNavigationState:(int)arg1;
- (void)setShouldSuppressCellularDataAlerts:(BOOL)arg1;
- (void)setTrackedTransportType:(int)arg1;
- (BOOL)shouldSuppressCellularDataAlerts;
- (int)trackedTransportType;
- (id)trackedTransportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end