/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPersistentChartMediator : TSCHPersistentChartMediator <TSCECalculationEngineRegistration, TSKDocumentObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (struct __CFUUID { }*)formulaOwnerID;
- (id)initFromUnarchiver:(id)arg1;
- (id)objectToArchiveInDependencyTracker;
- (BOOL)registerLast;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)unregisterFromCalculationEngine:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willModify;

@end