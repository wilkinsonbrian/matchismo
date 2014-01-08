//
//  Deck.h
//  Matchismo
//
//  Created by Brian Wilkinson on 1/4/14.
//  Copyright (c) 2014 Brian Wilkinson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;

- (Card *)drawRandomCard;

@end
