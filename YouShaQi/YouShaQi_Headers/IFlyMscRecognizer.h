//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "IFlyPcmRecorderDelegate-Protocol.h"
#import "ISREngineDelegate-Protocol.h"

@class IFlyISRParam, IFlyPcmRecorder, ISREngine, NSDate, NSMutableArray, NSString;
@protocol IFlySpeechRecognizerDelegate;

@interface IFlyMscRecognizer : NSOperation <ISREngineDelegate, IFlyPcmRecorderDelegate>
{
    ISREngine *_isrEngine;
    IFlyPcmRecorder *_isrRecorder;
    int _error;
    int _index;
    id <IFlySpeechRecognizerDelegate> _delegate;
    long long _audioCount;
    long long _resultCount;
    _Bool _isNeedExit;
    int _netTimeout;
    NSDate *_startDate;
    NSDate *_stopDate;
    _Bool _isWait;
    int _state;
    NSString *_params;
    NSString *_grammarId;
    NSMutableArray *_queue;
    IFlyISRParam *_sessionConfig;
}

+ (void)setTimeout:(unsigned long long)arg1;
@property(readonly, nonatomic) IFlyISRParam *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property(nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *grammarId; // @synthesize grammarId=_grammarId;
@property(copy, nonatomic) NSString *params; // @synthesize params=_params;
- (int)buildGrammar:(CDUnknownBlockType)arg1 grammarType:(id)arg2 grammarContent:(id)arg3;
- (void)onIFlyRecorderVolumeChanged:(int)arg1;
- (void)onIFlyRecorderError:(id)arg1 theError:(int)arg2;
- (void)onIFlyRecorderBuffer:(const void *)arg1 bufferSize:(int)arg2;
- (void)onEnd:(int)arg1;
- (void)onResult:(id)arg1 isLast:(_Bool)arg2;
- (void)onEvent:(int)arg1 arg0:(int)arg2 arg1:(int)arg3 data:(id)arg4;
- (void)onStop;
- (void)setSessionInfo;
- (void)writeEndData;
- (void)writeWaveData;
- (void)beginSession;
- (void)dealloc;
- (void)main;
- (_Bool)stopRecordAndWaitResult;
- (_Bool)startRecord;
- (void)setDelegate:(id)arg1;
- (id)init:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

