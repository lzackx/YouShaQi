//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IFlySpeechPlusVcn, NSData;

@interface IFlySpeechPlusVcnRes : NSObject
{
    IFlySpeechPlusVcn *_vcn;
    NSData *_data;
    long long _status;
}

+ (id)vcnResFromDic:(id)arg1;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) IFlySpeechPlusVcn *vcn; // @synthesize vcn=_vcn;
- (id)toDic;
- (void)dealloc;
- (id)init;

@end
