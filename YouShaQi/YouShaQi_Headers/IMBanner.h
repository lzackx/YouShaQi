//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMAdUnitDelegate-Protocol.h"

@class IMBannerAdUnit, NSDictionary, NSString, NSTimer;
@protocol IMBannerDelegate;

@interface IMBanner : UIView <IMAdUnitDelegate>
{
    _Bool _autoRefresh;
    _Bool _attachedToWindow;
    _Bool _isRefreshIntervalSetByPublisher;
    id <IMBannerDelegate> _delegate;
    long long _refreshInterval;
    NSString *_keywords;
    NSDictionary *_extras;
    long long _placementId;
    long long _transitionAnimation;
    IMBannerAdUnit *_fgBannerAdUnit;
    IMBannerAdUnit *_bgBannerAdUnit;
    NSTimer *_refreshTimer;
    double _loadTimeStamp;
}

@property double loadTimeStamp; // @synthesize loadTimeStamp=_loadTimeStamp;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property _Bool isRefreshIntervalSetByPublisher; // @synthesize isRefreshIntervalSetByPublisher=_isRefreshIntervalSetByPublisher;
@property _Bool attachedToWindow; // @synthesize attachedToWindow=_attachedToWindow;
@property _Bool autoRefresh; // @synthesize autoRefresh=_autoRefresh;
@property(retain, nonatomic) IMBannerAdUnit *bgBannerAdUnit; // @synthesize bgBannerAdUnit=_bgBannerAdUnit;
@property(retain, nonatomic) IMBannerAdUnit *fgBannerAdUnit; // @synthesize fgBannerAdUnit=_fgBannerAdUnit;
@property(nonatomic) long long transitionAnimation; // @synthesize transitionAnimation=_transitionAnimation;
@property(nonatomic) long long placementId; // @synthesize placementId=_placementId;
@property(retain, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(nonatomic) long long refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(nonatomic) __weak id <IMBannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendAdDidFailToLoadCallbackWithErrorCode:(int)arg1 andDescription:(id)arg2;
- (void)adDidLeaveApplication:(id)arg1;
- (void)ad:(id)arg1 didFailToLoadWithErrorCode:(int)arg2 andDescription:(id)arg3;
- (void)adDidFinishLoad:(id)arg1;
- (void)ad:(id)arg1 rewardActionCompletedWithRewards:(id)arg2;
- (void)ad:(id)arg1 didInteractWithParams:(id)arg2;
- (void)adDidDismissScreen:(id)arg1;
- (void)adWillDismissScreen:(id)arg1;
- (void)adDidPresentScreen:(id)arg1;
- (void)adWillPresentScreen:(id)arg1;
- (void)dealloc;
- (void)makeBannerTransition;
- (void)swapRenderViews;
- (void)removeRefreshAd;
- (void)refreshBannerTimerTrigger:(id)arg1;
- (void)refreshAd;
- (void)shouldAutoRefresh:(_Bool)arg1;
- (void)loadBGBannerAdUnit:(id)arg1;
- (void)load;
- (void)appWillGoToBackground;
- (void)appWillComeToForeground;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)createAdUnitInstances;
- (void)setInitialValues;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 placementId:(long long)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 placementId:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

