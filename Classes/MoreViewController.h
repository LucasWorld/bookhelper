//
//  MoreViewController.h
//  bookhelper
//
//  Created by Luke on 6/30/11.
//  Copyright 2011 Taobao.com. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface MoreViewController : UIViewController {
	NSMutableArray *dataArray;
	UITableView *moreTableView;
}
@property(nonatomic,retain) IBOutlet UITableView *moreTableView;
@end
