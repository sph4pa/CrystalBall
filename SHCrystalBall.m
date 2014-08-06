//
//  SHCrystalBall.m
//  CrystalBall
//
//  Created by Stefan Ha on 8/5/14.
//  Copyright (c) 2014 Stefan Ha. All rights reserved.
//

#import "SHCrystalBall.h"

@implementation SHCrystalBall

- (NSString *) predictions{
    if(_predictions == nil){
        _predictions = [[NSArray alloc] initWithObjects:@"It is certain",
                        @"It is decidedly so",
                        @"All signs say YES",
                        @"The stars are not aligned",
                        @"My reply is no", @"It is doubtful",
                        @"Better not tell you now",
                        @"Concentrate and ask again",
                        @"Unable to answer now", nil];
    }
    return _predictions;
}

- (NSString *) randomPrediction{
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end
