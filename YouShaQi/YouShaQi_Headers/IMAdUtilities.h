//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMAdUtilities : NSObject
{
}

+ (id)adsErrorToString:(int)arg1;
+ (unsigned long long)availableOrientationMaskInApplcation;
+ (id)getDisplayMap;
+ (id)statusWithCode:(long long)arg1 withDescription:(id)arg2;
+ (id)statusFromErrorCode:(int)arg1 withDescription:(id)arg2;
+ (id)colorWithHexString:(id)arg1;
+ (double)colorComponentFrom:(id)arg1 start:(unsigned long long)arg2 length:(unsigned long long)arg3;
+ (long long)currentOrientation;
+ (id)rootLevelResponderForView:(id)arg1;
+ (id)topmostViewController;
+ (id)topmostViewController:(id)arg1;
+ (id)topmostView:(id)arg1;
+ (struct CGRect)availableScreenRect;
+ (struct CGRect)availableScreenRectForView:(id)arg1;
+ (struct CGSize)screenSize;

@end

