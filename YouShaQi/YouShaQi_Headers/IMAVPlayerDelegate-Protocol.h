//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IMAVPlayer, IMRenderView, NSString;

@protocol IMAVPlayerDelegate
- (void)fireAudioVolumeChangeEvent:(float)arg1 mediaID:(NSString *)arg2 onScheme:(NSString *)arg3;
- (void)fireVideoVolumeChangeEvent:(float)arg1 mediaID:(NSString *)arg2 onScheme:(NSString *)arg3;
- (void)fireMediaCloseEvent:(int)arg1 userClosed:(_Bool)arg2 mediaID:(NSString *)arg3 onScheme:(NSString *)arg4;
- (void)fireMediaTimeUpdateEvent:(int)arg1 duration:(int)arg2 mediaID:(NSString *)arg3 onScheme:(NSString *)arg4;
- (void)fireMediaErrorEventForID:(NSString *)arg1 errcode:(int)arg2 onScheme:(NSString *)arg3;
- (void)fireMediaTrackingEvent:(NSString *)arg1 mediaID:(NSString *)arg2 onScheme:(NSString *)arg3;
- (IMRenderView *)avVideoView;
- (void)avVideoDidExitFullScreen;
- (void)avVideoDidEnterFullScreen;
- (void)avVideoWillExitFullscreen;
- (void)avVideoWillEnterFullscreen;
- (void)avVideoPlaybackCompleted:(IMAVPlayer *)arg1 withError:(_Bool)arg2;
@end

