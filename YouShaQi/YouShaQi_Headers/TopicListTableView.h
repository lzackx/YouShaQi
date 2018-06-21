//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "MBProgressHUDDelegate-Protocol.h"
#import "TopicListCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AFHTTPRequestOperation, MBProgressHUD, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol TopicListTableViewDelegate;

@interface TopicListTableView : UITableView <UITableViewDataSource, UITableViewDelegate, MBProgressHUDDelegate, TopicListCellDelegate>
{
    MBProgressHUD *progress;
    double didSelectedTime;
    double startRefreshTime;
    NSMutableDictionary *cellHeightDic;
    _Bool _singleView;
    _Bool _needBottomPadding;
    int _topicListTableViewTag;
    NSMutableArray *_topicListArr;
    NSArray *_bookIds;
    NSString *_lastTime;
    NSString *_token;
    NSString *_listType;
    NSString *_topicType;
    NSString *_topicSort;
    NSString *_durationType;
    NSString *_cateType;
    AFHTTPRequestOperation *_requestCanCancel;
    long long _limitCount;
    id <TopicListTableViewDelegate> _topicListTableViewDelegate;
}

@property(nonatomic) __weak id <TopicListTableViewDelegate> topicListTableViewDelegate; // @synthesize topicListTableViewDelegate=_topicListTableViewDelegate;
@property(nonatomic) int topicListTableViewTag; // @synthesize topicListTableViewTag=_topicListTableViewTag;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(retain, nonatomic) AFHTTPRequestOperation *requestCanCancel; // @synthesize requestCanCancel=_requestCanCancel;
@property(retain, nonatomic) NSString *cateType; // @synthesize cateType=_cateType;
@property(retain, nonatomic) NSString *durationType; // @synthesize durationType=_durationType;
@property(retain, nonatomic) NSString *topicSort; // @synthesize topicSort=_topicSort;
@property(retain, nonatomic) NSString *topicType; // @synthesize topicType=_topicType;
@property(nonatomic) _Bool needBottomPadding; // @synthesize needBottomPadding=_needBottomPadding;
@property(retain, nonatomic) NSString *listType; // @synthesize listType=_listType;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSArray *bookIds; // @synthesize bookIds=_bookIds;
@property(nonatomic) _Bool singleView; // @synthesize singleView=_singleView;
@property(retain, nonatomic) NSMutableArray *topicListArr; // @synthesize topicListArr=_topicListArr;
- (void).cxx_destruct;
- (void)TLC_coverClicked:(id)arg1;
- (void)hudWasHiddenByCancelBtn;
- (void)deleteRowForIndex:(long long)arg1;
- (void)startDeleteCollectTopicRequest:(long long)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addCellHeightDataToDicWithLabel:(id)arg1 content:(id)arg2 row:(long long)arg3;
- (long long)parseToMyTopicListItem:(id)arg1;
- (long long)parseToPublicTopicListItem:(id)arg1;
- (long long)parseToNormalTopicListItem:(id)arg1;
- (void)jsonParserForTopicList:(id)arg1 refresh:(_Bool)arg2;
- (id)appendFilterWithUrlStr:(id)arg1 needStartSymbol:(_Bool)arg2;
- (void)loadTopicList:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
