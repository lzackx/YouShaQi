//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMGlobalImageCache : NSObject
{
    NSMutableDictionary *_globalImageChache;
}

+ (id)sharedCache;
@property(retain, nonatomic) NSMutableDictionary *globalImageChache; // @synthesize globalImageChache=_globalImageChache;
- (void).cxx_destruct;
- (id)imageForKey:(id)arg1;
- (void)removeImageForKey:(id)arg1;
- (void)addImage:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

