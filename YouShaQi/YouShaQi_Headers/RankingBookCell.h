//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class EGOImageView, RankingItem, UIImageView, UILabel;

@interface RankingBookCell : UITableViewCell
{
    _Bool _isOtherCell;
    EGOImageView *_bookImage;
    UILabel *_bookListName;
    RankingItem *_info;
    UIImageView *_arrowDown;
}

@property(retain, nonatomic) UIImageView *arrowDown; // @synthesize arrowDown=_arrowDown;
@property(nonatomic) _Bool isOtherCell; // @synthesize isOtherCell=_isOtherCell;
@property(retain, nonatomic) RankingItem *info; // @synthesize info=_info;
@property(retain, nonatomic) UILabel *bookListName; // @synthesize bookListName=_bookListName;
@property(retain, nonatomic) EGOImageView *bookImage; // @synthesize bookImage=_bookImage;
- (void).cxx_destruct;
- (void)setinfoValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

