//
//  DetailViewController.h
//  Wirpl
//
//  Created by Владислав Скуришин on 28.02.15.
//  Copyright (c) 2015 vladthelittleone. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JSQMessagesViewController/JSQMessages.h>

#import "DemoModelData.h"
#import "NSUserDefaults+DemoSettings.h"

@interface MessagesViewController : JSQMessagesViewController <UIActionSheetDelegate>

@property (strong, nonatomic) DemoModelData *demoData;

- (void)receiveMessagePressed:(UIBarButtonItem *)sender;

@end

