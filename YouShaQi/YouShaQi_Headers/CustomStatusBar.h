//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UILabel;

@interface CustomStatusBar : UIWindow
{
    UILabel *_statusMsgLabel;
}

- (void).cxx_destruct;
- (void)hide:(_Bool)arg1 afterDelay:(double)arg2;
- (void)hide;
- (void)changeStatusMessage:(id)arg1;
- (void)showStatusMessage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

