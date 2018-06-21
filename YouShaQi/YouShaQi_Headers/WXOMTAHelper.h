//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WXOMTAEnv, WXOMTAUser;

@interface WXOMTAHelper : NSObject
{
    WXOMTAEnv *env;
    WXOMTAUser *user;
    _Bool _MTAEnableFlag;
}

+ (void)setCurrentIndex:(unsigned long long)arg1;
+ (unsigned long long)currentIndex;
+ (void)saveOpenUDID:(id)arg1;
+ (id)getOpenUDID;
+ (id)getInstance;
+ (_Bool)isWiFiAvailable;
+ (id)getMacAddress;
+ (int)GUnzip:(id)arg1 Out:(id *)arg2;
+ (int)GZip:(id)arg1 Out:(id *)arg2;
+ (void)ChiperRC4:(id)arg1;
@property _Bool MTAEnableFlag; // @synthesize MTAEnableFlag=_MTAEnableFlag;
- (id)getXGDeviceToken;
- (id)getJson:(id)arg1;
- (void)saveMid:(id)arg1;
- (id)getMid;
- (_Bool)checkMTAEnable;
- (id)fetchSSIDInfo;
- (void)dealloc;
- (id)init;
- (id)getUser;
- (id)getEnv;

@end

