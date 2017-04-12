//
//  ListViewController.h
//  BDOMAppFinal
//
//  Created by ilabafrica on 07/04/2017.
//  Copyright © 2017 Vodacom. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface ListViewController : UITableViewController


//@property (strong, nonatomic) IBOutlet UITableView *tableView;


@property (nonatomic,strong) NSMutableArray * jsonArray;
@property (nonatomic, strong) NSMutableArray * ordersArray;

#pragma mark -
#pragma mark Class Methods

- (void) retrieveData;

@end

