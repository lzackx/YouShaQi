//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CustomImageUtils : NSObject
{
}

+ (id)getDefaultBookCover;
+ (id)getDefaultLightAvatar;
+ (id)getImageContentsOfFile:(id)arg1 imageType:(id)arg2;
+ (void)setImageUrlWithCustomPre:(id)arg1 imageUrlStr:(id)arg2 imageType:(id)arg3 imageSize:(id)arg4;
+ (id)createCoverWrapper;
+ (id)createScoreImage:(long long)arg1;
+ (id)createImageFromColor:(id)arg1 width:(double)arg2 height:(double)arg3;

@end

