//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BookChapterItem, BookItem, CpChapterModel, NSArray, ResourceItem;

@interface ReadingInfoItem : NSObject
{
    _Bool _isRandomMode;
    _Bool _needReloadDirectory;
    BookItem *_bookItem;
    ResourceItem *_resourceItem;
    BookChapterItem *_chapterItem;
    NSArray *_directoryArray;
    long long _chapterNum;
    long long _pageNum;
    CpChapterModel *_cpChapterModel;
}

@property(retain, nonatomic) CpChapterModel *cpChapterModel; // @synthesize cpChapterModel=_cpChapterModel;
@property(nonatomic) _Bool needReloadDirectory; // @synthesize needReloadDirectory=_needReloadDirectory;
@property(nonatomic) _Bool isRandomMode; // @synthesize isRandomMode=_isRandomMode;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) long long chapterNum; // @synthesize chapterNum=_chapterNum;
@property(retain, nonatomic) NSArray *directoryArray; // @synthesize directoryArray=_directoryArray;
@property(retain, nonatomic) BookChapterItem *chapterItem; // @synthesize chapterItem=_chapterItem;
@property(retain, nonatomic) ResourceItem *resourceItem; // @synthesize resourceItem=_resourceItem;
@property(retain, nonatomic) BookItem *bookItem; // @synthesize bookItem=_bookItem;
- (void).cxx_destruct;

@end

