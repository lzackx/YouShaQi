//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol ChildPageViewDelegate;

@interface ChildPageViewController : UIViewController
{
    long long _pageIndex;
    id <ChildPageViewDelegate> _childPageViewDelegate;
}

@property(nonatomic) __weak id <ChildPageViewDelegate> childPageViewDelegate; // @synthesize childPageViewDelegate=_childPageViewDelegate;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)clickEnterBtn;
- (void)clickAuthBtn:(id)arg1;
- (void)showLoggedView;
- (void)showLoginViewWithInitPosition:(double)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

