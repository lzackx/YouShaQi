//
//  YouShaQiDylib+YouShaQiAppDelegate.xm
//  YouShaQiDylib
//
//  Created by lzackx on 2018/6/15.
//  Copyright © 2018年 lzackx. All rights reserved.
//

#import <UIKit/UIKit.h>

%hook YouShaQiAppDelegate

// MARK: Useless
- (void)getSeverErrorConfig { }
- (void)setupUmengTrack { }
- (void)getUMengOnlineConfig { }
- (void)uMengOnlineConfigCallBack:(id)arg1 { }
- (void)updateUmengSpecialParams:(id)arg1 { }
- (void)customAdUtilsInmobiSplashAdSucceed { }
- (void)customAdUtilsBaiduSplashAdClicked:(id)arg1 { }
- (void)customAdUtilsBaiduSplashAdSucceed:(id)arg1 { }
- (void)customAdUtilsGDTSplashAdSucceed { }
- (void)customAdUtilsGDTSplashAdStarted:(id)arg1 { }
- (void)onClickNativeAd:(id)arg1 { }

%end

