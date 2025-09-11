//
//  OmniInterstitial.h
//  OmniAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class OmniRequest;
@protocol OmniInterstitialAdDelegate <NSObject>
@optional
-(void) onInterstitialLoadSuccess:(NSString *) pid;
-(void) onInterstitialLoadError:(NSString *) pid error:(NSError *)error;
-(void) onInterstitialPlayStart;
-(void) onInterstitialPlayEnd;
-(void) onInterstitialClicked;
-(void) onInterstitialClosed;
-(void) onInterstitialSkiped;

@end

@interface OmniInterstitial : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<OmniInterstitialAdDelegate> delegate;

- (instancetype)initWithRequest:(OmniRequest *)request;
- (BOOL)isReady;
- (void)loadInterstitialAd;
- (void)show:(UIViewController *)rootViewController;
@end
