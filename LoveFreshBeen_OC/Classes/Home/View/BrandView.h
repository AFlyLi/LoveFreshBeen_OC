//
//  BrandView.h
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/11.
//  Copyright © 2016年 江科. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HomeHeadData.h"

typedef NS_ENUM(NSInteger, BrandViewType) {
    BrandViewTypeThree,
    BrandViewTypeFour
};


@interface BrandView : UIView
- (instancetype)initWithActRow:(ActInfo *)actInfo;

@property (nonatomic,assign) CGFloat height;
@property (nonatomic,copy) ClikedCallback callback;

@end
