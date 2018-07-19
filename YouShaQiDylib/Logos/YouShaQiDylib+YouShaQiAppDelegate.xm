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
- (void)remoteControlReceivedWithEvent:(id)arg1 { }
- (void)showRemoteNotification:(id)arg1 { }
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 { }
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 { }
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 { }
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 { }
- (void)parameterInitial { }
- (void)getVersionLimitConfig { }
- (void)getSeverErrorConfig { }
- (void)setupIFlySDK { }
- (void)setupUmengTrack { }
- (void)getUMengOnlineConfig { }
- (void)uMengOnlineConfigCallBack:(id)arg1 { }
- (void)updateUmengSpecialParams:(id)arg1 { }

%end

