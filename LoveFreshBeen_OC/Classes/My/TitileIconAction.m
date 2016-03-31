//
//  TitileIcon.m
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/18.
//  Copyright © 2016年 江科. All rights reserved.
//

#import "TitileIconAction.h"

@implementation TitileIconAction


+ (instancetype)titleIconWith:(NSString *)title icon:(UIImage *)image controller:(UIViewController *)controller tag:(NSInteger)tag {
    TitileIconAction *titleIconAction = [[self alloc]init];
    titleIconAction.title = title;
    titleIconAction.icon = image;
    titleIconAction.controller = controller;
    titleIconAction.tag = tag;
    return titleIconAction;
}
@end
