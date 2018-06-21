//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SSUIHorizontalTableViewDataSource-Protocol.h"
#import "SSUIHorizontalTableViewDelegate-Protocol.h"
#import "SSUIHorizontalTableViewItemDelegate-Protocol.h"

@class NSArray, NSString, SSUIHorizontalTableView, UILabel;

@interface SSUIiPhoneEditorToolBar : UIView <SSUIHorizontalTableViewDelegate, SSUIHorizontalTableViewDataSource, SSUIHorizontalTableViewItemDelegate>
{
    SSUIHorizontalTableView *_platTableView;
    UILabel *_textLabel;
    unsigned long long _platType;
    NSArray *_platformArray;
}

@property(retain, nonatomic) SSUIHorizontalTableView *platTableView; // @synthesize platTableView=_platTableView;
- (void).cxx_destruct;
- (void)itemOnClick:(id)arg1;
- (id)tableView:(id)arg1 itemForIndexPath:(id)arg2;
- (long long)itemNumberOfTableView:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedPlatforms;
- (void)updateWithType:(unsigned long long)arg1 platforms:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
