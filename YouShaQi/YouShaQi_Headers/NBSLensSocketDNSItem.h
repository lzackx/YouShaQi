//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NBSLensSocketDNSItem : NSObject
{
    int refCount;
    long long _tm_duration;
    int _error;
    NSString *_hostName;
    NSArray *_IPs;
    NSString *_usedIP;
}

@property(retain) NSString *usedIP; // @synthesize usedIP=_usedIP;
@property int error; // @synthesize error=_error;
@property(retain) NSArray *IPs; // @synthesize IPs=_IPs;
@property(retain) NSString *hostName; // @synthesize hostName=_hostName;
- (void).cxx_destruct;
@property(getter=get_dns, setter=set_dns:) long long tm_duration;
- (long long)pearDNSTime;
- (id)init;

@end
