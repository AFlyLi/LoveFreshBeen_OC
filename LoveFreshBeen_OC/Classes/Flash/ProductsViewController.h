//
//  ProductsViewController.h
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/14.
//  Copyright © 2016年 江科. All rights reserved.
//

#import "BaseViewController.h"
#import "SuperMarketSource.h"
#import "FlashViewController.h"

@protocol ProductsDelegate <NSObject>

- (void)didEndDislayHeaderView:(NSInteger)section;
- (void)willDislayHeaderView:(NSInteger)section;
@end

@interface ProductsViewController : BaseViewController<FlashTableViewDelagate>

@property (nonatomic,strong) SuperMarketData *superMarketData;

@property (nonatomic,weak) id<ProductsDelegate>delegate;

@end
