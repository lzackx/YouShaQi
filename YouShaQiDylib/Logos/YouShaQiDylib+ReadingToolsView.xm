//
//  YouShaQiDylib+YouShaQiAppDelegate.xm
//  YouShaQiDylib
//
//  Created by lzackx on 2018/6/15.
//  Copyright © 2018年 lzackx. All rights reserved.
//

#import <UIKit/UIKit.h>

%hook ReadingToolsView

- (void)openOriginResourceView { }
- (void)addResourceUrlView { }

%end
