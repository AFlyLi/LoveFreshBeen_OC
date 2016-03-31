//
//  FooterBannerData.h
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/18.
//  Copyright © 2016年 江科. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Activity.h"

@interface FooterBannerData : NSObject
@property (nonatomic,copy) NSString *code;
@property (nonatomic,copy) NSString *msg;
@property (nonatomic,copy) NSArray<Activity *> *data;

+ (void)loadFootBannerData:(CompleteBlock)complete;
@end
