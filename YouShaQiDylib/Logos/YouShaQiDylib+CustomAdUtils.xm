
#import <UIKit/UIKit.h>

%hook CustomAdUtils

- (_Bool)showInmobiAdByUmengRatio { return false; }
- (_Bool)showBaiduAdByUmengRatio { return false; }
- (_Bool)showGDTAdByUmengRatio { return false; }
- (_Bool)allowShowMenuViewAd { return false; }
- (_Bool)allowShowReadingViewAd { return false; }
- (_Bool)allowShowBookDetailViewAd { return false; }
- (_Bool)allowShowInmobiBookShelfBottomAd { return false; }
- (_Bool)allowShowInmobiBookShelfTopAd { return false; }
- (_Bool)allowShowBaiduBookShelfBottomAd { return false; }
- (_Bool)allowShowBaiduBookShelfTopAd { return false; }
- (_Bool)allowShowGDTBookShelfBottomAd { return false; }
- (_Bool)allowShowGDTBookShelfTopAd { return false; }
- (_Bool)allowShowBookShelfBottomAd { return false; }
- (_Bool)allowShowBookShelfTopAd { return false; }
- (_Bool)allowShowBookShelvesAd { return false; }
- (_Bool)allowShowSplashAd { return false; }
- (_Bool)allowShowInmobiAd { return false; }
- (_Bool)allowShowBaiduAd { return false; }
- (_Bool)allowShowGDTAd { return false; }

%end
