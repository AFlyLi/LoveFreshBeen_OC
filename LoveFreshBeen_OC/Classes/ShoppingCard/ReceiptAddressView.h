//
//  ReceiptAddressView.h
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/16.
//  Copyright © 2016年 江科. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddressData.h"
typedef void(^ModifyBtnCliked)();
@interface ReceiptAddressView : UIView
@property (nonatomic,strong) Address *address;

- (instancetype)initWithFrame:(CGRect)frame modify:(ModifyBtnCliked)modifyBtnCliked ;
@end
