//
//  BookRideViewController.h
//  Executer
//
//  Created by Kehinde Shittu on 8/7/15.
//  Copyright (c) 2015 Kehesjay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MenuViewController.h"
#import <CoreLocation/CoreLocation.h>
@interface BookRideViewController : UIViewController <UIPopoverPresentationControllerDelegate, menuViewDelegate, UITextFieldDelegate, CLLocationManagerDelegate>
@property (nonatomic, strong) UIPopoverPresentationController *popController;
@property (strong, nonatomic) IBOutlet UIView *chooseUberType;
@property (strong, nonatomic) IBOutlet UILabel *uberTypeLabel;
@property (strong, nonatomic) IBOutlet UITextField *endTimeTextField;
@property (strong, nonatomic) IBOutlet UITextField *startTimeTextField;
@property (strong, nonatomic) IBOutlet UIImageView *executerLogo;
@property (strong, nonatomic) IBOutlet UITextField *destinationTextField;
@property (strong, nonatomic) IBOutlet UITextField *locationTextField;
@property (strong, nonatomic) IBOutlet UIView *pageHeader;
@property (strong, nonatomic) IBOutlet UIView *labelContainer;
@end
