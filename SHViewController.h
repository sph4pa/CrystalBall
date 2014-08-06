//
//  SHViewController.h
//  CrystalBall
//
//  Created by Stefan Ha on 8/5/14.
//  Copyright (c) 2014 Stefan Ha. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SHCrystalBall;

@interface SHViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) SHCrystalBall *crystalBall;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

-(void) makePrediction;

@end
