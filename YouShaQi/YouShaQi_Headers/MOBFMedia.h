//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MOBFMedia : NSObject
{
}

+ (void)concatVideosWithPaths:(id)arg1 destPath:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)mergeVideosWithPaths:(id)arg1 destPath:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)trimVideoWithPath:(id)arg1 destPath:(id)arg2 startTime:(double)arg3 endTime:(double)arg4 result:(CDUnknownBlockType)arg5;
+ (void)compressVideoWithPath:(id)arg1 destPath:(id)arg2 finished:(CDUnknownBlockType)arg3;

@end

