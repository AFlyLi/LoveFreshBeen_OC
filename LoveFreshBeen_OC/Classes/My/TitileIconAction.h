//
//  TitileIcon.h
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/18.
//  Copyright © 2016年 江科. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TitileIconAction : NSObject
@property (nonatomic,copy) NSString *title;
@property (nonatomic,strong) UIImage *icon;
@property (nonatomic,strong) UIViewController *controller;
@property (nonatomic,assign) NSInteger tag;

+ (instancetype)titleIconWith:(NSString *)title icon:(UIImage *)image controller:(UIViewController *)controller tag:(NSInteger)tag;
@end
