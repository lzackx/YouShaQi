//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SplashImageUtils : NSObject
{
}

+ (id)thirdPartySplashImageDirectoryPath;
+ (void)deleteOutOfDatedThirdPartySplashes;
+ (id)loadThirdPartySplashImageWithName:(id)arg1;
+ (void)saveThirdPartySplashImage:(id)arg1 withName:(id)arg2;
+ (id)getSplashData;
+ (_Bool)allowToShowImage;
+ (id)getSplashImageDirectoryPath;
+ (void)deleteSplashImageWithSplashItem:(id)arg1;
+ (void)saveSplashImageAndUpdateLog:(id)arg1;
+ (void)saveSelfSplashImage:(id)arg1;
+ (void)deleteOutOfDatedSplashesWithNewSplashIds:(id)arg1;
+ (void)startPreDownloadImageRequest;

@end

