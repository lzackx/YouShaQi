#line 1 "/Users/lzackx/Downloads/Reverse/Operation/YouShaQi/YouShaQiDylib/Logos/YouShaQiDylib+YouShaQiAppDelegate.xm"








#import <UIKit/UIKit.h>


#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class YouShaQiAppDelegate; 
static void (*_logos_orig$_ungrouped$YouShaQiAppDelegate$parameterInitial)(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YouShaQiAppDelegate$parameterInitial(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YouShaQiAppDelegate$getVersionLimitConfig)(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YouShaQiAppDelegate$getVersionLimitConfig(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YouShaQiAppDelegate$getSeverErrorConfig)(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YouShaQiAppDelegate$getSeverErrorConfig(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YouShaQiAppDelegate$setupUmengTrack)(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YouShaQiAppDelegate$setupUmengTrack(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YouShaQiAppDelegate$getUMengOnlineConfig)(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YouShaQiAppDelegate$getUMengOnlineConfig(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YouShaQiAppDelegate$uMengOnlineConfigCallBack$)(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YouShaQiAppDelegate$uMengOnlineConfigCallBack$(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YouShaQiAppDelegate$updateUmengSpecialParams$)(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YouShaQiAppDelegate$updateUmengSpecialParams$(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST, SEL, id); 

#line 11 "/Users/lzackx/Downloads/Reverse/Operation/YouShaQi/YouShaQiDylib/Logos/YouShaQiDylib+YouShaQiAppDelegate.xm"



static void _logos_method$_ungrouped$YouShaQiAppDelegate$parameterInitial(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { }
static void _logos_method$_ungrouped$YouShaQiAppDelegate$getVersionLimitConfig(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { }
static void _logos_method$_ungrouped$YouShaQiAppDelegate$getSeverErrorConfig(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { }
static void _logos_method$_ungrouped$YouShaQiAppDelegate$setupUmengTrack(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { }
static void _logos_method$_ungrouped$YouShaQiAppDelegate$getUMengOnlineConfig(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { }
static void _logos_method$_ungrouped$YouShaQiAppDelegate$uMengOnlineConfigCallBack$(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) { }
static void _logos_method$_ungrouped$YouShaQiAppDelegate$updateUmengSpecialParams$(_LOGOS_SELF_TYPE_NORMAL YouShaQiAppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) { }



static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$YouShaQiAppDelegate = objc_getClass("YouShaQiAppDelegate"); MSHookMessageEx(_logos_class$_ungrouped$YouShaQiAppDelegate, @selector(parameterInitial), (IMP)&_logos_method$_ungrouped$YouShaQiAppDelegate$parameterInitial, (IMP*)&_logos_orig$_ungrouped$YouShaQiAppDelegate$parameterInitial);MSHookMessageEx(_logos_class$_ungrouped$YouShaQiAppDelegate, @selector(getVersionLimitConfig), (IMP)&_logos_method$_ungrouped$YouShaQiAppDelegate$getVersionLimitConfig, (IMP*)&_logos_orig$_ungrouped$YouShaQiAppDelegate$getVersionLimitConfig);MSHookMessageEx(_logos_class$_ungrouped$YouShaQiAppDelegate, @selector(getSeverErrorConfig), (IMP)&_logos_method$_ungrouped$YouShaQiAppDelegate$getSeverErrorConfig, (IMP*)&_logos_orig$_ungrouped$YouShaQiAppDelegate$getSeverErrorConfig);MSHookMessageEx(_logos_class$_ungrouped$YouShaQiAppDelegate, @selector(setupUmengTrack), (IMP)&_logos_method$_ungrouped$YouShaQiAppDelegate$setupUmengTrack, (IMP*)&_logos_orig$_ungrouped$YouShaQiAppDelegate$setupUmengTrack);MSHookMessageEx(_logos_class$_ungrouped$YouShaQiAppDelegate, @selector(getUMengOnlineConfig), (IMP)&_logos_method$_ungrouped$YouShaQiAppDelegate$getUMengOnlineConfig, (IMP*)&_logos_orig$_ungrouped$YouShaQiAppDelegate$getUMengOnlineConfig);MSHookMessageEx(_logos_class$_ungrouped$YouShaQiAppDelegate, @selector(uMengOnlineConfigCallBack:), (IMP)&_logos_method$_ungrouped$YouShaQiAppDelegate$uMengOnlineConfigCallBack$, (IMP*)&_logos_orig$_ungrouped$YouShaQiAppDelegate$uMengOnlineConfigCallBack$);MSHookMessageEx(_logos_class$_ungrouped$YouShaQiAppDelegate, @selector(updateUmengSpecialParams:), (IMP)&_logos_method$_ungrouped$YouShaQiAppDelegate$updateUmengSpecialParams$, (IMP*)&_logos_orig$_ungrouped$YouShaQiAppDelegate$updateUmengSpecialParams$);} }
#line 24 "/Users/lzackx/Downloads/Reverse/Operation/YouShaQi/YouShaQiDylib/Logos/YouShaQiDylib+YouShaQiAppDelegate.xm"
