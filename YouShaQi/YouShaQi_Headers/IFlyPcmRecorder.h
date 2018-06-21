//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioSessionDelegate-Protocol.h"

@class NSString, NSTimer;
@protocol IFlyPcmRecorderDelegate;

@interface IFlyPcmRecorder : NSObject <AVAudioSessionDelegate>
{
    struct {
        struct OpaqueAudioFileID *audioFile;
        struct AudioStreamBasicDescription dataFormat;
        struct OpaqueAudioQueue *queue;
        struct AudioQueueLevelMeterState *audioLevels;
        struct AudioQueueBuffer *buffers[10];
        unsigned int bufferByteSize;
        long long currentPacket;
        _Bool recording;
        IFlyPcmRecorder *recorder;
    } state;
    unsigned int mBits;
    unsigned int mChannels;
    float mPowerGetCycle;
    id <IFlyPcmRecorderDelegate> _delegate;
    double mSampleRate;
    NSTimer *mGetPowerTimer;
    NSString *mSaveAudioPath;
    struct __sFILE *mSaveFile;
}

+ (id)sharedInstance;
@property(nonatomic) float mPowerGetCycle; // @synthesize mPowerGetCycle;
@property(nonatomic) struct __sFILE *mSaveFile; // @synthesize mSaveFile;
@property(retain, nonatomic) NSString *mSaveAudioPath; // @synthesize mSaveAudioPath;
@property(retain, nonatomic) NSTimer *mGetPowerTimer; // @synthesize mGetPowerTimer;
@property(nonatomic) unsigned int mChannels; // @synthesize mChannels;
@property(nonatomic) unsigned int mBits; // @synthesize mBits;
@property(nonatomic) double mSampleRate; // @synthesize mSampleRate;
@property id <IFlyPcmRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)interruption:(id)arg1;
- (void)endInterruption;
- (void)beginInterruption;
- (void)getPower;
- (void)resumeRecorder;
- (void)pauseRecorder;
- (void)setupAudioFormat:(struct AudioStreamBasicDescription *)arg1;
- (_Bool)canRecord;
- (void)SetGetPowerTimerInvalidate;
- (void)setSaveAudioPath:(id)arg1;
- (void)setPowerCycle:(float)arg1;
- (void)setSample:(id)arg1;
- (void)stop;
- (_Bool)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

