//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMOBFPlugin-Protocol.h"
#import "ISSDKPlatformProxy-Protocol.h"

@class NSString;

@interface SSPInstapaperProxy : NSObject <IMOBFPlugin, ISSDKPlatformProxy>
{
}

- (id)authViewWithSession:(id)arg1 userData:(id)arg2 callback:(id)arg3;
- (void)unload;
- (void)load:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

