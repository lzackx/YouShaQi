//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTAdWebView;

@interface GDTBridge : NSObject
{
    GDTAdWebView *_webview;
}

@property GDTAdWebView *webview; // @synthesize webview=_webview;
- (id)initWithWebView:(id)arg1;
- (void)sendJsResponse:(id)arg1;
- (id)parseGDTUrl:(id)arg1;
- (_Bool)isGDTMessage:(id)arg1;
- (void)sendJsMessage:(id)arg1;
- (void)onReceived;

@end

