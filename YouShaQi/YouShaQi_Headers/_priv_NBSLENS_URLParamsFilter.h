//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface _priv_NBSLENS_URLParamsFilter : NSObject
{
    NSDictionary *_paramItems;
}

+ (id)separateString:(id)arg1;
+ (id)captureWithParamRules:(id)arg1;
@property(retain, nonatomic) NSDictionary *paramItems; // @synthesize paramItems=_paramItems;
- (void).cxx_destruct;
- (id)getURIFromURLString:(id)arg1;
- (id)findParamsItemWithURLString:(id)arg1;
- (id)getParamsFromURLString:(id)arg1 andHeaders:(id)arg2 andBody:(id)arg3 HTTPMethod:(id)arg4;

@end

