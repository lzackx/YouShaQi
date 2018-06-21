//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMNativeStrandsDelegate-Protocol.h"

@class IMStrandPlacement, IMStrandPosition, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol IMStrandDataSourceManagerDelegate, OS_dispatch_queue;

@interface IMStrandDataSourceManager : NSObject <IMNativeStrandsDelegate>
{
    id <IMStrandDataSourceManagerDelegate> _delegate;
    NSArray *_visibleIndexPaths;
    NSDictionary *_extras;
    NSString *_keywords;
    IMStrandPosition *_adPositions;
    Class _cellClass;
    IMStrandPlacement *_adPlacement;
    long long _placementId;
    NSMutableDictionary *_sectionCounts;
    NSMutableDictionary *_adsDictionary;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
}

+ (id)managerWithAdPositioning:(id)arg1 cellClass:(Class)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataSourceQueue; // @synthesize dataSourceQueue=_dataSourceQueue;
@property(retain, nonatomic) NSMutableDictionary *adsDictionary; // @synthesize adsDictionary=_adsDictionary;
@property(retain, nonatomic) NSMutableDictionary *sectionCounts; // @synthesize sectionCounts=_sectionCounts;
@property(nonatomic) long long placementId; // @synthesize placementId=_placementId;
@property(retain, nonatomic) IMStrandPlacement *adPlacement; // @synthesize adPlacement=_adPlacement;
@property(nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(retain, nonatomic) IMStrandPosition *adPositions; // @synthesize adPositions=_adPositions;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(retain, nonatomic) NSArray *visibleIndexPaths; // @synthesize visibleIndexPaths=_visibleIndexPaths;
@property(nonatomic) __weak id <IMStrandDataSourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userWillLeaveApplicationFromNativeStrands:(id)arg1;
- (void)nativeStrandsDidDismissScreen:(id)arg1;
- (void)nativeStrandsWillDismissScreen:(id)arg1;
- (void)nativeStrandsDidPresentScreen:(id)arg1;
- (void)nativeStrandsWillPresentScreen:(id)arg1;
- (void)nativeStrands:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)nativeStrandsDidFinishLoading:(id)arg1;
- (void)updateAdLoad:(id)arg1 state:(unsigned long long)arg2;
- (void)fillAdsInConsideredRange;
- (id)retrieveAdDataForInsertionPath:(id)arg1;
- (_Bool)shouldPlaceAdAtIndexPath:(id)arg1;
- (id)earliestValidIndexPathBeforeIndexPath:(id)arg1 withinDistance:(unsigned long long)arg2;
- (id)furthestValidIndexPathAfterIndexPath:(id)arg1 withinDistance:(unsigned long long)arg2;
- (struct _NSRange)rangeToDeleteInSection:(id)arg1 forOriginalContentIndexPaths:(id)arg2;
- (void)deleteItemCountSections:(id)arg1;
- (void)insertItemCountSections:(id)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (id)originalIndexPathsForRevisedIndexPaths:(id)arg1;
- (id)revisedIndexPathsForOriginalIndexPaths:(id)arg1;
- (id)originalIndexPathForRevisedIndexPath:(id)arg1;
- (id)revisedIndexPathForOriginalIndexPath:(id)arg1;
- (unsigned long long)revisedNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2;
- (_Bool)isAdAtIndexPath:(id)arg1;
- (void)clearAds;
- (void)renderAdAtIndexPath:(id)arg1 inView:(id)arg2;
- (id)getAdDataForRevisedIndexPath:(id)arg1;
- (void)loadAdsForPlacementId:(long long)arg1;
- (struct CGSize)sizeForAdAtIndexPath:(id)arg1 withMaximumWidth:(double)arg2;
- (id)reuseIdentifierForRenderingClassAtIndexPath:(id)arg1;
- (void)setItemCount:(unsigned long long)arg1 forSection:(long long)arg2;
- (id)initWithAdPositioning:(id)arg1 cellClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
