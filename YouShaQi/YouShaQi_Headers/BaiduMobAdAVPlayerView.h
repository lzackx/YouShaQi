//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BaiduMobAdActionComposerDelegate-Protocol.h"
#import "BaiduMobAdResourceDownloaderDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class AVPlayer, AVPlayerLayer, BaiduMobAdActionComposer, BaiduMobAdNVideoObj, BaiduMobAdWebBridgeBase, NSString, NSTimer, NSURL, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface BaiduMobAdAVPlayerView : UIView <BaiduMobAdActionComposerDelegate, BaiduMobAdResourceDownloaderDelegate, UIAlertViewDelegate>
{
    int _state;
    _Bool _isVolumeON;
    _Bool _isOriginStatusBarHidden;
    _Bool _shouldShowEndCard;
    _Bool _isAppActive;
    _Bool _isFullScreen;
    _Bool _isFirstTimePlay;
    _Bool _metaLoaded;
    int _remainTimeValue;
    BaiduMobAdWebBridgeBase *_bridge;
    UIActivityIndicatorView *_indicatorView;
    UIButton *_btnVolume;
    UIButton *_btnSkip;
    UILabel *_timecountLabel;
    NSString *_endcardUrlString;
    UIImageView *_endcardview;
    UIButton *_btnEndCardClose;
    UITapGestureRecognizer *_endCardTapGesture;
    NSTimer *_countTimer;
    BaiduMobAdActionComposer *_composer;
    double _backgroundTimeStamp;
    BaiduMobAdNVideoObj *_associatedObject;
    UIView *_displayView;
    NSURL *_url;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    UITapGestureRecognizer *_tapGesture;
    UIView *_originSuperView;
    id _playbackObserver;
    struct CGRect _originFrame;
}

@property(retain, nonatomic) id playbackObserver; // @synthesize playbackObserver=_playbackObserver;
@property(nonatomic) UIView *originSuperView; // @synthesize originSuperView=_originSuperView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) UIView *displayView; // @synthesize displayView=_displayView;
@property(retain, nonatomic) BaiduMobAdNVideoObj *associatedObject; // @synthesize associatedObject=_associatedObject;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) _Bool metaLoaded; // @synthesize metaLoaded=_metaLoaded;
@property(nonatomic) _Bool isFirstTimePlay; // @synthesize isFirstTimePlay=_isFirstTimePlay;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property _Bool isAppActive; // @synthesize isAppActive=_isAppActive;
@property _Bool shouldShowEndCard; // @synthesize shouldShowEndCard=_shouldShowEndCard;
@property _Bool isOriginStatusBarHidden; // @synthesize isOriginStatusBarHidden=_isOriginStatusBarHidden;
@property double backgroundTimeStamp; // @synthesize backgroundTimeStamp=_backgroundTimeStamp;
@property(retain, nonatomic) BaiduMobAdActionComposer *composer; // @synthesize composer=_composer;
@property(nonatomic) int remainTimeValue; // @synthesize remainTimeValue=_remainTimeValue;
@property(retain, nonatomic) NSTimer *countTimer; // @synthesize countTimer=_countTimer;
@property(retain, nonatomic) UITapGestureRecognizer *endCardTapGesture; // @synthesize endCardTapGesture=_endCardTapGesture;
@property(retain, nonatomic) UIButton *btnEndCardClose; // @synthesize btnEndCardClose=_btnEndCardClose;
@property(retain, nonatomic) UIImageView *endcardview; // @synthesize endcardview=_endcardview;
@property(retain, nonatomic) NSString *endcardUrlString; // @synthesize endcardUrlString=_endcardUrlString;
@property(retain, nonatomic) UILabel *timecountLabel; // @synthesize timecountLabel=_timecountLabel;
@property(retain, nonatomic) UIButton *btnSkip; // @synthesize btnSkip=_btnSkip;
@property(nonatomic) _Bool isVolumeON; // @synthesize isVolumeON=_isVolumeON;
@property(retain, nonatomic) UIButton *btnVolume; // @synthesize btnVolume=_btnVolume;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak BaiduMobAdWebBridgeBase *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)sendUnRetryUrl:(id)arg1;
- (void)sendVideEvent:(int)arg1 currentTime:(double)arg2;
- (_Bool)newWindowTransform;
- (void)changeOrientation;
- (void)didChangeOrientation;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)didFinishWithResult:(id)arg1;
- (void)checkActiveState:(id)arg1;
- (void)doAction:(id)arg1;
- (void)prepareAction;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)videoAdClick;
- (void)clickFullScreen:(id)arg1;
- (void)closeEndCard:(id)arg1;
- (void)clickEndCard:(id)arg1;
- (void)resourceLoadFailed;
- (void)resourceDidLoad:(id)arg1;
- (void)showEndCard;
- (void)prepareEndCardWithDelegate:(id)arg1;
- (void)clickSkip;
- (void)clickVolume;
- (void)playClick:(id)arg1;
- (void)playbackFail:(id)arg1;
- (void)onPlaybackLikelyToKeepUpChange;
- (void)onPlayerRateChange;
- (void)setRemainTime;
- (void)layoutDisplayArea;
- (void)displayVideo;
- (void)completePlayback;
- (void)startPlayback;
- (void)onPlayerItemDidReachEnd:(id)arg1;
- (void)onPlayerItemFail:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resizePlaybackFrame:(struct CGRect)arg1;
- (double)currentTime;
- (double)duration;
- (void)stop;
- (void)pause;
- (void)play;
- (void)handleTapGesture:(id)arg1;
- (void)checkVisible;
- (id)imageResoureForName:(id)arg1;
- (void)setupUI;
- (void)cleanUp;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
