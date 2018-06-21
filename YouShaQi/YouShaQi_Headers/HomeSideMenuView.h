//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ShareSDKViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, ShareSDKUtils, UITableView;
@protocol HomeSideMenuViewDelegate;

@interface HomeSideMenuView : UIView <UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, ShareSDKViewDelegate>
{
    NSArray *sideMenuArr;
    UITableView *sideMenuTable;
    NSArray *expLevelArr;
    long long selectedCellIndex;
    _Bool _hasNewNotification;
    _Bool _menuShowed;
    UIView *_slideView;
    id <HomeSideMenuViewDelegate> _homeSideMenuViewDelegate;
    ShareSDKUtils *_shareSDKUtils;
}

@property(retain, nonatomic) ShareSDKUtils *shareSDKUtils; // @synthesize shareSDKUtils=_shareSDKUtils;
@property(nonatomic) __weak id <HomeSideMenuViewDelegate> homeSideMenuViewDelegate; // @synthesize homeSideMenuViewDelegate=_homeSideMenuViewDelegate;
@property(retain, nonatomic) UIView *slideView; // @synthesize slideView=_slideView;
@property(nonatomic) _Bool menuShowed; // @synthesize menuShowed=_menuShowed;
@property(nonatomic) _Bool hasNewNotification; // @synthesize hasNewNotification=_hasNewNotification;
- (void).cxx_destruct;
- (void)needShowEmailLoginView;
- (void)updateBookshelfSucceed;
- (void)logoutSucceed;
- (void)getUserInfoSucceed;
- (void)loginSucceed;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)adjustAnchorPointForGestureRecognizer:(id)arg1;
- (void)panGestureMoveAround:(id)arg1;
- (void)addSwipeGesture;
- (void)changeRootView:(long long)arg1;
- (void)hideHomeSideMenuView:(long long)arg1;
- (void)hideHomeSideMenuViewTouch;
- (void)reloadUserInfo;
- (void)showHomeSideMenuView:(_Bool)arg1 viewIndex:(long long)arg2;
- (void)reloadHomeSideMenu;
- (void)userLogout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
