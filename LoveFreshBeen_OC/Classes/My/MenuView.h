//
//  OrderMenuView.h
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/18.
//  Copyright © 2016年 江科. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TitileIconAction.h"

@interface MenuView : UIView
- (instancetype)initMenus:(NSArray<TitileIconAction *> *)menus WithLine:(BOOL)showLine;
@end
