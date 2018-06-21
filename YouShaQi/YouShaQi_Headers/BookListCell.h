//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BookItem, BookListItem, EGOImageView, UILabel;

@interface BookListCell : UITableViewCell
{
    EGOImageView *bookImage;
    UILabel *bookName;
    UILabel *bookIntroduce;
    UILabel *bookInfo;
    UILabel *bookData;
    _Bool _isFromAddedBookList;
    _Bool _retentionCell;
    BookItem *_info;
    BookListItem *_item;
}

@property(nonatomic) _Bool retentionCell; // @synthesize retentionCell=_retentionCell;
@property(nonatomic) _Bool isFromAddedBookList; // @synthesize isFromAddedBookList=_isFromAddedBookList;
@property(retain, nonatomic) BookListItem *item; // @synthesize item=_item;
@property(retain, nonatomic) BookItem *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setInfoValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

