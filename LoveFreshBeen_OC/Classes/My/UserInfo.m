
//
//  UserInfo.m
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/2.
//  Copyright © 2016年 江科. All rights reserved.
//

#import "UserInfo.h"

@interface UserInfo()


@end

@implementation UserInfo

+ (instancetype)sharedInstance {
    
    static dispatch_once_t onceToken;
    static UserInfo *userInfo;
    dispatch_once(&onceToken, ^{
        userInfo = [[UserInfo alloc]init];
        [AddressData loadAdressData:^(NSArray *allAdress, NSError *error) {
            if (allAdress != nil) {
                userInfo.allAdress = [allAdress mutableCopy];
                userInfo.defaultAddress = allAdress[0];
            }
        }];
    });
    return userInfo;
}

- (Address *)defaultAddress
{
    return  _defaultAddress;
}


@end
