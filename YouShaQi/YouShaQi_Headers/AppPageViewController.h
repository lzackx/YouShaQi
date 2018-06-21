//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ChildPageViewDelegate-Protocol.h"
#import "ShareSDKViewDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class NSString, ShareSDKUtils, UIImageView, UIPageViewController;
@protocol AppPageViewDelegate;

@interface AppPageViewController : UIViewController <ShareSDKViewDelegate, ChildPageViewDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate>
{
    UIPageViewController *pageController;
    UIImageView *pageControlImage;
    ShareSDKUtils *shareSDKUtils;
    id <AppPageViewDelegate> _appPageViewDelegate;
}

@property(nonatomic) __weak id <AppPageViewDelegate> appPageViewDelegate; // @synthesize appPageViewDelegate=_appPageViewDelegate;
- (void).cxx_destruct;
- (void)loginSucceed;
- (void)startGuestAuth;
- (void)startQQAuth;
- (void)startSinaWeiboAuth;
- (void)authBtnClicked:(long long)arg1;
- (long long)presentationIndexForPageViewController:(id)arg1;
- (long long)presentationCountForPageViewController:(id)arg1;
- (void)setPageViewControllerBackgroundColor:(long long)arg1;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)enterAppView:(id)arg1;
- (void)showGuestView;
- (void)showLoggedView;
- (void)hideLoginView;
- (id)viewControllerAtIndex:(unsigned long long)arg1;
- (id)makeRoundedImageWithColor:(id)arg1 radius:(float)arg2;
- (id)createPageControlImageWithIndex:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

