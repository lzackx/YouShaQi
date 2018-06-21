//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class BaiduMobAdRecommend, NSMutableData, NSString, NSURLConnection, UITapGestureRecognizer;
@protocol BaiduMobAdRecommendDelegate;

@interface BaiduMobAdRecommendIcon : UIView <NSURLConnectionDataDelegate>
{
    _Bool _hasImpressed;
    _Bool _sentImpressedLog;
    int _anti_tag;
    id <BaiduMobAdRecommendDelegate> _delegate;
    double _createTime;
    BaiduMobAdRecommend *_recommend;
    UITapGestureRecognizer *_tapGesture;
    NSURLConnection *_connection;
    NSMutableData *_data;
    NSString *_winUrl;
    NSString *_clickLogUrl;
    NSString *_showLogUrl;
    NSString *_adType;
}

@property(nonatomic) int anti_tag; // @synthesize anti_tag=_anti_tag;
@property(copy, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(copy, nonatomic) NSString *showLogUrl; // @synthesize showLogUrl=_showLogUrl;
@property(copy, nonatomic) NSString *clickLogUrl; // @synthesize clickLogUrl=_clickLogUrl;
@property(copy, nonatomic) NSString *winUrl; // @synthesize winUrl=_winUrl;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool sentImpressedLog; // @synthesize sentImpressedLog=_sentImpressedLog;
@property(nonatomic) _Bool hasImpressed; // @synthesize hasImpressed=_hasImpressed;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) BaiduMobAdRecommend *recommend; // @synthesize recommend=_recommend;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) id <BaiduMobAdRecommendDelegate> delegate; // @synthesize delegate=_delegate;
- (id)channelId;
- (id)publisherId;
- (id)appSpec;
- (id)apId;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToWindow;
- (_Bool)validateWith:(id)arg1;
- (void)sendShowLog;
- (void)recommendIconImpressed;
- (void)recommendIconClicked:(id)arg1;
- (void)parseRecommandLogInfo:(id)arg1;
- (void)parseResultData;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)generateUrl;
- (void)requestRecommendIconLogInfo;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 imageView:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
