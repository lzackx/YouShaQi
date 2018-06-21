//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMKeyValueStore, NSMutableArray;

@interface IMConfigDao : NSObject
{
    IMKeyValueStore *_configStore;
    NSMutableArray *_configsSaved;
}

@property(retain, nonatomic) NSMutableArray *configsSaved; // @synthesize configsSaved=_configsSaved;
@property(retain, nonatomic) IMKeyValueStore *configStore; // @synthesize configStore=_configStore;
- (void).cxx_destruct;
- (void)clearAll;
- (void)setLastUpdatedTimeStamp:(double)arg1 forConfig:(id)arg2;
- (double)lastUpdatedTimeStamp:(id)arg1;
- (_Bool)isConfigInCache:(id)arg1;
- (void)getConfig:(id)arg1;
- (void)putConfig:(id)arg1;
- (id)init;

@end

