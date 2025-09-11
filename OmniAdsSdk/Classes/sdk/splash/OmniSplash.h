//
//  OmniSplash.h
//  OmniAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class OmniRequest;
@protocol OmniSplashAdDelegate <NSObject>
@optional
-(void) onSplashShow;
-(void) onSplashFailToShow:(NSString *) pid error:(NSError *)error;
-(void) onSplashLoadSuccess:(NSString *) pid;
-(void) onSplashLoadError:(NSString *) pid error:(NSError *)error;
-(void) onSplashClicked;
-(void) onSplashClosed;
-(void) onSplashSkiped;

@end

@interface OmniSplash : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<OmniSplashAdDelegate> delegate;
@property (nonatomic, weak) UIViewController *rootViewController;

- (instancetype)initWithRequest:(OmniRequest *)request
                              extra:(NSDictionary * _Nullable)extra;
- (instancetype)initWithRequest:(OmniRequest *)request;
- (BOOL)isReady;
-(void)loadAdAndShow;
- (void)loadAd;
- (void)showAd:(UIWindow *)window;
@end
