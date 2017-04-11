/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSelectableServiceGridViewController : HUServiceGridViewController <HUServiceGridItemManagerDelegate> {
    BOOL  _allowsEmptySelection;
    BOOL  _allowsMultipleSelection;
    HFMutableSetDiff * _mutableSelectedItems;
    HUServiceGridItemManager * _serviceGridItemManager;
}

@property (nonatomic) BOOL allowsEmptySelection;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HFMutableSetDiff *mutableSelectedItems;
@property (nonatomic, retain) HFSetDiff *selectedItems;
@property (nonatomic) HUServiceGridItemManager *serviceGridItemManager;
@property (readonly) Class superclass;

+ (id /* block */)defaultItemProviderCreatorWithOptions:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_addAllServicesInSectionFromButton:(id)arg1;
- (void)_addItemToSelection:(id)arg1;
- (void)_deleteItemFromSelection:(id)arg1;
- (void)_removeAllServicesInSectionFromButton:(id)arg1;
- (void)_setSelected:(BOOL)arg1 forItemsInSection:(int)arg2;
- (void)_updateSelectionState:(BOOL)arg1 forCell:(id)arg2;
- (void)_updateToggleStateForSection:(int)arg1 headerView:(id)arg2;
- (BOOL)allowsEmptySelection;
- (BOOL)allowsMultipleSelection;
- (BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)didChangeSelection;
- (void)didDeselectItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (id)initWithItemManager:(id)arg1;
- (id)initWithServiceGridItemManager:(id)arg1;
- (BOOL)itemManager:(id)arg1 performBatchUpdateBlock:(id /* block */)arg2;
- (id)mutableSelectedItems;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { float x1; float x2; })arg2;
- (id)selectedItems;
- (id)serviceGridItemManager;
- (void)setAllowsEmptySelection:(BOOL)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setMutableSelectedItems:(id)arg1;
- (void)setSelectedItems:(id)arg1;
- (void)setServiceGridItemManager:(id)arg1;

@end