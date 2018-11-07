#line 1 "/Users/lzackx/Downloads/Reverse/Operation/YouShaQi/YouShaQiDylib/Logos/YouShaQiDylib+ReadingToolsView.xm"








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

@class ReadingToolsView; 
static void (*_logos_orig$_ungrouped$ReadingToolsView$openOriginResourceView)(_LOGOS_SELF_TYPE_NORMAL ReadingToolsView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$ReadingToolsView$openOriginResourceView(_LOGOS_SELF_TYPE_NORMAL ReadingToolsView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$ReadingToolsView$addResourceUrlView)(_LOGOS_SELF_TYPE_NORMAL ReadingToolsView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$ReadingToolsView$addResourceUrlView(_LOGOS_SELF_TYPE_NORMAL ReadingToolsView* _LOGOS_SELF_CONST, SEL); 

#line 11 "/Users/lzackx/Downloads/Reverse/Operation/YouShaQi/YouShaQiDylib/Logos/YouShaQiDylib+ReadingToolsView.xm"


static void _logos_method$_ungrouped$ReadingToolsView$openOriginResourceView(_LOGOS_SELF_TYPE_NORMAL ReadingToolsView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { }
static void _logos_method$_ungrouped$ReadingToolsView$addResourceUrlView(_LOGOS_SELF_TYPE_NORMAL ReadingToolsView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { }


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$ReadingToolsView = objc_getClass("ReadingToolsView"); MSHookMessageEx(_logos_class$_ungrouped$ReadingToolsView, @selector(openOriginResourceView), (IMP)&_logos_method$_ungrouped$ReadingToolsView$openOriginResourceView, (IMP*)&_logos_orig$_ungrouped$ReadingToolsView$openOriginResourceView);MSHookMessageEx(_logos_class$_ungrouped$ReadingToolsView, @selector(addResourceUrlView), (IMP)&_logos_method$_ungrouped$ReadingToolsView$addResourceUrlView, (IMP*)&_logos_orig$_ungrouped$ReadingToolsView$addResourceUrlView);} }
#line 17 "/Users/lzackx/Downloads/Reverse/Operation/YouShaQi/YouShaQiDylib/Logos/YouShaQiDylib+ReadingToolsView.xm"
