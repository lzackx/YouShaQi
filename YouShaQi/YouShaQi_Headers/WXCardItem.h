//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WXCardItem : NSObject
{
    unsigned int cardState;
    NSString *cardId;
    NSString *extMsg;
}

@property(nonatomic) unsigned int cardState; // @synthesize cardState;
@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
- (void)dealloc;

@end

