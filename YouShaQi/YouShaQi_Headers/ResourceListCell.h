//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ResourceItem, UIImageView, UILabel;

@interface ResourceListCell : UITableViewCell
{
    _Bool _isOptimizeMode;
    int _islastRead;
    UILabel *_lastRead;
    UIImageView *_sourceIcon;
    UILabel *_resourceName;
    UILabel *_chapterName;
    ResourceItem *_resourceItem;
    UILabel *_lastUpdateTime;
}

@property(nonatomic) _Bool isOptimizeMode; // @synthesize isOptimizeMode=_isOptimizeMode;
@property(retain, nonatomic) UILabel *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) ResourceItem *resourceItem; // @synthesize resourceItem=_resourceItem;
@property(retain, nonatomic) UILabel *chapterName; // @synthesize chapterName=_chapterName;
@property(retain, nonatomic) UILabel *resourceName; // @synthesize resourceName=_resourceName;
@property(retain, nonatomic) UIImageView *sourceIcon; // @synthesize sourceIcon=_sourceIcon;
@property(retain, nonatomic) UILabel *lastRead; // @synthesize lastRead=_lastRead;
@property(nonatomic) int islastRead; // @synthesize islastRead=_islastRead;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)createImageWithResourceName:(id)arg1;
- (id)getImageByResourceName:(id)arg1;
- (void)setInfoValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

