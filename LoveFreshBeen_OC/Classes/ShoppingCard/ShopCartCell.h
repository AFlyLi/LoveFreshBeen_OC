//
//  ShopCartCell.h
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/17.
//  Copyright © 2016年 江科. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Goods.h"
@interface ShopCartCell : UITableViewCell

@property (nonatomic,strong) Goods *goods;
+ (instancetype)cellWithTableView:(UITableView *)tableView;
@end
