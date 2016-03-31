//
//  BuyView.h
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/8.
//  Copyright © 2016年 江科. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Goods.h"
@interface BuyView : UIView

/** 是否显示0 */
@property (nonatomic) BOOL zearIsShow;
/** 与之关联的商品  */
@property (nonatomic,strong) Goods* goods;
/** 不显示减号 */
@property (nonatomic) BOOL zearNeverShow;

@end
