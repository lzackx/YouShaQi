//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MOBFJSContext : NSObject <UIWebViewDelegate>
{
    id _jsParser;
    NSMutableDictionary *_methods;
    NSMutableDictionary *_pluginNames;
}

+ (id)defaultContext;
@property(retain, nonatomic) NSMutableDictionary *pluginNames; // @synthesize pluginNames=_pluginNames;
@property(retain, nonatomic) NSMutableDictionary *methods; // @synthesize methods=_methods;
@property(retain, nonatomic) id jsParser; // @synthesize jsParser=_jsParser;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)_convertHttpStringParamValue:(id)arg1;
- (id)_convertHttpArrayParamValue:(id)arg1;
- (void)registerParseXMLMethod;
- (void)registerDownloadFileMethod;
- (void)registerIsPluginRegistedMethod;
- (void)registerIsPadMethod;
- (void)registerIsMultitaskingSupportedMethod;
- (void)registerOpenURLMethod;
- (void)registerCanOpenURLMethod;
- (void)registerGetAppConfigMethod;
- (void)registerGetCacheDataMethod;
- (void)registerSetCacheDataMethod;
- (void)registerHTTPMethod;
- (void)registerLogMethod;
- (void)registerMethods;
- (void)callback:(id)arg1 resultData:(id)arg2;
- (void)setupNewJSParser;
- (void)setupOldJSParser;
- (void)debug:(id)arg1;
- (void)runScript:(id)arg1;
- (void)loadPlugin:(id)arg1 forName:(id)arg2;
- (void)loadPluginWithPath:(id)arg1 forName:(id)arg2;
- (id)callJSMethod:(id)arg1 arguments:(id)arg2;
- (void)registerJSMethod:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

