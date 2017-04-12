//
//  NSObject+OurOutlets.h
//  BDOMAppFinal
//
//  Created by ilabafrica on 07/04/2017.
//  Copyright © 2017 Vodacom. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OurOutlets : NSObject

@property (strong,nonatomic) NSString * name;
@property (strong,nonatomic) NSString * mobile_no;
@property (strong,nonatomic) NSString * service;
@property (strong,nonatomic) NSString * price;
@property (strong,nonatomic) NSString * city;
@property (strong,nonatomic) NSString * area;


#pragma mark -
#pragma mark Class Methods

- (id)initWithOrderName: (NSString *)oName andOrderMobile_no: (NSString *)oMobile_no andOrderService: (NSString *)oService andOrderPrice: (NSString *)oPrice andOrderCity: (NSString *)oCity andOrderArea: (NSString *)oArea;


@end
