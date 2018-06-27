//
//  MEXPublic.h
//  MobiExchanger
//
//  Created by 张赛赛 on 2018/6/13.
//  Copyright © 2018年 张赛赛. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UnityAds/UnityAds.h>
@interface MEXPublic : NSObject
+ (void)initialize:(NSString *)gameId delegate:(nullable id<UnityAdsDelegate>)delegate;
+ (void)initialize:(NSString *)gameId delegate:(nullable id<UnityAdsDelegate>)delegate testMode:(BOOL)testMode;
+ (void)show:(UIViewController *)viewController placementId:(NSString *)placementId;
@end
