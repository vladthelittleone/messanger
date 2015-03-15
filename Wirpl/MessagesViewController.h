//
//  DetailViewController.h
//  Wirpl
//
//  Created by Владислав Скуришин on 28.02.15.
//  Copyright (c) 2015 vladthelittleone. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JSQMessagesViewController/JSQMessages.h>

@interface MessagesViewController : JSQMessagesViewController <UIAlertViewDelegate>

@property (strong, nonatomic) id messagesItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

- (void)receiveMessagePressed:(UIBarButtonItem *)sender;

@end

