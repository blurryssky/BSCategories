/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface IRCommand : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _isRepeat;
    unsigned long long  _payload;
    IRProtocol * _protocol;
    unsigned long long * _sequence;
    unsigned int  _sequenceCount;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) BOOL isRepeat;
@property (nonatomic, readonly) unsigned long long payload;
@property (nonatomic, readonly) IRProtocol *protocol;
@property (nonatomic, readonly) unsigned long long*sequence;
@property (nonatomic, readonly) unsigned int sequenceCount;
@property (nonatomic) unsigned long long timestamp;

+ (id)commandWithProtocol:(id)arg1 payload:(unsigned long long)arg2 repeat:(BOOL)arg3;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtocol:(id)arg1 payload:(unsigned long long)arg2 repeat:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRepeat;
- (unsigned long long)payload;
- (id)protocol;
- (unsigned long long*)sequence;
- (unsigned int)sequenceCount;
- (BOOL)setSequence:(unsigned long long*)arg1 withCount:(unsigned int)arg2;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end