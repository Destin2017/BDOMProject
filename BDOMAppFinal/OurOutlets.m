//
//  NSObject+OurOutlets.m
//  BDOMAppFinal
//
//  Created by ilabafrica on 07/04/2017.
//  Copyright © 2017 Vodacom. All rights reserved.
//

#import "OurOutlets.h"

@implementation OurOutlets
@synthesize name, mobile_no, service, price, city, area;

- (id)initWithOrderName: (NSString *)oName andOrderMobile_no: (NSString *)oMobile_no andOrderService: (NSString *)oService andOrderPrice: (NSString *)oPrice andOrderCity: (NSString *)oCity andOrderArea: (NSString *)oArea
{
    self = [super init];
    if (self)
    {
        name = oName;
        mobile_no = oMobile_no;
        service = oService;
        price = oPrice;
        city = oCity;
        area = oArea;
        
    }
    return self;
}
@end
