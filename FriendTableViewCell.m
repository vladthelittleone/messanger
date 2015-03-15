//
//  FriendTableViewCell.m
//  Wirpl
//
//  Created by Владислав Скуришин on 28.02.15.
//  Copyright (c) 2015 vladthelittleone. All rights reserved.
//
#import "FriendTableViewCell.h"

@implementation FriendTableViewCell

- (void)awakeFromNib {
    // Initialization code
    self.friendImageView.layer.cornerRadius = 10.0f;
    self.friendImageView.clipsToBounds = YES;

}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
