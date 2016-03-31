//
//  AdressData.m
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/2.
//  Copyright © 2016年 江科. All rights reserved.
//

#import "AddressData.h"

@implementation AdressData

+ (void)loadAdressData:(CompleteBlock)complete {
    NSString *path = [[NSBundle mainBundle] pathForResource:@"MyAdress" ofType:nil];
    NSData *data = [NSData dataWithContentsOfFile:path];
    NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingAllowFragments error:nil];
    AdressData *adressData = [AddressData mj_objectWithKeyValues:dic];
    complete(adressData.data,nil);
}

+ (NSDictionary *)mj_objectClassInArray {
    return  @{
              @"data" : NSStringFromClass([Address class])
              };
}

@end

@implementation Address



@end