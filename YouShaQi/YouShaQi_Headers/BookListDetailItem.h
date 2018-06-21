//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface BookListDetailItem : NSObject
{
    NSString *_bookListId;
    NSString *_title;
    NSString *_desc;
    NSString *_authorId;
    NSString *_authorAvatar;
    long long _authorLv;
    NSString *_authorName;
    NSString *_authorType;
    NSMutableArray *_bookListSearchItems;
    NSString *_created;
    long long _collectorCount;
    NSString *_shareLink;
}

@property(retain, nonatomic) NSString *shareLink; // @synthesize shareLink=_shareLink;
@property(nonatomic) long long collectorCount; // @synthesize collectorCount=_collectorCount;
@property(retain, nonatomic) NSString *created; // @synthesize created=_created;
@property(retain, nonatomic) NSMutableArray *bookListSearchItems; // @synthesize bookListSearchItems=_bookListSearchItems;
@property(retain, nonatomic) NSString *authorType; // @synthesize authorType=_authorType;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(nonatomic) long long authorLv; // @synthesize authorLv=_authorLv;
@property(retain, nonatomic) NSString *authorAvatar; // @synthesize authorAvatar=_authorAvatar;
@property(retain, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *bookListId; // @synthesize bookListId=_bookListId;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

