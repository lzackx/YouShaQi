//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMPlacementDao : NSObject
{
}

- (void)cleanUpWithTimeToLive:(long long)arg1 expiredCount:(long long *)arg2;
- (void)updateTableForPlacementId:(long long)arg1 withTP:(id)arg2 maxLimit:(long long)arg3 overflow:(long long *)arg4;
- (id)getAllPlacements;
- (id)createTableSQL;
- (id)init;

@end

