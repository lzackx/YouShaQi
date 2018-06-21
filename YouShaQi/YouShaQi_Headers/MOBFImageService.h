//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MOBFImageService : NSObject
{
    NSMutableDictionary *_observerDict;
    NSMutableDictionary *_imageLoaderDict;
    NSString *_cachePath;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSMutableDictionary *imageLoaderDict; // @synthesize imageLoaderDict=_imageLoaderDict;
@property(retain, nonatomic) NSMutableDictionary *observerDict; // @synthesize observerDict=_observerDict;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forURL:(id)arg2;
- (void)getImageWithURL:(id)arg1 observer:(id)arg2 onLoading:(CDUnknownBlockType)arg3 onResult:(CDUnknownBlockType)arg4 onFail:(CDUnknownBlockType)arg5;
- (id)init;

@end

