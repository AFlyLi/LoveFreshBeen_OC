//
//  CategoryCell.h
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/14.
//  Copyright © 2016年 江科. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SuperMarketSource.h"
@interface CategoryCell : UITableViewCell
/** 数据  */
@property (nonatomic,strong)ProductCategory *categroies;

+ (instancetype)cellWithTable:(UITableView *)tableView;
@end
