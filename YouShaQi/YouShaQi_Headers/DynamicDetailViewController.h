//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AvatarBtnViewDelegate-Protocol.h"
#import "PopUpInputViewDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class AFHTTPRequestOperation, DynamicCommentItem, DynamicItem, DynamicListItem, NSIndexPath, NSMutableArray, NSMutableDictionary, NSObject, NSString, PopUpInputView, UIImageView, UILabel, UITableView, UserItem;
@protocol OS_dispatch_queue;

@interface DynamicDetailViewController : BaseViewController <UIAlertViewDelegate, UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, TTTAttributedLabelDelegate, PopUpInputViewDelegate, AvatarBtnViewDelegate>
{
    long long voteTotalCount;
    long long commentTotalCount;
    NSMutableArray *bestCommentArr;
    NSMutableArray *normalCommentArr;
    UILabel *helpfulCount;
    UILabel *uselessCount;
    DynamicCommentItem *replyCommentItem;
    NSString *reportCommentId;
    UIImageView *officialIcon;
    NSObject<OS_dispatch_queue> *serialQueue;
    NSIndexPath *showingCommentIndexPath;
    AFHTTPRequestOperation *requestCanCancel;
    NSMutableDictionary *cellHeightDic;
    PopUpInputView *commentInputView;
    UITableView *dynamicDetailTable;
    DynamicItem *currentDynamicItem;
    UserItem *currentUserItem;
    DynamicListItem *_dynamicDetailItem;
    DynamicCommentItem *_commentItemNeedReply;
}

@property(retain, nonatomic) DynamicCommentItem *commentItemNeedReply; // @synthesize commentItemNeedReply=_commentItemNeedReply;
@property(retain, nonatomic) DynamicListItem *dynamicDetailItem; // @synthesize dynamicDetailItem=_dynamicDetailItem;
- (void).cxx_destruct;
- (void)avatarBtnClicked:(id)arg1;
- (void)progressHideWithCancelBtn;
- (void)onClickLeftItem;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)otherAreaClicked:(id)arg1;
- (void)textLinkClicked:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)startForwardDynamic;
- (void)reportDynamic:(id)arg1 withUrlStr:(id)arg2;
- (void)showReportDynamic:(long long)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)insertDummyComment;
- (void)confirmInputViewBtnClicked:(id)arg1;
- (void)hideInputViewFinished;
- (void)resetCellFrame:(id)arg1;
- (void)toggleCellFrame:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showReplyCommentView:(id)arg1;
- (void)moreOption:(id)arg1;
- (void)startAsyncLikeCommentRequestWithItem:(id)arg1;
- (void)likeComment:(id)arg1;
- (id)getCurrentTopicComment:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)goBack;
- (void)showCommentInputViewFormReview;
- (void)showCommentInputView:(id)arg1;
- (void)shareMessage;
- (void)showMoreView;
- (void)forwardDynamic:(id)arg1;
- (id)createShareViewLabel:(id)arg1;
- (id)createShareView:(double)arg1;
- (id)createTableHeaderView;
- (void)replyCommentItemInitializeWithItem:(id)arg1;
- (void)commentJsonParser:(id)arg1;
- (void)loadCommentById;
- (void)caculateCellHeightWithData:(id)arg1 commentType:(id)arg2;
- (void)jsonParser:(id)arg1 refresh:(_Bool)arg2 commentType:(id)arg3;
- (void)loadComment:(_Bool)arg1 commentType:(id)arg2;
- (void)loadCommentWithRefresh:(_Bool)arg1;
- (void)reloadDynamicDetailViewWithRefresh:(_Bool)arg1;
- (void)loadDetailView;
- (void)jsonParserForDynamicDetailItem:(id)arg1;
- (void)startDynamicDetailRequest;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
