//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class EGOImageView, UILabel, UIView;

@interface ProfileHeaderCell : UITableViewCell
{
    EGOImageView *avatar;
    UILabel *userName;
    UILabel *userLevel;
    UILabel *experienceLabel;
    UIView *experienceCurrentBg;
}

- (void).cxx_destruct;
- (long long)calculateLevelExp:(long long)arg1;
- (void)loadProfileHeaderCellWithDic:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

