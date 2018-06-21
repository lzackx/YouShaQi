//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BookItem, DynamicListItem, NSString, UserItem;

@protocol DynamicTableViewDelegate <NSObject>

@optional
- (void)DTV_textLinkClicked:(NSString *)arg1;
- (void)DTV_showBookDetail:(BookItem *)arg1;
- (void)DTV_hideProgressWithMsg:(NSString *)arg1;
- (void)DTV_showProgressWithMsg:(NSString *)arg1 cancelBtn:(_Bool)arg2;
- (void)needGoReviewDetailWithItem:(DynamicListItem *)arg1;
- (void)needGoDynamicDetailViewWithItem:(DynamicListItem *)arg1;
- (void)DTV_avatarBtnClickedWithItem:(UserItem *)arg1;
- (void)userActionBtnClickedWithUserItem:(UserItem *)arg1;
- (void)userFollowerBtnClickedWithUserItem:(UserItem *)arg1;
- (void)userFollowBtnClickedWithUserItem:(UserItem *)arg1;
- (void)loadDynamicListFinishedWithSuccess:(_Bool)arg1 dataCount:(unsigned long long)arg2 tag:(int)arg3;
@end
