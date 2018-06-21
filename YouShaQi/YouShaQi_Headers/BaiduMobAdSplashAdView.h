//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class BaiduMobAdSplashAdObj, UIWebView;

@interface BaiduMobAdSplashAdView : UIButton
{
    _Bool _canClick;
    UIWebView *_adWebView;
    BaiduMobAdSplashAdObj *_adObj;
    struct CGSize _adImageSize;
    struct CGRect _contentFrame;
}

@property(nonatomic) _Bool canClick; // @synthesize canClick=_canClick;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) struct CGSize adImageSize; // @synthesize adImageSize=_adImageSize;
@property(retain, nonatomic) BaiduMobAdSplashAdObj *adObj; // @synthesize adObj=_adObj;
@property(retain, nonatomic) UIWebView *adWebView; // @synthesize adWebView=_adWebView;
- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)rotateAccordingToStatusBarOrientation;
- (void)statusBarFrameOrOrientationChanged:(id)arg1;
- (struct CGSize)getScaledImageSize:(id)arg1;
- (id)SdkJSScriptPath;
- (id)jsString;
- (void)addLogoRecommendOnTargetView:(id)arg1 frame:(struct CGSize)arg2;
- (_Bool)showSplashWithAd:(id)arg1;
- (void)sendClickLog:(id)arg1;
- (void)htmlSplashClick:(id)arg1;
- (void)nativeSplashClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end

