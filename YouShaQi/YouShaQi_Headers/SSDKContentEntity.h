//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SSDKContentEntity : NSObject
{
    NSString *_cid;
    NSString *_text;
    NSArray *_images;
    NSArray *_urls;
    id _rawData;
}

+ (id)contentEntityWithJsonObject:(id)arg1;
@property(retain, nonatomic) id rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;

@end

