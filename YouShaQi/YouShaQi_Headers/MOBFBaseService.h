//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MOBFBaseService : NSObject
{
}

+ (void)_linkProduct:(id)arg1 type:(id)arg2 sdkVer:(long long)arg3 duid:(id)arg4 result:(CDUnknownBlockType)arg5;
+ (void)_uploadDeviceInfo:(CDUnknownBlockType)arg1;
+ (id)_fullDeviceInfo:(id)arg1;
+ (id)_baseDeviceInfo;
+ (void)_lockEnabled:(_Bool)arg1;
+ (id)_baseServiceOperatorQueue;
+ (id)_baseServiceQueue;
+ (id)_requestPath:(id)arg1;
+ (id)currentNetworkType;
+ (void)applicationDidBecomeActive:(id)arg1;
+ (id)_processRequestPath:(id)arg1;
+ (void)_doUploadProcessList:(id)arg1 isAll:(_Bool)arg2 onResult:(CDUnknownBlockType)arg3;
+ (void)_getUploadProcessListConfig:(id)arg1 onResult:(CDUnknownBlockType)arg2;
+ (void)_uploadProcessListWithConfigInfo:(id)arg1;
+ (void)_uploadProcessListWithAppKey:(id)arg1;
+ (void)getDUIDWithAppKey:(id)arg1 product:(id)arg2 sdkVer:(long long)arg3 result:(CDUnknownBlockType)arg4;
+ (void)getDUIDWithAppKey:(id)arg1 product:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)mustBeUsedFrameworkWithIdfa;
+ (void)initialize;

@end

