//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _priv_NBSSafeMutableDictionary;

@interface NBSLensSocketSSLItems : NSObject
{
    _priv_NBSSafeMutableDictionary *items;
}

+ (id)sharedObject;
- (void).cxx_destruct;
- (id)findItem:(long long)arg1;
- (void)unregisterItem:(long long)arg1;
- (void)registerItem:(id)arg1;
- (id)init;

@end
