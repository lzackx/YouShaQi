//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CustomStringUtils : NSObject
{
}

+ (id)md5String:(id)arg1;
+ (id)setLineHeightForTextView:(id)arg1 lineHeight:(double)arg2 font:(double)arg3;
+ (id)getCustomFontChineseName;
+ (id)getCustomFontName;
+ (id)stripSpace:(id)arg1;
+ (id)getClipedTextWithOriginText:(id)arg1 width:(double)arg2 font:(id)arg3 maxLineNum:(unsigned long long)arg4;
+ (id)splitTextWithOriginText:(id)arg1 width:(double)arg2 font:(id)arg3 maxLineNum:(unsigned long long)arg4;
+ (int)countWord:(id)arg1;
+ (id)stripHTML:(id)arg1;
+ (id)platformString;
+ (id)platform;
+ (_Bool)isBlankString:(id)arg1;
+ (id)changetoChinese:(id)arg1;

@end

