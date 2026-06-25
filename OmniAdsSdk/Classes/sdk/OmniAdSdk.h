//
//  OmniAdSdk.h
//  OmniAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OmniAdSdk : NSObject
+(instancetype) shareInstance;
-(void)initWithAppId:(NSString *)appId;
-(void)initWithAppId:(NSString *)appId completion:(void(^)(BOOL success, NSError * _Nullable error))completion;
-(void)setDebugMode:(BOOL)enable;
-(void) startAdPrev:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
@end

NS_ASSUME_NONNULL_END
