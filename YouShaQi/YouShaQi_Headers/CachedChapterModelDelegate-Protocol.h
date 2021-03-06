//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BookChapterItem, NSDictionary;

@protocol CachedChapterModelDelegate <NSObject>

@optional
- (void)modelNeedUpdatedWithChapterItem:(BookChapterItem *)arg1 chapterNum:(long long)arg2;
- (void)needSetCacheWithChapterItem:(BookChapterItem *)arg1 dicData:(NSDictionary *)arg2 cachedNum:(long long)arg3;
- (void)needPrepayNextChapter;
@end

