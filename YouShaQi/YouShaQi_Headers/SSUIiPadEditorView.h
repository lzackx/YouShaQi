//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SSDKImage, SSUIiPhoneEditorView, UIButton, UILabel;

@interface SSUIiPadEditorView : UIView
{
    UIButton *_cancelButton;
    UIButton *_sendButton;
    UILabel *_titleView;
    SSUIiPhoneEditorView *_contentView;
    NSArray *_platformTypes;
    SSDKImage *_image;
    _Bool _needRelayout;
    CDUnknownBlockType _submitHandler;
    CDUnknownBlockType _cancelHandler;
}

@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType submitHandler; // @synthesize submitHandler=_submitHandler;
- (void).cxx_destruct;
- (void)sendButtonClickHandler:(id)arg1;
- (void)cancelButtonClickHandler:(id)arg1;
- (void)updateLayoutWithSplitViewSize:(struct CGSize)arg1;
- (void)updateWithType:(id)arg1 content:(id)arg2 image:(id)arg3 interfaceOrientation:(long long)arg4 viewController:(id)arg5;
- (void)setUIStyle;
- (id)initWithFrame:(struct CGRect)arg1;

@end
