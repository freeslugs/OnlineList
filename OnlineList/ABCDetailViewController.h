//
//  ABCDetailViewController.h
//  OnlineList
//
//  Created by Alex Burgel on 6/23/14.
//
//

#import <UIKit/UIKit.h>

@interface ABCDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
