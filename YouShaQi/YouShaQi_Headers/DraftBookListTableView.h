//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MBProgressHUD, NSMutableArray, NSString;
@protocol DraftBookListTableViewDelegate;

@interface DraftBookListTableView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    MBProgressHUD *progress;
    NSMutableArray *listArray;
    NSString *_urlStr;
    id <DraftBookListTableViewDelegate> _draftBookListTableViewDelegate;
}

@property(nonatomic) __weak id <DraftBookListTableViewDelegate> draftBookListTableViewDelegate; // @synthesize draftBookListTableViewDelegate=_draftBookListTableViewDelegate;
@property(retain, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)jsonParser:(id)arg1;
- (void)startDraftBookListRequestWithRefresh:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

