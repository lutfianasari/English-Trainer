//
//  EnglishTrainerViewController.m
//  EnglishTrainer
//
//  Created by ariestien lutfianasari on 11/08/30.
//  Copyright 2011 kyushu university. All rights reserved.
//

#import "EnglishTrainerViewController.h"

@implementation EnglishTrainerViewController



/*
// The designated initializer. Override to perform setup that is required before the view is loaded.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}
*/

/*
// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView {
}
*/

/*
// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
	
	saved_bmlist = [[NSMutableArray alloc] init];
	//Add saved_bmlist (exampe)
	[saved_bmlist addObject:@"Apple is red"];
	[saved_bmlist addObject:@"Ball is blue"];
	[saved_bmlist addObject:@"Apple is not red"];
	[saved_bmlist addObject:@"Ball is not blue"];
	[saved_bmlist addObject:@"Happy in any colour"];
	
	self.navigationItem.title = @"English_sentence";
}

*/

/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
}


- (void)ok_login_button_tapped:(id)sender;
{
	//NSLog(id_log_text.text);
	self.view = menu_view;
}

- (void)reg_button_tapped:(id)sender;
{
	//NSLog(0);
	self.view = register_view;
}

- (void)ok_reg_button_tapped:(id)sender;
{
	//NSLog(id_reg_text.text);
	self.view = login_view;
}

- (void)logout_button_tapped:(id)sender;
{
	//NSLog(0);
	self.view = login_view;
}

- (void)toprofile_button_tapped:(id)sender;
{
	self.view = profile_view;
	
}

- (void)tosearch_button_tapepd:(id)sender;
{
	self.view = search_view;
}

- (void)tobmlist_button_tapped:(id)sender;
{
	self.view = bmlist_view;
}

- (void)tohistory_button_tapped:(id)sender;
{
	self.view = history_view;
}

- (void)tohelp_button_tapped:(id)sender;
{
	self.view = help_view;
}

- (void)fromprofile_button_tapped:(id)sender; //back from profile to menu page
{
	self.view = menu_view;
}

- (void)fromsearch_button_tapped:(id)sender; //back from search to menu page
{
	self.view = menu_view;
}

- (void)frombmlist_button_tapped:(id)sender; //back from bmlist to menu page
{
	self.view = menu_view;
}

- (void)fromhistory_button_tapped:(id)sender; //back from history to menu page
{
	self.view = menu_view;
}

- (void)fromhelp_button_tapped:(id)sender; //back from 1 to menu page
{
	self.view = menu_view;
}

- (void)fromresultdetail_button_tapped:(id)sender;//back from resultdetail page
{
	self.view = menu_view;
}

- (void)editprofile_button_tapped:(id)sender;
{
	self.view = editprofile_view;
}

- (void)saveprofile_button_tapped:(id)sender;
{
	self.view = profile_view;
}

-(void) touchesBegan :(NSSet *) touches withEvent:(UIEvent *)event
{
	[edit_userid_text resignFirstResponder];
	[edit_pw_text resignFirstResponder];
	[edit_toeic_text resignFirstResponder];
	[edit_occup_text resignFirstResponder];
	[edit_hobby_text resignFirstResponder];
	[id_log_text resignFirstResponder];
	[pw_log_text resignFirstResponder];
	[super touchesBegan:touches withEvent:event ];
}

- (IBAction)profile_view;
{
	show_id_label.text = [NSString stringWithFormat:@"%@", [edit_userid_text text]];
	show_pw_label.text = [NSString stringWithFormat:@"%@", [edit_pw_text text]];
	show_toeic_label.text = [NSString stringWithFormat:@"%@", [edit_toeic_text text]];
	show_occup_label.text = [NSString stringWithFormat:@"%@", [edit_occup_text text]];
	show_hobby_label.text = [NSString stringWithFormat:@"%@", [edit_hobby_text text]];
}

/*

- (NSInteger)bmlist_tableView:(UITableView *)bmlist_tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
	static NSString *CellIdentifier = @"Cell";
	
	UITableViewCell *cell = [bmlist_tableView dequeueReusableCellWithIdentifier:CellIdentifier];
	if (cell==nil) {
		cell = [[[UITableViewCell alloc] initWithFrame:CGRectZero reuseIdentifier:CellIdentifier] autorelease];
	}
	
	//Set up the cell
	NSString *cellValue = [saved_bmlist objectAtIndex:indexPath.row];
	cell.text = cellValue;
	
	return cell;
}*/

- (void)dealloc {
	[id_log_text release];
	[pw_log_text release];
	[String release];
	
	//[saved_bmlist release];

    [super dealloc];
}

@end
