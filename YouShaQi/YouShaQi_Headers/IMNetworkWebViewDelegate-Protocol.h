//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMRequest, IMResponse, NSURLRequest, UIWebView;

@protocol IMNetworkWebViewDelegate <NSObject>
- (_Bool)networkWebViewRequest:(UIWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3 withIMRequest:(IMRequest *)arg4;
- (void)networkWebViewRequest:(IMRequest *)arg1 didGetResponse:(IMResponse *)arg2;
@end

