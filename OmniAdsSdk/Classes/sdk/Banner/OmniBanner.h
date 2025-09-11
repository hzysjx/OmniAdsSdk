//
//  OmniBanner.h
//  OmniAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class OmniRequest;
@class OmniBanner;

NS_ASSUME_NONNULL_BEGIN

@protocol OmniBannerDelegate <NSObject>

@optional

- (void)onAutoRefreshed:(OmniBanner *)bannerAdView;

- (void)onAutoRefreshFail:(NSError *)error;

- (void)onBannerLoadSuccess:(OmniBanner *)bannerAdView;

- (void)onBannerLoadError:(NSError *)error;

- (void)onBannerShown;

- (void)onBannerClicked;

- (void)onWillLeaveApplication;

- (void)onWillOpenFullScreen;
- (void)onCloseFullScreen;
- (void)onDidRemoved;
@end

@interface OmniBanner : NSObject

@property (nonatomic, weak) id<OmniBannerDelegate> delegate;

@property (nonatomic, weak) UIViewController *viewController;

@property (nonatomic) BOOL animated;

@property (nonatomic, assign) CGSize adSize;
@property(nullable, nonatomic,copy) UIColor *backgroundColor;

- (instancetype)initWithRequest:(OmniRequest *)request;

- (instancetype)initWithRequest:(OmniRequest *)request
                     expectSize:(CGSize)expectSize;

- (void)loadBannerAd;
- (BOOL)isReady;
- (UIView *)getView;
@end
NS_ASSUME_NONNULL_END
