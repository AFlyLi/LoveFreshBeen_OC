//
//  AdressTitleView.h
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/2.
//  Copyright © 2016年 江科. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Address;
@interface AdressTitleView : UIView
- (CGFloat)adressViewWidth;
- (void)setTitle:(Address *)adress;
@end
