//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/MFMailComposeViewController.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class NSError, NSString;

@interface SSPMailViewController : MFMailComposeViewController <MFMailComposeViewControllerDelegate>
{
    int _result;
    NSError *_resultError;
    CDUnknownBlockType _resultHandler;
}

@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(retain, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)onResult:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
