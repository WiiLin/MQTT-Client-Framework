//
//  ForegroundReconnection.h
//  MQTTClient
//
//  Created by Josip Cavar on 22/08/2017.
//  Copyright © 2017 Christoph Krey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#if TARGET_OS_IPHONE == 1

@class MQTTSessionManager;

@interface ForegroundReconnection : NSObject

@property (weak, nonatomic) MQTTSessionManager *sessionManager;
@property (weak, nonatomic) UIApplication *shareApplication;

- (instancetype)initWithMQTTSessionManager:(MQTTSessionManager *)manager application:(UIApplication *)application;

@end

#endif
