//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "GuideViewDelegate-Protocol.h"
#import "HomeSideMenuViewDelegate-Protocol.h"
#import "MainViewDelegate-Protocol.h"
#import "MoreFunctionViewDelegate-Protocol.h"
#import "RightSideMenuViewDelegate-Protocol.h"

@class EmailLoginViewController, GuideView, HomeSideMenuView, MainViewController, MoreFunctionViewController, MyNotificationViewController, MyTopicViewController, NSString, ProfileViewController, RightSideMenuView, UIButton, UIView;

@interface AppRootViewController : BaseViewController <GuideViewDelegate, MoreFunctionViewDelegate, HomeSideMenuViewDelegate, RightSideMenuViewDelegate, MainViewDelegate>
{
    UIView *slideView;
    UIView *menuView;
    UIView *overView;
    _Bool homeMenuShowed;
    _Bool rightMenuShowed;
    ProfileViewController *profileView;
    MyNotificationViewController *notificationView;
    MyTopicViewController *myTopicView;
    MoreFunctionViewController *moreFuncView;
    long long originViewIndex;
    GuideView *guideView;
    UIButton *addBookHintView;
    EmailLoginViewController *emailLoginView;
    HomeSideMenuView *_homeSideMenu;
    RightSideMenuView *_rightSideMenu;
    MainViewController *_mainView;
}

@property(retain, nonatomic) MainViewController *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) RightSideMenuView *rightSideMenu; // @synthesize rightSideMenu=_rightSideMenu;
@property(retain, nonatomic) HomeSideMenuView *homeSideMenu; // @synthesize homeSideMenu=_homeSideMenu;
- (void).cxx_destruct;
- (void)needReloadMainView_MFVC;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)removeAddBookHintView;
- (void)guideViewDismissedWithOption:(long long)arg1;
- (void)newNotificationDetected:(id)arg1;
- (void)hideRightSideMenuFinished;
- (void)changeView:(int)arg1;
- (void)hideEmailLoginView;
- (void)showEmailLoginView;
- (void)bookshelfNeedReload;
- (void)userLogoutDetected;
- (void)userLoginDetected;
- (void)hideHomeSideMenuFinished;
- (void)setFrontView:(id)arg1 viewIndex:(long long)arg2;
- (void)changeRootView:(long long)arg1;
- (void)userLogout;
- (void)pushToBookDetailView:(id)arg1;
- (void)pushToTopicDetailView:(id)arg1;
- (void)bookShelfViewNeedReload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)showGuideView;
- (void)goToRightSideMenu;
- (void)goToHomeSideMenu;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
