//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIProgressView, UIView;

@interface FontSettingCell : UITableViewCell
{
    UIView *fontView;
    UIImageView *fontImageView;
    UILabel *fontStateLabel;
    UIProgressView *progressView;
}

- (void).cxx_destruct;
- (_Bool)isFontDownLoaded:(id)arg1;
- (void)loadFontSettingCellData:(id)arg1 progress:(double)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

