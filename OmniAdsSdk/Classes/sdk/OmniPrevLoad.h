//
//  OmniPrevLoad.h
//  OmniAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface OmniPrevLoad : NSObject
+(instancetype) shareInstance;
-(void) startAdPrev:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
-(WindMillRewardVideoAd *) getPrevRewardAd;
-(WindMillIntersititialAd *) getPrevInterstitialAd;
-(WindMillIntersititialAd *) getPrevFullScreenAd;
-(NSString *) getInterstitialId;
-(NSString *) getFullScreenId;
@end
