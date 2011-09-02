//
//  Saved_bmlistViewController.h
//  EnglishTrainer
//
//  Created by ariestien lutfianasari on 11/09/02.
//  Copyright 2011 kyushu university. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface Saved_bmlistViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>
{
	NSMutableArray *bmlist_sentences;
}

@end
