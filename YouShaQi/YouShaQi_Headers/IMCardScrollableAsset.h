//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMContainerAsset.h"

#import "IMStrandsViewPoolDelegate-Protocol.h"
#import "IMUICollectionViewSliderLayoutDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSString;

@interface IMCardScrollableAsset : IMContainerAsset <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IMStrandsViewPoolDelegate, IMUICollectionViewSliderLayoutDelegate>
{
    NSMutableArray *_buildingAssets;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *buildingAssets; // @synthesize buildingAssets=_buildingAssets;
- (void).cxx_destruct;
- (void)imUICollectionViewSliderLayoutCurrentPage:(long long)arg1;
- (void)imStrandsViewPoolResetView:(id)arg1 withProperties:(id)arg2;
- (void)imStrandsViewPoolCleanView:(id)arg1;
- (id)imStrandsViewPoolCreateViewWithProperties:(id)arg1;
- (void)assetFailedToBuild:(id)arg1;
- (void)assetDidFinishBuilding:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)handleViewableAsset:(id)arg1;
- (void)prepareChildAsset:(id)arg1;
- (void)fetchAssetResources;
- (id)propertiesFromJson:(id)arg1;
- (void)recycleView;
- (id)buildAssetView;
- (_Bool)failAssetOnNilChild;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

