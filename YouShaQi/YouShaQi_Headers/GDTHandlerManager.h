//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GDTHandlerManager : NSObject
{
    NSMutableDictionary *_handlers;
}

@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
- (void).cxx_destruct;
- (void)execute:(id)arg1 request:(id)arg2;
- (id)init;

@end

