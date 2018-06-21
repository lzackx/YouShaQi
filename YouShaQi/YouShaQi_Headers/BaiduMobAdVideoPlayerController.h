//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BaiduMobAdWebLPControllerDelegate-Protocol.h"

@class BaiduMobAdVideoAdObj, MPMoviePlayerController, NSString, NSTimer, UIButton, UILabel;
@protocol BaiduMobAdVideoControllerDelegate;

@interface BaiduMobAdVideoPlayerController : UIViewController <BaiduMobAdWebLPControllerDelegate>
{
    struct CGRect windowFrame;
    struct CGRect bannerFrame;
    int state;
    BaiduMobAdVideoAdObj *currentAd;
    struct CGSize _natualSize;
    UIButton *_btnClose;
    UIButton *_silenceButton;
    UIButton *_btnLP;
    NSTimer *_countingTimer;
    UILabel *_label;
    UILabel *_startLabel;
    UILabel *_endLabel;
    UILabel *_bkgLabel;
    float _volume;
    _Bool _isSilenceMode;
    MPMoviePlayerController *_moviePlayer;
    id <BaiduMobAdVideoControllerDelegate> delegate;
}

@property(nonatomic) id <BaiduMobAdVideoControllerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) BaiduMobAdVideoAdObj *Ad; // @synthesize Ad=currentAd;
@property(retain, nonatomic) MPMoviePlayerController *moviePlayer; // @synthesize moviePlayer=_moviePlayer;
- (void)dealloc;
- (void)webLPController:(id)arg1 didFinishWithResult:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillLayoutSubviews;
- (void)stopCountingTimer;
- (void)startCountingTimer;
- (void)counting:(id)arg1;
- (void)play:(_Bool)arg1;
- (void)playVideoAd;
- (void)stop;
- (void)layoutSubview:(struct CGSize)arg1 withOrientaion:(long long)arg2;
- (void)createOverlayView;
- (void)slienceClick:(id)arg1;
- (void)clickClose:(id)arg1;
- (void)clickLP:(id)arg1;
- (void)clickAdToAction;
- (void)showClickBtn;
- (void)viewDidLoad;
- (void)moviePlayerPlaybackStateChanged:(id)arg1;
- (void)moviePlayBackDidFinish:(id)arg1;
- (struct CGRect)videoSizeToFit:(struct CGSize)arg1 natualSize:(struct CGSize)arg2;
- (id)init;
- (void)registerForeBackgroundEvent;
- (void)enteredForeground:(id)arg1;
- (void)enteredBackground:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
