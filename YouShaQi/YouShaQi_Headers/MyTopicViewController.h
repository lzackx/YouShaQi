//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "TopicListTableViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, TopicListTableView, UILabel, UIScrollView, UIView;

@interface MyTopicViewController : BaseViewController <UIScrollViewDelegate, TopicListTableViewDelegate>
{
    UILabel *myPostedTopicLabel;
    UILabel *myCollectTopicLabel;
    UIView *secondNavView;
    UIScrollView *showTopicScrollView;
    TopicListTableView *myPostedTopicTableView;
    TopicListTableView *myCollectTopicTableView;
    _Bool myPostedTopicRequestFinish;
    _Bool myCollectTopicRequestFinish;
    long long currentSelectedBtnTag;
    NSString *_listType;
    NSString *_token;
}

@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *listType; // @synthesize listType=_listType;
- (void).cxx_destruct;
- (void)progressHideWithCancelBtn;
- (void)onClickLeftItem;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadTopicListFinished:(_Bool)arg1 dataCount:(long long)arg2 tableViewTag:(int)arg3;
- (void)removeMyCollectTopicLabel;
- (void)removeMyPostedTopicLabel;
- (id)getCollectDefaultMessage;
- (id)getPostedDefaultMessage;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)goBack;
- (void)startRequestMyCollectTopic;
- (void)startRequestMyPostedTopic;
- (void)createTableViews;
- (unsigned long long)getConvertedTag:(unsigned long long)arg1;
- (void)secondNavClicked:(id)arg1;
- (void)createSecondNavView;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

