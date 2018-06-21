//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TopicCommentItem : NSObject
{
    NSString *_commentId;
    NSString *_authorId;
    NSString *_authorName;
    NSString *_authorAvatar;
    NSString *_authorLevel;
    NSString *_authorType;
    NSString *_content;
    NSString *_created;
    long long _floor;
    long long _likeCount;
    NSString *_replyId;
    NSString *_replyAuthorName;
    long long _replyFloor;
}

@property(nonatomic) long long replyFloor; // @synthesize replyFloor=_replyFloor;
@property(retain, nonatomic) NSString *replyAuthorName; // @synthesize replyAuthorName=_replyAuthorName;
@property(retain, nonatomic) NSString *replyId; // @synthesize replyId=_replyId;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) long long floor; // @synthesize floor=_floor;
@property(retain, nonatomic) NSString *created; // @synthesize created=_created;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *authorType; // @synthesize authorType=_authorType;
@property(retain, nonatomic) NSString *authorLevel; // @synthesize authorLevel=_authorLevel;
@property(retain, nonatomic) NSString *authorAvatar; // @synthesize authorAvatar=_authorAvatar;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(retain, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

