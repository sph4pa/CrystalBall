//
//  SHCrystalBall.h
//  CrystalBall
//
//  Created by Stefan Ha on 8/5/14.
//  Copyright (c) 2014 Stefan Ha. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SHCrystalBall : NSObject{
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;

- (NSString *) randomPrediction;

@end
