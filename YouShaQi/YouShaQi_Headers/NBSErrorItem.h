//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NBSErrorItem : NSObject
{
    int _statusCode;
    int _errCount;
    int _httpMethodNumber;
    NSString *_URI;
    NSString *_urlParams;
    NSString *_params;
}

@property(nonatomic) int httpMethodNumber; // @synthesize httpMethodNumber=_httpMethodNumber;
@property(nonatomic) int errCount; // @synthesize errCount=_errCount;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSString *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *urlParams; // @synthesize urlParams=_urlParams;
@property(retain, nonatomic) NSString *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (id)init;

@end

