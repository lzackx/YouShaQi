//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FuzzyMatchUtils : NSObject
{
}

+ (double)getApporximateScoreWithBaseStr:(id)arg1 matchStr:(id)arg2;
+ (long long)changeChineseNumToArabicNum:(id)arg1;
+ (id)replaceChineseNum:(id)arg1;
+ (id)replacePunctuation:(id)arg1;
+ (id)normalize:(id)arg1;
+ (id)splitTitle:(id)arg1;
+ (_Bool)detectIsFuzzyChapterWithOriginalTitle:(id)arg1 matchTitle:(id)arg2 originalChapterNum:(long long)arg3;
+ (long long)getApporximateChapterNumWithChapterTitle:(id)arg1 directoryArray:(id)arg2 originalChapterNum:(long long)arg3;

@end

