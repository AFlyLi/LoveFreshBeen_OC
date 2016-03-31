//
//  ShopCarTableFootView.h
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/17.
//  Copyright © 2016年 江科. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^SureButtonCliked)();
@interface ShopCarTableFootView : UIView
@property (nonatomic,assign) CGFloat price;
@property (nonatomic,copy)SureButtonCliked sureButtonCliked;

@end
