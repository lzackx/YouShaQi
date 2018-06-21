//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IFlyISRParam, NSArray, NSMutableString, NSString;
@protocol ISREngineDelegate;

@interface ISREngine : NSObject
{
    char _szSession[128];
    int _rate;
    id <ISREngineDelegate> _delegate;
    _Bool _haveResult;
    NSMutableString *_sessionString;
    NSArray *_result;
    NSString *_sessionId;
    IFlyISRParam *_sessionConfig;
    unsigned long long _parseCategory;
}

@property unsigned long long parseCategory; // @synthesize parseCategory=_parseCategory;
@property(readonly, nonatomic) IFlyISRParam *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property(copy) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSArray *result; // @synthesize result=_result;
@property id <ISREngineDelegate> delegate; // @synthesize delegate=_delegate;
- (int)setSessionInfo:(id)arg1;
- (id)getStringValue:(id)arg1;
- (int)getVolume;
- (int)getUpflow:(_Bool)arg1;
- (int)stopEngine;
- (int)putWaveData:(id)arg1 withLength:(unsigned int)arg2;
- (int)begin:(id)arg1 grammar:(id)arg2;
- (_Bool)isVoiceChange;
- (_Bool)putEndData;
- (int)putData:(const char *)arg1 theWaveLen:(int)arg2 theAudioStatus:(int)arg3;
- (void)dealloc;
- (id)init:(id)arg1;

@end
