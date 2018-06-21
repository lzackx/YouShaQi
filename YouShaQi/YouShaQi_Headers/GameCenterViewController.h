//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "GameCenterCellDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AFHTTPRequestOperation, NSMutableArray, NSString, UIButton, UILabel, UIScrollView, UITableView, UIView;

@interface GameCenterViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate, GameCenterCellDelegate, UIScrollViewDelegate>
{
    AFHTTPRequestOperation *requestCanCancel;
    UIView *secondNavView;
    long long currentSelectedBtnTag;
    UIScrollView *showGameListScrollView;
    UIView *notifyView;
    UITableView *allGameListTableView;
    NSMutableArray *allGameListArray;
    UILabel *allGameListDefaultLabel;
    UITableView *myGameListTableView;
    NSMutableArray *myGameListArray;
    UILabel *myGameListDefaultLabel;
    UIView *editingView;
    UIButton *selectAllBtn;
    UIButton *deleteBtn;
    _Bool selectAll;
}

- (void).cxx_destruct;
- (void)needGoWebViewWithItem:(id)arg1;
- (void)progressHideWithCancelBtn;
- (void)onClickFirstRightItem;
- (void)onClickLeftItem;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateDeleteBtnTitle;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)deleteRowsForIndexpaths:(id)arg1;
- (void)deleteBtnClicked;
- (void)deselectAllRows;
- (void)selectAllRows;
- (void)selectAllBtnClicked;
- (void)hideEditingView;
- (void)showEditingView;
- (void)createEditingView;
- (void)goWebViewWithItem:(id)arg1;
- (void)loadMyGameList:(_Bool)arg1;
- (void)jsonParserForGameList:(id)arg1 refresh:(_Bool)arg2;
- (void)loadAllGameList:(_Bool)arg1;
- (void)applicationWillEnterForegroundObserver;
- (void)applicationDidEnterBackgroundObserver;
- (void)addObservers;
- (void)removeMyGameListDefaultLabel;
- (void)removeAllGameListDefaultLabel;
- (id)getMyGameListDefaultMessage;
- (id)getAllGameListDefaultMessage;
- (void)createTableViews;
- (void)createNotifyView;
- (unsigned long long)getConvertedTag:(unsigned long long)arg1;
- (void)secondNavClicked:(id)arg1;
- (void)createSecondNavView;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

