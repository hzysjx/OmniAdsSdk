//
//  OmniStorage.h
//  OmniAdsSdk-iOS
//
//
#import "OmniDto.h"
#import <Foundation/Foundation.h>

@interface OmniStorage : NSObject
@property (nonatomic) int cps;
+(instancetype) shareInstance;
-(void) addStrategyDtos:(NSString *)adsId adDto:(OmniDto *) omniDto;
-(OmniDto *) getStrategy: (NSString *)adsId;
@end
