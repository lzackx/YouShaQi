//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AddedBookListTableDelegate-Protocol.h"
#import "DraftBookListTableViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AddedBookListTable, DraftBookListTableView, NSString, UIScrollView, UIView;

@interface MyBookListViewController : BaseViewController <UIScrollViewDelegate, AddedBookListTableDelegate, DraftBookListTableViewDelegate>
{
    UIScrollView *showMyBookListScrollView;
    AddedBookListTable *myPostedBookListTable;
    AddedBookListTable *myCollectBookListTable;
    DraftBookListTableView *myDraftBookListTable;
    int currentShowTableTag;
    _Bool myPostedBookListTableRequestFinish;
    _Bool myDraftBookListTableRequestFinish;
    _Bool myCollectBookListTableRequstFinish;
    UIView *secondNavView;
    int currentSelectedBtnTag;
    NSString *_listType;
}

@property(retain, nonatomic) NSString *listType; // @synthesize listType=_listType;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onClickLeftItem;
- (void)loadDraftBookListFinished:(_Bool)arg1 dataCount:(long long)arg2;
- (void)loadBookListFinished:(_Bool)arg1 dataCount:(long long)arg2 tableViewTag:(int)arg3;
- (void)removeDefaultView;
- (void)addDefaultNoDataView;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)goBack;
- (void)reloadMyBookListTable;
- (unsigned long long)getConvertedTag:(unsigned long long)arg1;
- (void)secondNavClicked:(id)arg1;
- (void)createSecondNavView;
- (void)showMyCollectBookListTable;
- (void)showMyDraftBookListTable;
- (void)showMyPostedBookListTable;
- (void)createTableViews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

