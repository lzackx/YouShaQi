//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BookItem, NSNumber, NSString;

@protocol PublicTopicScoreViewDelegate <NSObject>

@optional
- (void)backFromPublicTopicScoreView:(BookItem *)arg1 selectedScoreIndex:(NSNumber *)arg2 topicTitle:(NSString *)arg3 topicContent:(NSString *)arg4;
@end
