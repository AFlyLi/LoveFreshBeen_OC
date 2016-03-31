//
//  UserShopCarTool.h
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/9.
//  Copyright © 2016年 江科. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Goods.h"

@interface UserShopCarTool : NSObject
@property (nonatomic,strong) NSMutableArray<Goods *> *shopCar;

+ (instancetype)sharedInstance;
- (void)addSupermarkProductToShopCar:(Goods *)goods;
- (void)removeFromProductShopCar:(Goods*)goods;
- (CGFloat)getShopCarGoodsPrice ;
- (NSInteger)getShopCarGoodsNumber;
- (BOOL)isEmpty;
@end
