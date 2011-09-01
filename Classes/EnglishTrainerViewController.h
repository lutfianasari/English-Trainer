//
//  EnglishTrainerViewController.h
//  EnglishTrainer
//
//  Created by ariestien lutfianasari on 11/08/30.
//  Copyright 2011 kyushu university. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EnglishTrainerViewController : UIViewController {
	
	//IBOutlet UIView for each page
	IBOutlet UIView *login_view;
	IBOutlet UIView *register_view;
	IBOutlet UIView *menu_view;
	IBOutlet UIView *profile_view;
	IBOutlet UIView *search_view;
	IBOutlet UIView *bmlist_view;
	IBOutlet UIView *history_view;
	IBOutlet UIView *help_view;
	IBOutlet UIView *resultdetail_view;
	IBOutlet UIView *editprofile_view;
	
	//IB for Login
	IBOutlet UITextField *id_log_text;
	IBOutlet UITextField *pw_log_text;
	IBOutlet UIButton *ok_log_button;
	IBOutlet UIButton *reg_button;
	
	//IB for Register
	IBOutlet UITextField *id_reg_text; //do we really need this??
	IBOutlet UITextField *pw_reg_text; //do we really need this??
	IBOutlet UITextField *toeic_text;
	IBOutlet UIButton *ok_reg_button;
	
	//IB for Menu
	IBOutlet UIButton *profile_button;
	IBOutlet UIButton *search_button;
	IBOutlet UIButton *bmlist_button;
	IBOutlet UIButton *history_button;
	IBOutlet UIButton *menu_help_view;
	IBOutlet UIButton *logout_button;
	
	//IB for Profile
	//**** don't know how to show data from database
	IBOutlet UILabel *show_id_label;
	IBOutlet UILabel *show_pw_label;
	IBOutlet UILabel *show_toeic_label;
	IBOutlet UILabel *show_occup_label;
	IBOutlet UILabel *show_hobby_label;
	IBOutlet UIButton *edit_button;
	IBOutlet UIButton *profile_back_button;
	
	//IB for Editprofile
	//**** don't know how to show data drom database
	IBOutlet UITextField *edit_userid_text;  //might be useless since it use id from fb/twitter
	IBOutlet UITextField *edit_pw_text;  //might be useless since it use id from fb/twitter
	IBOutlet UITextField *edit_toeic_text; //do we really need this??
	IBOutlet UITextField *edit_occup_text; //do we really need this??
	IBOutlet UITextField *edit_hobby_text; //do we really need this??
	IBOutlet UIButton *saveprofile_button_tapped;
	
	//IB for Search
	//**** don't know how to show data from database
	IBOutlet UIButton *search_back_button;
	
	//IB for Bookmark List
	//**** don't know how to show data from database
	IBOutlet UITableView *bmlist_tableView;
	NSArray *saved_bmlist;
	IBOutlet UIButton *bmlist_back_button;
	
	//IB for History
	//**** don't know how to show data from database
	IBOutlet UITableView *history_tableView;
	NSArray *historylist;
	IBOutlet UIButton *history_back_button;
	
	//IB for Help
	//**** don't know how to show data in scroll page
	IBOutlet UIButton *help_back_button;
	IBOutlet UITextView *help_text;
	
	//IB for Result Detail
	//**** don't know how to show data from database
	IBOutlet UIButton *bmlist_add_button;
	IBOutlet UIButton *resultdetail_back_button;
	
	
	NSString *String;

}

- (void)ok_login_button_tapped:(id)sender;
- (void)reg_button_tapped:(id)sender;
- (void)ok_reg_button_tapped:(id)sender;
- (void)logout_button_tapped:(id)sender;
- (void)toprofile_button_tapped:(id)sender;
- (void)tosearch_button_tapepd:(id)sender;
- (void)tobmlist_button_tapped:(id)sender;
- (void)tohistory_button_tapped:(id)sender;
- (void)tohelp_button_tapped:(id)sender;
- (void)fromprofile_button_tapped:(id)sender; //back from profile to menu page
- (void)fromsearch_button_tapped:(id)sender;
- (void)frombmlist_button_tapped:(id)sender;
- (void)fromhistory_button_tapped:(id)sender;
- (void)fromhelp_button_tapped:(id)sender;
- (void)fromresultdetail_button_tapped:(id)sender;
- (void)saveprofile_button_tapped:(id)sender;
- (void)editprofile_button_tapped:(id)sender;

- (void) touchesBegan :(NSSet *) touches withEvent:(UIEvent *)event;


//below are how to get and post data from and to UI
- (IBAction)profile_view;

@property (nonatomic, retain) NSArray *saved_bmlist;
@property (nonatomic, retain) NSArray *historylist;

- (IBAction)get_logindata;
- (IBAction)get_regdata;



 

@end

