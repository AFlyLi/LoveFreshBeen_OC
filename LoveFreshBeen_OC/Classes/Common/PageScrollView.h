//
//  PageScrollView.h
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/4.
//  Copyright © 2016年 江科. All rights reserved.
//

#import <UIKit/UIKit.h>
@class PageScrollView;

//@protocol PageScrollViewDelegate <NSObject>
//
//- (void)didPageScrollViewCliked:(PageScrollView *)pageScrollView atIndex:(NSInteger)index;
//
//@end
@interface PageScrollView : UIView

@property (nonatomic,copy) ClikedCallback callback;

+ (instancetype)pageScollView:(NSArray<NSString *> *)images placeHolder:(UIImage *)placeHolderImage;
@end
