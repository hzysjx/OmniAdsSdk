//
//  OmniNativeAdManager.h
//  OmniAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class OmniRequest;
@class OmniNativeAd;
@class OmniNativeAdManager;

NS_ASSUME_NONNULL_BEGIN
@protocol OmniNativeAdManagerDelegate <NSObject>

@optional
- (void)nativeAdsManagerSuccessToLoad:(OmniNativeAdManager *)nativeAdsManager;
- (void)nativeAdsManagerdidFailWithError:(NSError *)error;

@end


@interface OmniNativeAdManager : NSObject

@property (nonatomic, weak) id<OmniNativeAdManagerDelegate> delegate;

@property (nonatomic, assign, readwrite) CGSize adSize;

- (instancetype)initWithRequest:(OmniRequest *)request;

- (void)loadAdDataWithCount:(NSInteger)count;

- (NSArray<OmniNativeAd *> * _Nullable)getAllNativeAds;

@end

NS_ASSUME_NONNULL_END
