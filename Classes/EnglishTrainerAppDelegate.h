//
//  EnglishTrainerAppDelegate.h
//  EnglishTrainer
//
//  Created by ariestien lutfianasari on 11/08/30.
//  Copyright 2011 kyushu university. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EnglishTrainerViewController;

@interface EnglishTrainerAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	UITabBarController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UITabBarController *viewController;

@end

