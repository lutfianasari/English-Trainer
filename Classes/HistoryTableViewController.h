//
//  HistoryTableViewController.h
//  EnglishTrainer
//
//  Created by ariestien lutfianasari on 11/09/02.
//  Copyright 2011 kyushu university. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface HistoryTableViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>
{
	NSMutableArray *history_sentences;
}

@end
