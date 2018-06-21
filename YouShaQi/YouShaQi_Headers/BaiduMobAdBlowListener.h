//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BaiduMobAdBlowListener : NSObject
{
    struct AudioQueueLevelMeterState *_levels;
    struct OpaqueAudioQueue *_queue;
    struct AudioStreamBasicDescription _format;
    double _sampleRate;
    NSMutableArray *_jsTokenArray;
}

+ (id)sharedListener;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)setupMetering;
- (void)setupBuffers;
- (void)setupFormat;
- (void)setupQueue;
- (void)updateLevels;
- (struct AudioQueueLevelMeterState *)levels;
- (float)peakPower;
- (float)averagePower;
- (_Bool)isListening;
- (void)stop;
- (void)pause;
- (void)listen;
- (void)dealloc;
@property(readonly, nonatomic) NSMutableArray *jsTokenArray; // @synthesize jsTokenArray=_jsTokenArray;

@end

