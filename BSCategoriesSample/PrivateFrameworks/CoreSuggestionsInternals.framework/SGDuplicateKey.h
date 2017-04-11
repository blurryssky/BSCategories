/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDuplicateKey : NSObject {
    NSObject<SGEntityKey> * _entityKey;
    long long  _entityType;
    SGDuplicateKey * _parentKey;
}

@property (nonatomic, readonly) NSData *compositeHash;
@property (nonatomic, readonly) NSObject<SGEntityKey> *entityKey;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly) SGDuplicateKey *parentKey;

+ (id)duplicateKeyForCuratedContactWithExternalId:(int)arg1;
+ (id)duplicateKeyForCuratedEventWithExternalID:(id)arg1;
+ (id)duplicateKeyForEmailWithSource:(id)arg1 messageId:(id)arg2;
+ (id)duplicateKeyForInteractionWithBundleId:(id)arg1 personHandle:(id)arg2;
+ (id)duplicateKeyForMessage:(id)arg1 fromSource:(id)arg2;
+ (id)duplicateKeyForNaturalLanguageEventWithStartDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 parentKey:(id)arg4;
+ (id)duplicateKeyForPseudoContactWithIdentity:(id)arg1 parentKey:(id)arg2;
+ (id)duplicateKeyForPseudoEventWithGroupId:(id)arg1 parentKey:(id)arg2;
+ (id)duplicateKeyForSchemaOrg;
+ (id)duplicateKeyForSearchableItem:(id)arg1;
+ (id)duplicateKeyForTextMessageWithSource:(id)arg1 uniqueIdentifier:(id)arg2;
+ (id)duplicateKeyForUnrecognizedContactWithIdentity:(id)arg1;

- (void).cxx_destruct;
- (id)compositeHash;
- (id)contactDetailKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)curatedContactKey;
- (id)curatedEventKey;
- (id)description;
- (id)emailKey;
- (id)entityKey;
- (long long)entityType;
- (unsigned int)hash;
- (id)identityKey;
- (id)initWithEntityKey:(id)arg1 entityType:(long long)arg2 parentKey:(id)arg3;
- (id)initWithSearchableItem:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (id)initWithSerializedEntityKey:(id)arg1 entityType:(long long)arg2 serializedParentKey:(id)arg3;
- (id)interactionKey;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDuplicateKey:(id)arg1;
- (id)messageKey;
- (id)parentKey;
- (id)pseudoContactKey;
- (id)pseudoEventKey;
- (id)serialize;
- (id)textMessageKey;
- (id)unrecognizedContactKey;

@end