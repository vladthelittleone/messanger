//
//  FriendTableViewCell.h
//  Wirpl
//
//  Created by Владислав Скуришин on 28.02.15.
//  Copyright (c) 2015 vladthelittleone. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FriendTableViewCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UILabel *title;

@property (strong, nonatomic) IBOutlet UILabel *status;

@property (strong, nonatomic) IBOutlet UIImageView *friendImageView;

@end
