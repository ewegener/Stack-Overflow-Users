//
//  DetailViewController.h
//  Stack Overflow Users
//
//  Created by Erik Wegener on 12/11/18.
//  Copyright © 2018 wegenerlabs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

