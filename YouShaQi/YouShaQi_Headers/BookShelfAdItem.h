//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface BookShelfAdItem : NSObject <NSCoding, NSCopying>
{
    _Bool _isRead;
    _Bool _isDelete;
    NSString *_adId;
    NSString *_title;
    NSString *_desc;
    NSString *_start;
    NSString *_end;
    NSString *_img;
    NSString *_url;
    NSString *_splashImg;
    NSString *_type;
    NSString *_createTime;
    NSString *_deleteTime;
    NSString *_showTime;
    NSString *_placement;
    NSMutableArray *_showAtArray;
}

@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(retain, nonatomic) NSMutableArray *showAtArray; // @synthesize showAtArray=_showAtArray;
@property(retain, nonatomic) NSString *placement; // @synthesize placement=_placement;
@property(retain, nonatomic) NSString *showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) NSString *deleteTime; // @synthesize deleteTime=_deleteTime;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *splashImg; // @synthesize splashImg=_splashImg;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *end; // @synthesize end=_end;
@property(retain, nonatomic) NSString *start; // @synthesize start=_start;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *adId; // @synthesize adId=_adId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

