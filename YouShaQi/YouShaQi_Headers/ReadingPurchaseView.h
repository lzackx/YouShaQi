//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ShareSDKViewDelegate-Protocol.h"

@class AFHTTPRequestOperation, BookChapterItem, NSString, UIButton, UILabel;
@protocol ReadingPurchaseDelegate;

@interface ReadingPurchaseView : UIView <ShareSDKViewDelegate>
{
    AFHTTPRequestOperation *requestCanCancel;
    UIView *chapterTitleView;
    UILabel *chapterTitleLabel;
    UILabel *loginTipLbael;
    UIView *priceView;
    UILabel *priceLabel;
    UIView *buttonView;
    UIButton *automaticallyPurchaseTipBtn;
    UIButton *purchaseBtn;
    UIView *otherSourceView;
    BookChapterItem *currentChapterItem;
    NSString *_bookId;
    id <ReadingPurchaseDelegate> _delegate;
}

+ (void)updateAutoPayStatus:(_Bool)arg1 withBookId:(id)arg2;
+ (_Bool)shouldAutoPayWithBookId:(id)arg1;
@property(nonatomic) __weak id <ReadingPurchaseDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *bookId; // @synthesize bookId=_bookId;
- (void).cxx_destruct;
- (_Bool)canShowChangeResourceBtn;
- (void)startGetChapterKeyWithItem:(id)arg1 isPrepay:(_Bool)arg2;
- (void)updateChapterKey:(id)arg1 withChapterId:(id)arg2;
- (void)startPurchaseRequestWithChapterItem:(id)arg1 isPrepay:(_Bool)arg2;
- (void)needShowEmailLoginView;
- (void)loginSucceed;
- (void)showChargeViewWithChapterItem:(id)arg1;
- (id)getAttributedStrWithValue:(unsigned long long)arg1;
- (void)showPurchaseViewWithChapterItem:(id)arg1;
- (void)showLoginViewWithChapterItem:(id)arg1;
- (void)addOtherSourceView;
- (void)updateAutomaticallyPurchaseStatusWithTag:(int)arg1;
- (void)addButtonView;
- (void)addPriceView;
- (void)addChapterTitleView;
- (void)refreshPurchaseView;
- (void)cancelRequest;
- (void)hidePurchaseView;
- (void)baseViewInitialize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
