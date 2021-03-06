//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BaiduMobAdToolBarViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class BaiduMobAdToolBarView, BaiduMobAdVideoStream, NSDictionary, NSString, NSURL, UIActivityIndicatorView, UIButton, UIView, UIWebView;
@protocol BaiduMobAdRichMediaControllerDelegate;

@interface BaiduMobAdRichMediaController : UIViewController <UIWebViewDelegate, BaiduMobAdToolBarViewDelegate>
{
    UIWebView *_richMediaView;
    NSURL *_url;
    UIActivityIndicatorView *_indicatorView;
    BaiduMobAdToolBarView *_toolbarView;
    _Bool _hasClose;
    UIButton *_closeButton;
    _Bool _videoStreamOn;
    float _richMediaHeight;
    float _richMediaWidth;
    id <BaiduMobAdRichMediaControllerDelegate> delegate;
    NSDictionary *_adDictionary;
    NSDictionary *_rmActionOption;
    BaiduMobAdVideoStream *_captureManager;
    UIView *_arVideoView;
}

@property(retain, nonatomic) UIView *arVideoView; // @synthesize arVideoView=_arVideoView;
@property(retain, nonatomic) BaiduMobAdVideoStream *captureManager; // @synthesize captureManager=_captureManager;
@property(retain, nonatomic) NSDictionary *rmActionOption; // @synthesize rmActionOption=_rmActionOption;
@property(nonatomic) float richMediaWidth; // @synthesize richMediaWidth=_richMediaWidth;
@property(nonatomic) float richMediaHeight; // @synthesize richMediaHeight=_richMediaHeight;
@property(retain, nonatomic) NSDictionary *adDictionary; // @synthesize adDictionary=_adDictionary;
@property(nonatomic) _Bool hasClose; // @synthesize hasClose=_hasClose;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) UIWebView *richMediaView; // @synthesize richMediaView=_richMediaView;
@property(nonatomic) id <BaiduMobAdRichMediaControllerDelegate> delegate; // @synthesize delegate;
- (void)shutoffAREngine;
- (void)launchAREngine;
- (void)setupVideo:(long long)arg1;
- (void)layoutVideoLayer:(struct CGSize)arg1 withOrientation:(long long)arg2;
- (void)dealloc;
- (_Bool)prefersStatusBarHidden;
- (void)removeAllListeners;
- (void)loadUrl:(id)arg1;
- (void)layoutRichMediaView:(struct CGSize)arg1 withOrientaion:(long long)arg2;
- (void)toolbarButtonClick:(int)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)resetIndicatorState;
- (void)clickClose:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

