//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "ReadingChangeModeViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class BookItem, NSArray, NSNumber, NSString, NSTimer, ReadingChangeModeView, ResourceItem, UIActivityIndicatorView, UIBarButtonItem, UIImageView, UILabel, UIToolbar, UIView, UIWebView;
@protocol ResourceWebViewDelegate;

@interface ResourceWebViewController : BaseViewController <UIWebViewDelegate, UITextFieldDelegate, UIAlertViewDelegate, UIGestureRecognizerDelegate, ReadingChangeModeViewDelegate>
{
    NSString *urlStr;
    NSTimer *_timer;
    UIWebView *webView;
    UIActivityIndicatorView *activityIndicator;
    UIBarButtonItem *backBarButtonItem;
    UIBarButtonItem *forwardBarButtonItem;
    UIBarButtonItem *refreshBarButtonItem;
    UIToolbar *toolBar;
    _Bool backTransitionWithNoAnimate;
    UILabel *resourceUrl;
    _Bool isLandscapeMode;
    ReadingChangeModeView *readingChangeModeView;
    NSNumber *readingModeTag;
    UIImageView *arrowDownImage;
    BookItem *_bookItem;
    ResourceItem *_resourceItem;
    long long _chapterNum;
    NSArray *_directoryArray;
    UIView *_changeModeWarpper;
    id <ResourceWebViewDelegate> _delegate;
}

@property(nonatomic) __weak id <ResourceWebViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *changeModeWarpper; // @synthesize changeModeWarpper=_changeModeWarpper;
@property(retain, nonatomic) NSArray *directoryArray; // @synthesize directoryArray=_directoryArray;
@property(nonatomic) long long chapterNum; // @synthesize chapterNum=_chapterNum;
@property(retain, nonatomic) ResourceItem *resourceItem; // @synthesize resourceItem=_resourceItem;
@property(retain, nonatomic) BookItem *bookItem; // @synthesize bookItem=_bookItem;
- (void).cxx_destruct;
- (void)onClickFirstRightItem;
- (void)refreshResourceWebView;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)didSelectReadingModeWithResourceName:(id)arg1;
- (void)willHideReadingModeView;
- (void)willShowReadingModeView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (id)getTopParentViewController:(id)arg1;
- (void)goBackWithResourceName:(id)arg1;
- (void)reloadClicked;
- (void)goForwardClicked;
- (void)goBackClicked;
- (void)loadWebPageWithString:(id)arg1;
- (void)updateToolbarItems;
- (void)hideHintView;
- (void)toolBarInitialize;
- (_Bool)urlStrInitialize;
- (void)webViewInitialize;
- (void)addResourceUrlView;
- (void)showReadingChangeModeView;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

