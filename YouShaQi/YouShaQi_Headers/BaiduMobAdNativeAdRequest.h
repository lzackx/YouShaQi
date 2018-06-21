//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BaiduMobAdNativeCustomEventDelegate-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"
#import "NSURLConnectionDataDelegate-Protocol.h"

@class BaiduMobAdNative, BaiduMobAdNativeAdView, BaiduMobAdNativeResponseAdsInfo, CLLocation, MPAdConfiguration, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSURL, NSURLConnection;
@protocol BaiduMobAdNativeAdDelegate;

@interface BaiduMobAdNativeAdRequest : NSObject <BaiduMobAdNativeCustomEventDelegate, NSURLConnectionDataDelegate, CLLocationManagerDelegate>
{
    _Bool _loading;
    _Bool _locationUpdating;
    _Bool _enableLocation;
    id <BaiduMobAdNativeAdDelegate> _delegate;
    NSString *_channelId;
    NSString *_publisherId;
    NSString *_appSpec;
    NSString *_apId;
    NSNumber *_width;
    NSNumber *_height;
    NSSet *_desiredAssets;
    BaiduMobAdNative *_adNative;
    NSNumber *_adAmount;
    NSString *_adUnitIdentifier;
    NSURL *_URL;
    CDUnknownBlockType _completionHandler;
    NSMutableArray *_nativeCustomEventArray;
    MPAdConfiguration *_adConfiguration;
    BaiduMobAdNativeResponseAdsInfo *_adsInfo;
    NSMutableDictionary *_adsDic;
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    NSDictionary *_responseHeaders;
    double _timestamp;
    double _adviewStartTime;
    CLLocation *_mapSdkLocation;
    NSMutableSet *_usedAdIds;
    BaiduMobAdNativeAdView *_currentAdView;
    CDStruct_2c43369c _currentLocation;
}

+ (id)getRequest;
@property(retain, nonatomic) BaiduMobAdNativeAdView *currentAdView; // @synthesize currentAdView=_currentAdView;
@property(retain, nonatomic) NSMutableSet *usedAdIds; // @synthesize usedAdIds=_usedAdIds;
@property(retain, nonatomic) CLLocation *mapSdkLocation; // @synthesize mapSdkLocation=_mapSdkLocation;
@property(nonatomic) double adviewStartTime; // @synthesize adviewStartTime=_adviewStartTime;
@property(nonatomic) CDStruct_2c43369c currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool enableLocation; // @synthesize enableLocation=_enableLocation;
@property(nonatomic) _Bool locationUpdating; // @synthesize locationUpdating=_locationUpdating;
@property(retain, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSMutableDictionary *adsDic; // @synthesize adsDic=_adsDic;
@property(retain, nonatomic) BaiduMobAdNativeResponseAdsInfo *adsInfo; // @synthesize adsInfo=_adsInfo;
@property(retain, nonatomic) MPAdConfiguration *adConfiguration; // @synthesize adConfiguration=_adConfiguration;
@property(retain, nonatomic) NSMutableArray *nativeCustomEventArray; // @synthesize nativeCustomEventArray=_nativeCustomEventArray;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *adUnitIdentifier; // @synthesize adUnitIdentifier=_adUnitIdentifier;
@property(retain, nonatomic) NSNumber *adAmount; // @synthesize adAmount=_adAmount;
@property(nonatomic) __weak BaiduMobAdNative *adNative; // @synthesize adNative=_adNative;
@property(retain, nonatomic) NSSet *desiredAssets; // @synthesize desiredAssets=_desiredAssets;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *apId; // @synthesize apId=_apId;
@property(copy, nonatomic) NSString *appSpec; // @synthesize appSpec=_appSpec;
@property(copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(nonatomic) __weak id <BaiduMobAdNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getSensorProperty;
- (id)getPersonProperty;
- (id)getAdUnitProperty;
- (id)signApp;
- (id)getDeviceInfo;
- (id)getAppInfo;
- (id)getUsedIdString;
- (unsigned long long)getAsset;
- (id)getSN;
- (id)requestId;
- (id)appProperty;
- (id)userOtherAttributes;
- (id)userHobbies;
- (long long)userSalary;
- (long long)userEducation;
- (id)userWork;
- (id)userPostalCode;
- (id)userCity;
- (id)userBirthday;
- (int)userGender;
- (id)extraDic;
- (id)urlEncoding:(id)arg1;
- (id)keywords;
- (int)adType;
- (id)at;
- (id)actType;
- (id)getAdObjectsFromAdsArray:(id)arg1;
- (void)handleResponseData;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)completeAdRequestWithAdObject:(id)arg1 error:(id)arg2;
- (id)adsKey;
- (void)getAdFromAdsDic;
- (void)cancel;
- (void)loadAdWithURL:(id)arg1;
- (void)assignCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestAdsAfterGetLocation;
- (void)startAdView:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)queryURL;
- (void)dealloc;
- (id)initWithAdUnitIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
