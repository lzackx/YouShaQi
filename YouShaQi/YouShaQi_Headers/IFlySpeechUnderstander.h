//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IFlySpeechRecognizer;
@protocol IFlySpeechRecognizerDelegate;

@interface IFlySpeechUnderstander : NSObject
{
    id <IFlySpeechRecognizerDelegate> _delegate;
    IFlySpeechRecognizer *_recognizer;
}

+ (id)sharedInstance;
@property(retain) IFlySpeechRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(retain, nonatomic) id <IFlySpeechRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)destroy;
- (void)dealloc;
- (_Bool)writeAudio:(id)arg1;
- (void)cancel;
- (void)stopListening;
@property(readonly) _Bool isUnderstanding;
- (_Bool)startListening;
- (id)getDelegate;
- (_Bool)setParameter:(id)arg1 forKey:(id)arg2;

@end
