///
//  ProfileViewController.h
//  BDOMAppFinal
//
//  Created by ilabafrica on 07/04/2017.
//  Copyright © 2017 Vodacom. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#define kGOOGLE_API_KEY @" AIzaSyCHhGVZmEp8QauW1fUR3zIkSVUkGod3Gh4 "


@interface ProfileViewController : UIViewController <MKMapViewDelegate, CLLocationManagerDelegate>
{
    
    
}

@property (strong, nonatomic) IBOutlet UITextField *txtCity;
- (IBAction)btnSave:(id)sender;
@property (strong, nonatomic) IBOutlet UITextField *txtArea;

@property (strong, nonatomic) IBOutlet UITextField *txtPrice;
@property (strong, nonatomic) IBOutlet UITextField *txtService;
@property (strong, nonatomic) IBOutlet UITextField *txtName;
@property (strong, nonatomic) IBOutlet UITextField *txtMobile;






@end