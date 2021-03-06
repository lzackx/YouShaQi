//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "SelectTopicTypeViewDelegate-Protocol.h"
#import "SingleBookTopicListTableViewDelegate-Protocol.h"

@class BookItem, NSString, SingleBookTopicListTableView, UIView;

@interface SingleBookTopicListViewController : BaseViewController <SingleBookTopicListTableViewDelegate, SelectTopicTypeViewDelegate>
{
    SingleBookTopicListTableView *normalTopicListTable;
    SingleBookTopicListTableView *reviewTopicListTable;
    UIView *defaultView;
    _Bool isLandscapeMode;
    _Bool normalTopicRequestFinished;
    _Bool reviewTopicRequestFinished;
    int currentTopicListSortTag;
    NSString *topicSort;
    _Bool _sortByCreated;
    _Bool _isFromResourceView;
    BookItem *_bookItem;
    NSString *_listType;
}

@property(nonatomic) _Bool isFromResourceView; // @synthesize isFromResourceView=_isFromResourceView;
@property(nonatomic) _Bool sortByCreated; // @synthesize sortByCreated=_sortByCreated;
@property(retain, nonatomic) NSString *listType; // @synthesize listType=_listType;
@property(retain, nonatomic) BookItem *bookItem; // @synthesize bookItem=_bookItem;
- (void).cxx_destruct;
- (void)SBTLT_avatarBtnClicked:(id)arg1;
- (void)progressHideWithCancelBtn;
- (void)onClickSegment:(id)arg1;
- (void)onClickSecondRightItem;
- (void)onClickFirstRightItem;
- (void)onClickLeftItem;
- (void)loadSingleBookTopicListFinished:(_Bool)arg1 dataCount:(long long)arg2 listType:(id)arg3;
- (void)reloadByFilterTypeAndIndex:(id)arg1 index:(long long)arg2 title:(id)arg3;
- (void)removeDefaultView;
- (void)addDefaultView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)reloadTopicListView:(_Bool)arg1;
- (void)goPostTopicView;
- (void)goPublicTopicScoreView;
- (void)goToSelectTopicTypeView;
- (void)goBack;
- (void)sendForumClickLog;
- (void)showReviewTopicList;
- (void)showNormalTopicList;
- (void)singleBookTopicListSegmentControlAction:(id)arg1;
- (void)reloadTopicListTable;
- (void)addTopicListTable;
- (void)showSortOption;
- (void)addNavigationBar;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

