/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableCategorySample : PBCodable <HDDecoding, NSCopying> {
    struct { 
        unsigned int value : 1; 
    }  _has;
    HDCodableSample * _sample;
    long long  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasSample;
@property (nonatomic) BOOL hasValue;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;
@property (nonatomic) long long value;

- (void).cxx_destruct;
- (BOOL)applyToObject:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSample;
- (BOOL)hasValue;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sample;
- (void)setHasValue:(BOOL)arg1;
- (void)setSample:(id)arg1;
- (void)setValue:(long long)arg1;
- (long long)value;
- (void)writeTo:(id)arg1;

@end