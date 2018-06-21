//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol OS_dispatch_queue;

@interface MOBFImageLoader : NSObject
{
    _Bool _isLoading;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_url;
    NSString *_cachePath;
    CDUnknownBlockType _resultHandler;
    CDUnknownBlockType _failHandler;
    CDUnknownBlockType _loadingHandler;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) CDUnknownBlockType loadingHandler; // @synthesize loadingHandler=_loadingHandler;
@property(copy, nonatomic) CDUnknownBlockType failHandler; // @synthesize failHandler=_failHandler;
@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)loadWebImageByURL:(id)arg1;
- (void)loadLocalImageByURL:(id)arg1;
- (void)load;
- (void)onLoading:(CDUnknownBlockType)arg1;
- (void)onFail:(CDUnknownBlockType)arg1;
- (void)onResult:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 cachePath:(id)arg2;

@end

