//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SplashItem : NSObject
{
    NSString *_splashId;
    NSString *_link;
    NSString *_start;
    NSString *_end;
    NSString *_imgLink;
    NSString *_insideLink;
    long long _displayCount;
}

@property(nonatomic) long long displayCount; // @synthesize displayCount=_displayCount;
@property(retain, nonatomic) NSString *insideLink; // @synthesize insideLink=_insideLink;
@property(retain, nonatomic) NSString *imgLink; // @synthesize imgLink=_imgLink;
@property(retain, nonatomic) NSString *end; // @synthesize end=_end;
@property(retain, nonatomic) NSString *start; // @synthesize start=_start;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *splashId; // @synthesize splashId=_splashId;
- (void).cxx_destruct;
- (id)getImageKey;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

