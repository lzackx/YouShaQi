//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "mobideaRecProtocol-Protocol.h"

@protocol BaiFenDianUtilsDelegate;

@interface BaiFenDianUtils : NSObject <mobideaRecProtocol>
{
    id <BaiFenDianUtilsDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <BaiFenDianUtilsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startBookDetailDataRequestWithBookId:(id)arg1;
- (void)mobidea_Recs:(id)arg1 feedback:(id)arg2;
- (void)getRecommendBook;
- (void)rmCartWithBookItem:(id)arg1;
- (void)addCartWithBookItem:(id)arg1;
- (void)visitItemWithBookItem:(id)arg1;
- (void)addItemWithBookItem:(id)arg1;
- (void)addUser;
- (void)updateDelegate:(id)arg1;
- (id)init;

@end

