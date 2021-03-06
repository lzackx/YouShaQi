//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface MOBFImageObserver : NSObject
{
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _resultHandler;
}

@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)fault:(id)arg1;
- (void)result:(id)arg1;
- (id)initWithURL:(id)arg1 result:(CDUnknownBlockType)arg2;

@end

