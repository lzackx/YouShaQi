//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RateViewDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class MBProgressHUD, NSString, RateViewController, UIViewController;

@interface RateUtils : UIView <SKStoreProductViewControllerDelegate, RateViewDelegate>
{
    MBProgressHUD *progress;
    RateViewController *rateView;
    UIViewController *_parentVC;
}

+ (void)resetViewedLastChapterCount;
+ (long long)getViewedLastChapterCount;
+ (id)getAppRateCancelledTime;
+ (id)getAppRatedTime;
+ (id)getAppInitTime;
+ (void)markViewedLastChapterCount;
+ (void)markAppRateCancelledTime;
+ (void)markAppRatedTime;
+ (void)markAppInitTime;
+ (_Bool)shouldRateApp;
+ (void)markAppRateStatus:(id)arg1;
+ (id)getCurrentAppRateStatus;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
- (void).cxx_destruct;
- (void)appReported;
- (void)appRateCancelled;
- (void)appRateConfirmed;
- (void)showRateOptions;
- (void)openAppstore;
- (id)initWithParentVC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

