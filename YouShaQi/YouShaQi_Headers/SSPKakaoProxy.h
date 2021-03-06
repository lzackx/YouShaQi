//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMOBFPlugin-Protocol.h"

@class NSMutableSet, NSString;

@interface SSPKakaoProxy : NSObject <IMOBFPlugin>
{
    NSMutableSet *_authCallbackSet;
}

@property(retain, nonatomic) NSMutableSet *authCallbackSet; // @synthesize authCallbackSet=_authCallbackSet;
- (void).cxx_destruct;
- (void)appDidBecomeActive:(id)arg1;
- (void)registerShareMethod;
- (void)registerHandleSSOCallbackMethod;
- (void)registerAuthMethod;
- (void)unload;
- (void)load:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

