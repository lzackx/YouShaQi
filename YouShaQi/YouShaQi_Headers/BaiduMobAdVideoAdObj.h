//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BaiduMobAdResourceDownloaderDelegate-Protocol.h"

@class BaiduMobAdResourceDownloader, NSString;
@protocol BaiduMobAdVideoAdObjDelegate;

@interface BaiduMobAdVideoAdObj : NSObject <BaiduMobAdResourceDownloaderDelegate>
{
    NSString *id_;
    _Bool bIconDownLoaded;
    int tag;
    NSString *clickURL;
    NSString *iconURL;
    NSString *videoCachePath;
    NSString *iconFile;
    NSString *pressIconFile;
    NSString *clkLogURL;
    NSString *videoURL;
    int actionType;
    int viewType;
    NSString *adType;
    BaiduMobAdResourceDownloader *downloader_;
    id <BaiduMobAdVideoAdObjDelegate> delegate_;
    int state;
    _Bool resourceCached;
    _Bool iconDownLoaded;
    int duration;
    NSString *bannerCachePath;
}

+ (id)urlEncodeValue:(id)arg1;
@property(nonatomic) int duration; // @synthesize duration;
@property(nonatomic) int tag; // @synthesize tag;
@property(nonatomic) id <BaiduMobAdVideoAdObjDelegate> delegate; // @synthesize delegate=delegate_;
@property(readonly, nonatomic) NSString *bannerCachePath; // @synthesize bannerCachePath;
@property(readonly, nonatomic) NSString *videoCachePath; // @synthesize videoCachePath;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=id_;
@property(retain, nonatomic) NSString *adType; // @synthesize adType;
@property(nonatomic) int viewType; // @synthesize viewType;
@property(nonatomic) int actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *videoURL; // @synthesize videoURL;
@property(retain, nonatomic) NSString *clkLogURL; // @synthesize clkLogURL;
@property _Bool iconDownLoaded; // @synthesize iconDownLoaded;
@property _Bool resourceCached; // @synthesize resourceCached;
@property(retain, nonatomic) NSString *pressIconFile; // @synthesize pressIconFile;
@property(retain, nonatomic) NSString *iconFile; // @synthesize iconFile;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL;
@property(retain, nonatomic) NSString *clickURL; // @synthesize clickURL;
- (void)resourceLoadFailed;
- (void)resourceDidLoad:(id)arg1;
- (void)dealloc;
- (void)requestResource;
- (id)initWithDictonary:(id)arg1;
- (_Bool)canDeliverNow;

@end

