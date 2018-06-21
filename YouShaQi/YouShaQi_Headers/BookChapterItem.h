//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BookChapterItem : NSObject
{
    _Bool _hadPreviewed;
    _Bool _isVIPChapter;
    _Bool _chapterDecrypted;
    _Bool _isEmptyChapter;
    _Bool _isUnreadble;
    NSString *_soGouId;
    NSString *_soGouCmd;
    unsigned long long _contentIndex;
    NSString *_contentTitle;
    NSString *_contentId;
    NSString *_contentLink;
    NSString *_contentBody;
    NSString *_lastArticleTitle;
    double _price;
    NSString *_decryptKey;
}

@property(retain, nonatomic) NSString *decryptKey; // @synthesize decryptKey=_decryptKey;
@property(nonatomic) double price; // @synthesize price=_price;
@property(nonatomic) _Bool isUnreadble; // @synthesize isUnreadble=_isUnreadble;
@property(nonatomic) _Bool isEmptyChapter; // @synthesize isEmptyChapter=_isEmptyChapter;
@property(nonatomic) _Bool chapterDecrypted; // @synthesize chapterDecrypted=_chapterDecrypted;
@property(nonatomic) _Bool isVIPChapter; // @synthesize isVIPChapter=_isVIPChapter;
@property(nonatomic) _Bool hadPreviewed; // @synthesize hadPreviewed=_hadPreviewed;
@property(retain, nonatomic) NSString *lastArticleTitle; // @synthesize lastArticleTitle=_lastArticleTitle;
@property(retain, nonatomic) NSString *contentBody; // @synthesize contentBody=_contentBody;
@property(retain, nonatomic) NSString *contentLink; // @synthesize contentLink=_contentLink;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(nonatomic) unsigned long long contentIndex; // @synthesize contentIndex=_contentIndex;
@property(retain, nonatomic) NSString *soGouCmd; // @synthesize soGouCmd=_soGouCmd;
@property(retain, nonatomic) NSString *soGouId; // @synthesize soGouId=_soGouId;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
