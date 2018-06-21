//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor, UILabel, UIView;

@interface UIPlaceHoderTextView : UITextView
{
    NSString *placeholder;
    UIColor *placeholderColor;
    UILabel *placeHolderLabel;
    UIView *floatTip;
    UILabel *wordCount;
    long long placeHolderPadding;
}

@property(nonatomic) long long placeHolderPadding; // @synthesize placeHolderPadding;
@property(retain, nonatomic) UILabel *wordCount; // @synthesize wordCount;
@property(retain, nonatomic) UIView *floatTip; // @synthesize floatTip;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel;
- (void).cxx_destruct;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardWillChange:(id)arg1;
- (void)handleKeyboardDidShow:(id)arg1;
- (struct CGRect)caculateFrame:(id)arg1;
- (void)hideFloatTip;
- (void)showFloatTip:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setText:(id)arg1;
- (void)textChanged:(id)arg1;
- (void)setPlaceholderFrame:(struct CGRect *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end
