//
//  HeadlineView.h
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/10.
//  Copyright © 2016年 江科. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HomeHeadData.h"

@interface HeadlineView : UIView
@property (nonatomic,strong) ActInfo *headline;
@property (nonatomic,copy) ClikedCallback callback;
@end
