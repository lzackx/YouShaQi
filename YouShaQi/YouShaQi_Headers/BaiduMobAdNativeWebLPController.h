//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class BaiduMobAdNativeProgressView, NSDictionary, NSMutableDictionary, NSString, NSTimer, NSURL, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, UIWebView;
@protocol BaiduMobAdWebLPControllerDelegate;

@interface BaiduMobAdNativeWebLPController : UIViewController <UIWebViewDelegate, UIGestureRecognizerDelegate, SKStoreProductViewControllerDelegate>
{
    _Bool statusBarHidden;
    int _clicktime;
    int _movetime;
    int _urlclicktime;
    double _lpStartTime;
    double _lploadTime;
    double _duration;
    _Bool _firstStartLoad;
    _Bool _firstLoaded;
    _Bool _firstJumped;
    _Bool _htmlLoading;
    int checkCount;
    int totalCheckCount;
    double _lpWebStartLoad;
    double _lpWebFinishLoad;
    UIView *_container;
    UIImageView *_bkToolbar;
    UIButton *_navHomeButton;
    UIButton *_navBackButton;
    UIButton *_navForwardButton;
    UIButton *_navRefreshButton;
    UIWebView *_lpWebView;
    BaiduMobAdNativeProgressView *_progressView;
    UIView *_progressContainView;
    UILabel *_textLabel;
    NSURL *Url;
    id <BaiduMobAdWebLPControllerDelegate> delegate;
    NSDictionary *_lpActionOption;
    NSTimer *_checkTimer;
    NSString *_bodyinnerHTML;
    NSString *_currentUrl;
    NSMutableDictionary *_buttonClickCountDic;
    UIActivityIndicatorView *_indicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NSMutableDictionary *buttonClickCountDic; // @synthesize buttonClickCountDic=_buttonClickCountDic;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(copy, nonatomic) NSString *bodyinnerHTML; // @synthesize bodyinnerHTML=_bodyinnerHTML;
@property(retain, nonatomic) NSTimer *checkTimer; // @synthesize checkTimer=_checkTimer;
@property(retain, nonatomic) NSDictionary *lpActionOption; // @synthesize lpActionOption=_lpActionOption;
@property(nonatomic) id <BaiduMobAdWebLPControllerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSURL *Url; // @synthesize Url;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *progressContainView; // @synthesize progressContainView=_progressContainView;
@property(retain, nonatomic) BaiduMobAdNativeProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIWebView *lpWebView; // @synthesize lpWebView=_lpWebView;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)handleSwipe:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)layoutSubview:(struct CGSize)arg1 withOrientaion:(long long)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)pageFinishLoad;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)sendClickLog:(id)arg1;
- (void)showSKStoreProductViewController:(id)arg1 url:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)ifProgressDismissed:(id)arg1;
- (void)sendLPMonitorLogURL:(id)arg1 logType:(id)arg2;
- (void)sendLPMonitorLogURL:(id)arg1 logType:(id)arg2 dictionary:(id)arg3;
- (void)sendLPMonitorLogURL:(id)arg1 logType:(id)arg2 addition:(id)arg3;
- (void)webViewDidStartLoad:(id)arg1;
- (void)checkLoad;
- (void)viewDidLoad;
- (void)lpFunctionButtonClick:(id)arg1;
- (void)setProgressState:(double)arg1;
- (void)resetIndicatorState;
- (void)layoutProgressView:(struct CGSize)arg1 withOrientaion:(long long)arg2;
- (void)clickClose:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

