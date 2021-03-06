//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ComicItem, EGOImageView, UILabel;

@interface ComicListCell : UITableViewCell
{
    EGOImageView *_comicImage;
    UILabel *_comicName;
    UILabel *_comicIntroduce;
    UILabel *_comicFollower;
    ComicItem *_info;
}

@property(retain, nonatomic) ComicItem *info; // @synthesize info=_info;
@property(retain, nonatomic) UILabel *comicFollower; // @synthesize comicFollower=_comicFollower;
@property(retain, nonatomic) UILabel *comicIntroduce; // @synthesize comicIntroduce=_comicIntroduce;
@property(retain, nonatomic) UILabel *comicName; // @synthesize comicName=_comicName;
@property(retain, nonatomic) EGOImageView *comicImage; // @synthesize comicImage=_comicImage;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setInfoValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

