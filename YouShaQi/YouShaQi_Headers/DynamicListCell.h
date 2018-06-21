//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "AvatarBtnViewDelegate-Protocol.h"

@class AvatarBtnView, DynamicItem, DynamicListItem, NSIndexPath, NSString, UIButton, UIImageView, UILabel, UserItem;
@protocol DynamicListCellDelegate;

@interface DynamicListCell : UITableViewCell <AvatarBtnViewDelegate>
{
    DynamicListItem *currentDynamicListItem;
    DynamicItem *currentDynamicItem;
    UserItem *currentUserItem;
    AvatarBtnView *userAvatarView;
    UIImageView *officialIcon;
    UILabel *userNameAndLevel;
    UILabel *dynamicCreated;
    UIButton *commentBtn;
    UIButton *forwardBtn;
    UIButton *followBtn;
    UIButton *deleteBtn;
    UIImageView *forwardImageView;
    UILabel *forwardTitle;
    _Bool _isOtherUserHomepage;
    int _tableTag;
    id <DynamicListCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    double _positionOffsetY;
}

@property(nonatomic) double positionOffsetY; // @synthesize positionOffsetY=_positionOffsetY;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <DynamicListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int tableTag; // @synthesize tableTag=_tableTag;
@property(nonatomic) _Bool isOtherUserHomepage; // @synthesize isOtherUserHomepage=_isOtherUserHomepage;
- (void).cxx_destruct;
- (void)avatarBtnClicked:(id)arg1;
- (void)updateCellActionBtnWithPositionY:(double)arg1;
- (void)updateCellSubviewFrame;
- (void)updateCellWithItem:(id)arg1;
- (void)setupBtnProperty:(id)arg1;
- (id)getFollowTitle:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

