//
//  OmniNativeAdView.h
//  OmniAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class OmniNativeAdView;
@class OmniNativeAd;
@protocol OmniNativeAdViewDelegate <NSObject>
@optional
- (void)nativeExpressAdViewRenderSuccess:(OmniNativeAdView *)nativeExpressAdView;
- (void)nativeExpressAdViewRenderFail:(NSError *)error;
- (void)nativeAdViewWillExpose;
- (void)nativeAdViewDidClick;
- (void)dislikeWithReason:(NSString *) reason;

@end
@interface OmniNativeAdView : NSObject
+ (instancetype) initAdView;

@property(nonatomic) CGRect frame;
@property (nonatomic, weak) id<OmniNativeAdViewDelegate> delegate;
@property (nonatomic, weak) UIViewController *viewController;
- (void)refreshData:(OmniNativeAd *)nativeAd;
- (UIView *)getView;
@end
