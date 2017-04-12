//
//  PortfolioViewController.h
//  BDOMAppFinal
//
//  Created by ilabafrica on 07/04/2017.
//  Copyright © 2017 Vodacom. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OurOutlets.h"

@interface PortfolioViewController : UIViewController
- (IBAction)btnBook:(id)sender;
- (IBAction)location:(id)sender;

@property (strong, nonatomic) IBOutlet UIDatePicker *dpBook;
@property (strong, nonatomic) IBOutlet UITextField *txtService;
@property (strong, nonatomic) IBOutlet UITextField *txtClientMobile;
@property (strong, nonatomic) IBOutlet UITextField *txtClientName;

@property (strong, nonatomic) IBOutlet UILabel *lblService;


@property (strong, nonatomic) IBOutlet UIImageView *imgPortfolio;

@property (strong, nonatomic) IBOutlet UILabel *lblName;
@property (strong, nonatomic) IBOutlet UILabel *lblMobile;
@property (strong, nonatomic) IBOutlet UILabel *lblPrice;
@property (strong, nonatomic) IBOutlet UILabel *lblCity;
@property (strong, nonatomic) IBOutlet UILabel *lblArea;





//@property (nonatomic, strong) NSString *artistName;
@property(nonatomic, strong) OurOutlets * currentOrder;
#pragma mark -
#pragma mark Methods

- (void)getMyOrder:(id)myorderObject;
- (void)setLabels;







@end
