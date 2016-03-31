//
//  AdressCell.m
//  LoveFreshBeen_OC
//
//  Created by 江科 on 16/3/23.
//  Copyright © 2016年 江科. All rights reserved.
//

#import "AddressCell.h"

@interface AddressCell()


@property (nonatomic,strong) UILabel *nameLabel;
@property (nonatomic,strong) UILabel *phoneLabel;
@property (nonatomic,strong) UILabel *addressLabel;
@property (nonatomic,strong) UIView *lineView;
@property (nonatomic,strong) UIImageView *modifyImageView;
@property (nonatomic,strong) UIView *bottonView;


@end

@implementation AddressCell


- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    if (self = [super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
        
        
        
    }
    return self;
}
@end
