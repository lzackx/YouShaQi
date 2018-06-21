//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSURL;
@protocol BaiduMobAdNativeAdAdapterDelegate;

@protocol BaiduMobAdNativeAdAdapter <NSObject>
@property(readonly, nonatomic) NSURL *defaultActionURL;
@property(readonly, nonatomic) NSDictionary *properties;

@optional
@property(nonatomic) __weak id <BaiduMobAdNativeAdAdapterDelegate> delegate;
- (void)trackVideoEvent:(int)arg1 withCurrentTime:(double)arg2;
- (void)trackClick;
- (void)trackImpression;
- (void)displayContentForURL:(NSURL *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end
