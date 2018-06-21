//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "EGOImageLoaderObserver-Protocol.h"

@class NSString, NSURL, UIImage;
@protocol EGOImageButtonDelegate;

@interface EGOImageButton : UIButton <EGOImageLoaderObserver>
{
    NSURL *imageURL;
    UIImage *placeholderImage;
    id <EGOImageButtonDelegate> delegate;
}

@property(nonatomic) id <EGOImageButtonDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL;
- (void)dealloc;
- (void)imageLoaderDidFailToLoad:(id)arg1;
- (void)imageLoaderDidLoad:(id)arg1;
- (void)cancelImageLoad;
- (id)initWithPlaceholderImage:(id)arg1 delegate:(id)arg2;
- (id)initWithPlaceholderImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

