//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AvatarBtnViewDelegate-Protocol.h"
#import "CustomTextViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AFHTTPRequestOperation, AvatarBtnView, BookListDetailItem, MSLabel, NSDictionary, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface BooklistDetailViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate, CustomTextViewDelegate, UIGestureRecognizerDelegate, AvatarBtnViewDelegate, UIActionSheetDelegate>
{
    BookListDetailItem *detailItem;
    UITableView *bookListDetailTable;
    UILabel *collectStr;
    UILabel *bottomSepaLabel;
    UILabel *collectCount;
    UILabel *commentCreateLabel;
    UILabel *userNameLabel;
    MSLabel *desc;
    UIView *headerView;
    AFHTTPRequestOperation *requestCanCancel;
    NSMutableDictionary *cellHeightDic;
    UIImageView *arrowDownIamge;
    AvatarBtnView *avatarImageView;
    UIButton *shareBtn;
    _Bool introduceTextOutspreaded;
    _Bool isSelf;
    BookListDetailItem *currentDetailItem;
    NSDictionary *currentDic;
    NSMutableDictionary *currentDescHeightDic;
    NSString *_bookListId;
}

@property(retain, nonatomic) NSString *bookListId; // @synthesize bookListId=_bookListId;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)avatarBtnClicked:(id)arg1;
- (void)onClickShare;
- (void)progressHideWithCancelBtn;
- (void)onClickFirstRightItem;
- (void)onClickLeftItem;
- (void)textLinkClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)getBookListData;
- (void)resetHeaderView;
- (void)resetBookDescTextViewFrame;
- (void)triggerBookDescriptionViewTapped;
- (void)createBookListDetailFooterView;
- (id)getUserItemWithBookListDetailItem;
- (void)createBookListDetailHeaderView;
- (void)collectBookList;
- (void)didReceiveMemoryWarning;
- (void)goBack;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

