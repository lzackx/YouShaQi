//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IFLySpeechPlusSDKFileManager : NSObject
{
    struct dispatch_queue_s *_queue;
}

+ (void)asyncGroup:(struct dispatch_group_s *)arg1 queue:(struct dispatch_queue_s *)arg2 writeFile:(id)arg3 data:(id)arg4 complete:(CDUnknownBlockType)arg5;
+ (id)shareInstance;
- (void)writeFileAsync:(id)arg1 data:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (_Bool)writeFile:(id)arg1 data:(id)arg2;
- (void)readFileAsync:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)readFile:(id)arg1;
- (void)dealloc;
- (id)init;

@end
