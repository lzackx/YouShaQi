//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "MBProgressHUDDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AFHTTPRequestOperation, MBProgressHUD, NSArray, NSMutableDictionary, NSString, UITableView, UIView;
@protocol ForumListViewDelegate;

@interface ForumListViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate, MBProgressHUDDelegate>
{
    MBProgressHUD *progress;
    NSMutableDictionary *normalTopicCountDic;
    UITableView *forumListTable;
    UIView *defaultView;
    NSArray *bookBagArr;
    NSArray *publicTopicArr;
    UIView *newTopicView;
    _Bool newGameUpdated;
    long long gameCount;
    double startRefreshTime;
    AFHTTPRequestOperation *requestCanCancel;
    _Bool isDynamicOn;
    _Bool _refreshData;
    id <ForumListViewDelegate> _forumListViewDelegate;
}

@property(nonatomic) __weak id <ForumListViewDelegate> forumListViewDelegate; // @synthesize forumListViewDelegate=_forumListViewDelegate;
@property(nonatomic) _Bool refreshData; // @synthesize refreshData=_refreshData;
- (void).cxx_destruct;
- (void)hudWasHiddenByCancelBtn;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)removeDefaultView;
- (void)addDefaultView;
- (void)startBookTopicCountRequestWithBookId:(id)arg1 withIndexPath:(id)arg2;
- (void)refreshForumListTable;
- (void)reloadBookBagArr;
- (void)reloadForumListTable;
- (void)goNewTopicListView;
- (void)removeNewTopicView;
- (void)createNewTopicView:(long long)arg1;
- (void)resetPublicTopicArr;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

