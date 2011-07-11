//
//  SectionsViewController.h
//  Pathology-interface
//
//  Created by Liangjun Jiang on 7/7/11.
//  Copyright 2011 Harvard University Extension School. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AQGridViewController.h"
#import "CellLoading.h"
//#import "UserId.h" //TODO
#import "AQGridView.h"
#import "PresoModeViewController.h"


@interface SectionsViewController : UIViewController <AQGridViewDelegate, AQGridViewDataSource, UIActionSheetDelegate, UIPopoverControllerDelegate, PresoModeViewDelegate>{
    AQGridView *gridView;
    NSMutableDictionary *sections;
    
    UIBarButtonItem *infoButton;
    UIBarButtonItem *externalDisplayButton; 
    UIViewController *presoModeViewController;
    UIPopoverController *popoverController;
    
    UIWindow *extWindow;
    
   // UserId *user;
    
}

@property (nonatomic, retain) NSMutableDictionary *sections;
@property (nonatomic, retain) IBOutlet AQGridView *gridView;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *infoButton;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *externalDisplayButton; 
@property (nonatomic, retain) IBOutlet UIPopoverController *popoverController;
@property (nonatomic, retain) IBOutlet UIViewController *presoModeViewController;
@property (nonatomic, retain) UIWindow *extWindow;
//@property (retain) UserId *user;

- (IBAction)externalDisplay; //TODO
- (IBAction)info;


@end
