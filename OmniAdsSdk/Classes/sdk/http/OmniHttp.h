//
//  OmniHttp.h
//  OmniAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>

typedef void(^NetworkManagerCompletionBlock)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error);

@interface OmniHttp : NSObject

+ (void)postWithURLString:(NSString *)urlString
                  jsonData:(NSDictionary *)jsonData
                completion:(NetworkManagerCompletionBlock)completion;

+ (void)queryConfig:(NSString *) appId;

@end
