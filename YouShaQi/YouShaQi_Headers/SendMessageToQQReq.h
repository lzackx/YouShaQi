//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQBaseReq.h"

@class QQApiObject;

@interface SendMessageToQQReq : QQBaseReq
{
    QQApiObject *message;
}

+ (id)reqWithContent:(id)arg1;
@property(retain, nonatomic) QQApiObject *message; // @synthesize message;

@end

