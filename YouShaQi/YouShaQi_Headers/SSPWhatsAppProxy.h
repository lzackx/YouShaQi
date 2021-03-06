//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMOBFPlugin-Protocol.h"
#import "UIDocumentInteractionControllerDelegate-Protocol.h"

@class NSMutableSet, NSString;

@interface SSPWhatsAppProxy : NSObject <UIDocumentInteractionControllerDelegate, IMOBFPlugin>
{
    NSMutableSet *_observerSet;
}

@property(retain, nonatomic) NSMutableSet *observerSet; // @synthesize observerSet=_observerSet;
- (void).cxx_destruct;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)registerShareMethod;
- (void)unload;
- (void)load:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

