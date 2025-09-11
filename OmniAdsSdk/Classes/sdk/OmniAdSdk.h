//
//  OmniAdSdk.h
//  OmniAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>

@interface OmniAdSdk : NSObject
+(instancetype) shareInstance;
-(void)initWithAppId:(NSString *)appId;
-(void)setDebugMode:(BOOL)enable;
-(void) startAdPrev:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
@end
