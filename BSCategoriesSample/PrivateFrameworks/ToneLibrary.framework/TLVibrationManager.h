/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationManager : NSObject {
    TLAccessQueue * _accessQueue;
    BOOL  _allowsAutoRefresh;
    NSMutableDictionary * _cachedSystemVibrationCompleteSubdirectories;
    NSMutableDictionary * _cachedSystemVibrationIdentifiers;
    NSDictionary * _cachedUserGeneratedVibrationPatterns;
    BOOL  _needsRefresh;
    unsigned int  _specialBehaviors;
    NSDictionary * _synchronizedVibrationPatternFromToneIdentifierMapping;
    NPSDomainAccessor * _transientNanoPreferencesDomainAccessor;
}

@property (nonatomic) BOOL allowsAutoRefresh;
@property (nonatomic, readonly) BOOL needsRefresh;
@property (nonatomic, readonly) BOOL shouldVibrateForCurrentRingerSwitchState;
@property (nonatomic, readonly) BOOL shouldVibrateOnRing;
@property (nonatomic, readonly) BOOL shouldVibrateOnSilent;

+ (struct __CFString { }*)_copySharedResourcesPreferencesDomainForDomain:(struct __CFString { }*)arg1;
+ (void)_handleVibrateOnRingOrSilentDidChangeNotification;
+ (void)_handleVibrationPreferencesDidChangeNotificationForPreferencesKinds:(unsigned int)arg1 atInitiativeOfVibrationManager:(id)arg2;
+ (id)sharedVibrationManager;

- (void).cxx_destruct;
- (BOOL)_areSynchronizedVibrationsAllowedForAlertType:(int)arg1;
- (BOOL)_booleanPreferenceForKey:(struct __CFString { }*)arg1 defaultValue:(BOOL)arg2;
- (id)_completeSystemVibrationsSubdirectoryForSubdirectory:(id)arg1;
- (id)_currentVibrationIdentifierForAlertType:(int)arg1 topic:(id)arg2;
- (id)_currentVibrationIdentifierForAlertType:(int)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3;
- (id)_currentVibrationIdentifierForAlertType:(int)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3 allowsNoneDefaultToAnyActualVibrationSubstitution:(BOOL)arg4;
- (int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg1;
- (int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg1 topic:(id)arg2;
- (int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg1 topic:(id)arg2 didFindPersistedWatchAlertPolicy:(BOOL*)arg3;
- (id)_currentVibrationWatchAlertPolicyPreferenceKeyForAlertType:(int)arg1 topic:(id)arg2;
- (id)_defaultVibrationIdentifierForAlertType:(int)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3;
- (void)_didChangeUserGeneratedVibrationPatterns;
- (void)_didSetVibrationPreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned int)arg3;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_initWithSpecialBehaviors:(unsigned int)arg1;
- (BOOL)_isUnitTestingModeEnabled;
- (id)_localizedNameForVibrationWithIdentifier:(id)arg1;
- (void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
- (BOOL)_migrateLegacySettings;
- (id)_nameOfVibrationWithIdentifier:(id)arg1;
- (id)_newServiceConnection;
- (unsigned int)_numberOfUserGeneratedVibrations;
- (id)_patternForSystemVibrationWithIdentifier:(id)arg1 shouldLogAssetPath:(BOOL)arg2;
- (void)_performBlockInAccessQueue:(id /* block */)arg1;
- (BOOL)_removeAllUserGeneratedVibrationPatternsUsingServiceWithError:(id*)arg1;
- (BOOL)_removeAllUserGeneratedVibrationsWithError:(id*)arg1;
- (id)_retrieveUserGeneratedVibrationPatternsUsingService;
- (id)_sanitizeVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 topic:(id)arg3 correspondingToneIdentifier:(id)arg4 didFallbackToCurrentVibrationIdentifier:(BOOL*)arg5;
- (id)_sanitizeVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 topic:(id)arg3 correspondingToneIdentifier:(id)arg4 useDefaultVibrationAsFallback:(BOOL)arg5 allowsNoneDefaultToAnyActualVibrationSubstitution:(BOOL)arg6 didFallback:(BOOL*)arg7;
- (BOOL)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id*)arg2;
- (void)_setCurrentVibrationWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2;
- (void)_setCurrentVibrationWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (void)_setCurrentVibrationWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2 topic:(id)arg3;
- (BOOL)_setUserGeneratedVibrationPatternsUsingService:(id)arg1 error:(id*)arg2;
- (unsigned int)_storedSystemVibrationDataMigrationVersion;
- (id)_synchronizedVibrationIdentifierForToneIdentifier:(id)arg1;
- (id)_systemVibrationIdentifiersForSubdirectory:(id)arg1;
- (id)_systemWideVibrationPatternPreferenceKeyForAlertType:(int)arg1;
- (id)_userGeneratedVibrationPatterns;
- (BOOL)_vibrationIsSettableForAlertType:(int)arg1;
- (id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (id)allUserGeneratedVibrationIdentifiers;
- (id)allUserSelectableSystemVibrationIdentifiers;
- (BOOL)allowsAutoRefresh;
- (id)currentVibrationIdentifierForAlertType:(int)arg1;
- (id)currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)currentVibrationIdentifierForAlertType:(int)arg1 topic:(id)arg2;
- (id)currentVibrationNameForAlertType:(int)arg1;
- (id)currentVibrationPatternForAlertType:(int)arg1;
- (void)dealloc;
- (id)defaultVibrationIdentifierForAlertType:(int)arg1;
- (id)defaultVibrationNameForAlertType:(int)arg1;
- (id)defaultVibrationPatternForAlertType:(int)arg1;
- (BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)nameOfVibrationWithIdentifier:(id)arg1;
- (BOOL)needsRefresh;
- (id)noneVibrationName;
- (id)noneVibrationPattern;
- (id)patternForVibrationWithIdentifier:(id)arg1;
- (id)patternForVibrationWithIdentifier:(id)arg1 repeating:(BOOL)arg2;
- (BOOL)refresh;
- (void)setAllowsAutoRefresh:(BOOL)arg1;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 topic:(id)arg3;
- (BOOL)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id*)arg3;
- (BOOL)shouldVibrateForCurrentRingerSwitchState;
- (BOOL)shouldVibrateOnRing;
- (BOOL)shouldVibrateOnSilent;
- (BOOL)vibrationWithIdentifierIsValid:(id)arg1;

@end