//
//  ViewController.h
//  SegueSample
//
//  Created by 達郎 植田 on 12/08/01.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextView *textView;
- (IBAction)loadText:(id)sender;
@end
