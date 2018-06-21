//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BookItem : NSObject
{
    _Bool _isSerial;
    _Bool _hasCp;
    NSString *_cover;
    NSString *_title;
    NSString *_shortIntro;
    NSString *_longIntro;
    NSString *_type;
    NSString *_cat;
    NSString *_majorCat;
    NSString *_minorCat;
    NSString *_author;
    NSString *_bookId;
    NSString *_updated;
    NSString *_lastChapter;
    unsigned long long _chaptersCount;
    NSString *_followerCount;
    NSString *_latelyFollower;
    NSString *_retentionRatio;
    NSString *_serializeWordCount;
    NSString *_postCount;
    NSString *_referenceSource;
    long long _wordCount;
    NSArray *_tags;
}

@property(nonatomic) _Bool hasCp; // @synthesize hasCp=_hasCp;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) long long wordCount; // @synthesize wordCount=_wordCount;
@property(retain, nonatomic) NSString *referenceSource; // @synthesize referenceSource=_referenceSource;
@property(retain, nonatomic) NSString *postCount; // @synthesize postCount=_postCount;
@property(retain, nonatomic) NSString *serializeWordCount; // @synthesize serializeWordCount=_serializeWordCount;
@property(retain, nonatomic) NSString *retentionRatio; // @synthesize retentionRatio=_retentionRatio;
@property(retain, nonatomic) NSString *latelyFollower; // @synthesize latelyFollower=_latelyFollower;
@property(retain, nonatomic) NSString *followerCount; // @synthesize followerCount=_followerCount;
@property(nonatomic) unsigned long long chaptersCount; // @synthesize chaptersCount=_chaptersCount;
@property(retain, nonatomic) NSString *lastChapter; // @synthesize lastChapter=_lastChapter;
@property(retain, nonatomic) NSString *updated; // @synthesize updated=_updated;
@property(nonatomic) _Bool isSerial; // @synthesize isSerial=_isSerial;
@property(retain, nonatomic) NSString *bookId; // @synthesize bookId=_bookId;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *minorCat; // @synthesize minorCat=_minorCat;
@property(retain, nonatomic) NSString *majorCat; // @synthesize majorCat=_majorCat;
@property(retain, nonatomic) NSString *cat; // @synthesize cat=_cat;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *longIntro; // @synthesize longIntro=_longIntro;
@property(retain, nonatomic) NSString *shortIntro; // @synthesize shortIntro=_shortIntro;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *cover; // @synthesize cover=_cover;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end
