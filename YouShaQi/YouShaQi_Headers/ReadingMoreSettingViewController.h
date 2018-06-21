//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView;
@protocol ReadingMoreSettingDelegate;

@interface ReadingMoreSettingViewController : BaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *readingSettingTable;
    NSString *_bookId;
    id <ReadingMoreSettingDelegate> _delegate;
}

+ (void)updatePageTransitionStyle:(int)arg1;
+ (_Bool)usingNoneStyle;
+ (_Bool)usingCurlStyle;
+ (_Bool)usingScrollStyle;
@property(nonatomic) __weak id <ReadingMoreSettingDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *bookId; // @synthesize bookId=_bookId;
- (void).cxx_destruct;
- (void)onClickLeftItem;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)showTraditionalModeActionSheet;
- (void)showPageStyleActionSheet;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)autoPaySwitchAction:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
