//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RACStream.h"

@interface RACSignal : RACStream
{
}

+ (id)startLazilyWithScheduler:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)startEagerlyWithScheduler:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)never;
+ (id)error:(id)arg1;
+ (id)createSignal:(CDUnknownBlockType)arg1;
- (id)description;

@end

