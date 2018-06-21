//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EGOImageView, UIButton, UserItem;
@protocol AvatarBtnViewDelegate;

@interface AvatarBtnView : UIView
{
    UIButton *avatarBtn;
    UserItem *currentUserItem;
    id <AvatarBtnViewDelegate> _delegate;
    EGOImageView *_avatarImageView;
}

@property(retain, nonatomic) EGOImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak id <AvatarBtnViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickAvatarBtn;
- (void)setAvatarBtnViewWithUserItem:(id)arg1;
- (void)setImageUrlStr:(id)arg1;
- (void)updateFrame:(struct CGRect)arg1;
- (void)setCornerRadius:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

