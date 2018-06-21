//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMConfig.h"

#import "IMConfig-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;

@interface IMAdsConfig : IMConfig <IMConfig>
{
    _Bool _showInterstitialWithoutRootViewController;
    NSString *_adServerUrl;
    long long _minRefreshInterval;
    long long _defaultRefreshInterval;
    long long _fetchTimeout;
    long long _renderTimout;
    long long _imaiMaxRetries;
    long long _imaiPingInterval;
    long long _imaiPingTimeout;
    long long _imaiMaxDBEvents;
    long long _imaiMaxEventBatch;
    long long _mraidExpiry;
    long long _mraidMaxRetries;
    long long _mraidRetryInterval;
    NSString *_mraidUrl;
    long long _renderingPicWidth;
    long long _renderingPicHeight;
    long long _renderingPicQuality;
    NSString *_renderingWebViewBackground;
    long long _renderingMaxVibrationDuration;
    long long _renderingMaxVibrationPatternLength;
    NSArray *_saveContentAllowedContentType;
    long long _saveContentMaxSaveSize;
    long long _impressionMinPercentageViewed;
    long long _impressionMinTimeViewed;
    long long _impressionPollIntervalMillis;
    NSMutableDictionary *_telemetry;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_preloadingCache;
}

@property(retain, nonatomic) NSMutableDictionary *preloadingCache; // @synthesize preloadingCache=_preloadingCache;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSMutableDictionary *telemetry; // @synthesize telemetry=_telemetry;
@property(nonatomic) long long impressionPollIntervalMillis; // @synthesize impressionPollIntervalMillis=_impressionPollIntervalMillis;
@property(nonatomic) long long impressionMinTimeViewed; // @synthesize impressionMinTimeViewed=_impressionMinTimeViewed;
@property(nonatomic) long long impressionMinPercentageViewed; // @synthesize impressionMinPercentageViewed=_impressionMinPercentageViewed;
@property long long saveContentMaxSaveSize; // @synthesize saveContentMaxSaveSize=_saveContentMaxSaveSize;
@property(retain, nonatomic) NSArray *saveContentAllowedContentType; // @synthesize saveContentAllowedContentType=_saveContentAllowedContentType;
@property long long renderingMaxVibrationPatternLength; // @synthesize renderingMaxVibrationPatternLength=_renderingMaxVibrationPatternLength;
@property long long renderingMaxVibrationDuration; // @synthesize renderingMaxVibrationDuration=_renderingMaxVibrationDuration;
@property(retain, nonatomic) NSString *renderingWebViewBackground; // @synthesize renderingWebViewBackground=_renderingWebViewBackground;
@property long long renderingPicQuality; // @synthesize renderingPicQuality=_renderingPicQuality;
@property long long renderingPicHeight; // @synthesize renderingPicHeight=_renderingPicHeight;
@property long long renderingPicWidth; // @synthesize renderingPicWidth=_renderingPicWidth;
@property(retain, nonatomic) NSString *mraidUrl; // @synthesize mraidUrl=_mraidUrl;
@property long long mraidRetryInterval; // @synthesize mraidRetryInterval=_mraidRetryInterval;
@property long long mraidMaxRetries; // @synthesize mraidMaxRetries=_mraidMaxRetries;
@property long long mraidExpiry; // @synthesize mraidExpiry=_mraidExpiry;
@property long long imaiMaxEventBatch; // @synthesize imaiMaxEventBatch=_imaiMaxEventBatch;
@property long long imaiMaxDBEvents; // @synthesize imaiMaxDBEvents=_imaiMaxDBEvents;
@property long long imaiPingTimeout; // @synthesize imaiPingTimeout=_imaiPingTimeout;
@property long long imaiPingInterval; // @synthesize imaiPingInterval=_imaiPingInterval;
@property long long imaiMaxRetries; // @synthesize imaiMaxRetries=_imaiMaxRetries;
@property long long renderTimout; // @synthesize renderTimout=_renderTimout;
@property(nonatomic) _Bool showInterstitialWithoutRootViewController; // @synthesize showInterstitialWithoutRootViewController=_showInterstitialWithoutRootViewController;
@property long long fetchTimeout; // @synthesize fetchTimeout=_fetchTimeout;
@property long long defaultRefreshInterval; // @synthesize defaultRefreshInterval=_defaultRefreshInterval;
@property long long minRefreshInterval; // @synthesize minRefreshInterval=_minRefreshInterval;
@property(retain, nonatomic) NSString *adServerUrl; // @synthesize adServerUrl=_adServerUrl;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)getType;
- (_Bool)updatefromDictionary:(id)arg1;
- (id)getPlacementCacheConfig;
- (id)cacheConfigForType:(id)arg1;
- (id)toDictionary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

