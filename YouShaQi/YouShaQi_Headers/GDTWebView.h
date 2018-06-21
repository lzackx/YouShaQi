//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

@protocol GDTWebViewProgressDelegate;

@interface GDTWebView : UIWebView
{
    int resourceCount;
    int resourceCompletedCount;
    id <GDTWebViewProgressDelegate> progressDelegate;
}

@property(nonatomic) int resourceCompletedCount; // @synthesize resourceCompletedCount;
@property(nonatomic) int resourceCount; // @synthesize resourceCount;
@property(nonatomic) id <GDTWebViewProgressDelegate> progressDelegate; // @synthesize progressDelegate;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

