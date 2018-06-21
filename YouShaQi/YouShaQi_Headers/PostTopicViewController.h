//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "PostConfirmViewDelegate-Protocol.h"
#import "TopicVoteViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class BookItem, NSMutableDictionary, NSString, PostConfirmView, UIPlaceHoderTextView, UITextField;

@interface PostTopicViewController : BaseViewController <UITextFieldDelegate, UITextViewDelegate, TopicVoteViewDelegate, PostConfirmViewDelegate>
{
    NSMutableDictionary *savedVoteData;
    PostConfirmView *postConfirmView;
    _Bool _voteType;
    _Bool _helpType;
    _Bool _isFromSideMenuView;
    UITextField *_titleField;
    UIPlaceHoderTextView *_contentField;
    BookItem *_bookItem;
    NSString *_viewType;
}

@property(retain, nonatomic) NSString *viewType; // @synthesize viewType=_viewType;
@property(nonatomic) _Bool isFromSideMenuView; // @synthesize isFromSideMenuView=_isFromSideMenuView;
@property(nonatomic) _Bool helpType; // @synthesize helpType=_helpType;
@property(nonatomic) _Bool voteType; // @synthesize voteType=_voteType;
@property(retain, nonatomic) BookItem *bookItem; // @synthesize bookItem=_bookItem;
@property(retain, nonatomic) UIPlaceHoderTextView *contentField; // @synthesize contentField=_contentField;
@property(retain, nonatomic) UITextField *titleField; // @synthesize titleField=_titleField;
- (void).cxx_destruct;
- (void)onClickFirstRightItem;
- (void)onClickLeftItem;
- (void)postTopicViewKeyboardWillChange:(id)arg1;
- (void)topicVoteViewDismiss:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)confirmPost;
- (void)goNext;
- (_Bool)alertNotice;
- (void)removePostViewObserver;
- (void)addPostViewObserver;
- (void)goBack;
- (struct CGRect)getContentFieldFrame;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

