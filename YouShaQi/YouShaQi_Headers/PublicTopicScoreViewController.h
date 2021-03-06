//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "PublicTopicPostViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BookItem, NSArray, NSNumber, NSString, UIImageView, UITableView;
@protocol PublicTopicScoreViewDelegate;

@interface PublicTopicScoreViewController : BaseViewController <PublicTopicPostViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *publicTopicScoreTable;
    UIImageView *cellSelectedTip;
    NSArray *scoreTitleArr;
    _Bool _fromBookDetailView;
    BookItem *_bookItem;
    NSNumber *_selectedScoreIndex;
    NSString *_topicTitle;
    NSString *_topicContent;
    id <PublicTopicScoreViewDelegate> _publicTopicScoreViewDelegate;
}

@property(nonatomic) __weak id <PublicTopicScoreViewDelegate> publicTopicScoreViewDelegate; // @synthesize publicTopicScoreViewDelegate=_publicTopicScoreViewDelegate;
@property(nonatomic) _Bool fromBookDetailView; // @synthesize fromBookDetailView=_fromBookDetailView;
@property(retain, nonatomic) NSString *topicContent; // @synthesize topicContent=_topicContent;
@property(retain, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(retain, nonatomic) NSNumber *selectedScoreIndex; // @synthesize selectedScoreIndex=_selectedScoreIndex;
@property(retain, nonatomic) BookItem *bookItem; // @synthesize bookItem=_bookItem;
- (void).cxx_destruct;
- (void)onClickFirstRightItem;
- (void)onClickLeftItem;
- (void)backFromPublicTopicPostView:(id)arg1 selectedScoreIndex:(id)arg2 topicTitle:(id)arg3 topicContent:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)goNext;
- (void)goBack;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

