//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTAdMgr, GDTAdWebView, GDTAdWebViewClient, GDTBaseInterstitialDialog, GDTInterstitialLifeCycleStateListener, GDTInterstitialService, NSString;
@protocol GDTMobInterstitialDelegate;

@interface GDTMobInterstitial : NSObject
{
    GDTAdWebView *_webView;
    GDTAdWebViewClient *_webViewClient;
    NSString *_placementId;
    NSString *_appkey;
    GDTInterstitialLifeCycleStateListener *_listener;
    GDTAdMgr *_adMgr;
    GDTInterstitialService *_interstitialService;
    GDTBaseInterstitialDialog *_dialog;
    _Bool _fullScreen;
    _Bool _isReady;
    _Bool _isGpsOn;
    id <GDTMobInterstitialDelegate> _delegate;
}

@property(nonatomic) _Bool isGpsOn; // @synthesize isGpsOn=_isGpsOn;
@property(nonatomic) id <GDTMobInterstitialDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
- (void).cxx_destruct;
- (void)cleanWebView;
- (void)dealloc;
- (void)setFullScreen:(id)arg1;
- (void)interstitialDidPresent;
- (void)interstitialWillPresent;
- (void)presentFromRootViewController:(id)arg1;
- (void)showError:(int)arg1;
- (_Bool)checkParams;
- (void)loadAd;
- (id)getHandlers;
- (void)initWebView;
- (void)initWebViewClient;
- (void)initAdMgr;
- (id)initWithAppkey:(id)arg1 placementId:(id)arg2;

@end
