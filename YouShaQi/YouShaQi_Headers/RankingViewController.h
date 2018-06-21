//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AFHTTPRequestOperation, NSMutableArray, NSString, UITableView;

@interface RankingViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *rankingTable;
    NSMutableArray *maleRankingOfficial;
    NSMutableArray *maleRankingOther;
    NSMutableArray *femaleRankingOfficial;
    NSMutableArray *femaleRankingOther;
    _Bool maleRankingCollapsed;
    _Bool femaleRankingCollapsed;
    AFHTTPRequestOperation *requestCanCancel;
}

- (void).cxx_destruct;
- (void)progressHideWithCancelBtn;
- (void)onClickLeftItem;
- (void)startRotateAnimationWithCell:(id)arg1;
- (void)triggerCellCollapseWithCell:(id)arg1 isMaleCell:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)jsonParser:(id)arg1;
- (void)startRankingBookRequestWithRefresh:(_Bool)arg1;
- (void)goBack;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
