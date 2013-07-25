//
//  DetailViewController.h
//  SlideNavigation
//
//  Created by Ryo Suzuki on 7/25/13.
//  Copyright (c) 2013 Ryo Suzuki. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
