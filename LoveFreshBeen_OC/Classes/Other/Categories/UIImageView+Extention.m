//
//  UIImageView+Extention.m
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/10.
//  Copyright © 2016年 江科. All rights reserved.
//

#import "UIImageView+Extention.h"
#import "UIImageView+WebCache.h"
@implementation UIImageView (Extention)

- (void)setImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage {
    [self sd_setImageWithURL:url placeholderImage:placeholderImage];
}

@end
