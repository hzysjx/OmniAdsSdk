//
//  OmniNativeAd.h
//  OmniAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface OmniNativeAd : NSObject
- (instancetype)initWithAd:(WindMillNativeAd *) ad;
- (WindMillNativeAd *)getAd;
@end
