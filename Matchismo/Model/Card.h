//
//  Card.h
//  Matchismo
//
//  Created by Brian Wilkinson on 1/4/14.
//  Copyright (c) 2014 Brian Wilkinson. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *) otherCards;

@end
