//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RankingItem : NSObject
{
    _Bool _collapse;
    NSString *_weekRankingId;
    NSString *_monthRankingId;
    NSString *_totalRankingId;
    NSString *_title;
    NSString *_cover;
}

@property(nonatomic) _Bool collapse; // @synthesize collapse=_collapse;
@property(retain, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *totalRankingId; // @synthesize totalRankingId=_totalRankingId;
@property(retain, nonatomic) NSString *monthRankingId; // @synthesize monthRankingId=_monthRankingId;
@property(retain, nonatomic) NSString *weekRankingId; // @synthesize weekRankingId=_weekRankingId;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

