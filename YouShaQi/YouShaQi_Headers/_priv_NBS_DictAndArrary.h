//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLock.h>

@class NSMutableArray, NSMutableDictionary;

@interface _priv_NBS_DictAndArrary : NSLock
{
    NSMutableArray *array;
    NSMutableDictionary *dict;
}

@property(readonly) NSMutableDictionary *dict; // @synthesize dict;
@property(readonly) NSMutableArray *array; // @synthesize array;
- (void).cxx_destruct;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)removeFirstObject;
- (void)removeObjects:(struct _NSRange)arg1;
- (void)clear;
- (id)firstObj;
- (id)lastObj;
- (int)count;
- (id)getObjectOfKey:(id)arg1;
- (id)firstKey;
- (id)lastKey;
- (void)removeObjectOfKey:(id)arg1;
- (void)addObject:(id)arg1 ofKey:(id)arg2;
- (id)init;

@end

