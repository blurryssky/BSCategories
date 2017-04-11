/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPQuerySearch : PBCodable <NSCopying> {
    NSString * _language;
    NSString * _locationDisplayString;
    GEOMapRegion * _mapRegion;
    NSString * _query;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasLanguage;
@property (nonatomic, readonly) BOOL hasLocationDisplayString;
@property (nonatomic, readonly) BOOL hasMapRegion;
@property (nonatomic, readonly) BOOL hasQuery;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *locationDisplayString;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLanguage;
- (BOOL)hasLocationDisplayString;
- (BOOL)hasMapRegion;
- (BOOL)hasQuery;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)language;
- (id)locationDisplayString;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (BOOL)readFrom:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLocationDisplayString:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setQuery:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end