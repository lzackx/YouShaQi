//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IMRenderViewDismissDelegate-Protocol.h"

@class IMRenderView, NSString;

@interface IMRenderViewController : UIViewController <IMRenderViewDismissDelegate>
{
    _Bool _willDismiss;
    IMRenderView *_renderView;
}

@property(nonatomic) _Bool willDismiss; // @synthesize willDismiss=_willDismiss;
@property(retain, nonatomic) IMRenderView *renderView; // @synthesize renderView=_renderView;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)prefersStatusBarHidden;
- (_Bool)imRenderViewHasPresentedScreen:(id)arg1;
- (_Bool)imRenderViewShouldFireViewableEventsForPresentationAndDismiss:(id)arg1;
- (void)imRenderViewDismissCalled:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentRenderViewControllerFromParent:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (unsigned long long)creativeMask;
- (id)rootViewController;
- (_Bool)loadRequest:(id)arg1;
- (_Bool)loadHtmlString:(id)arg1;
- (id)initWithRenderView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

