//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureSession, AVCaptureVideoPreviewLayer;

@interface BaiduMobAdVideoStream : NSObject
{
    AVCaptureSession *captureSession;
    AVCaptureVideoPreviewLayer *previewLayer;
}

@property(retain) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer;
@property(retain) AVCaptureSession *captureSession; // @synthesize captureSession;
- (void)dealloc;
- (void)addVideoInput;
- (void)addVideoPreviewLayer;
- (id)init;

@end

