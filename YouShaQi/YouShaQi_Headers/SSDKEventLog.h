//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSDKLog.h"

@class NSString;

@interface SSDKEventLog : SSDKLog
{
    NSString *_eventId;
    NSString *_eventTarget;
    NSString *_eventParams;
}

@property(retain, nonatomic) NSString *eventParams; // @synthesize eventParams=_eventParams;
@property(retain, nonatomic) NSString *eventTarget; // @synthesize eventTarget=_eventTarget;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (void)getLogContent:(CDUnknownBlockType)arg1;
- (id)initWithEventId:(id)arg1 eventTarget:(id)arg2 eventParams:(id)arg3;

@end

