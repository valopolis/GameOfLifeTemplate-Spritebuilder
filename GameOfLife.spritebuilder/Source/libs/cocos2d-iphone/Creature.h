//
//  Creature.h
//  cocos2d-ios
//
//  Created by Valerie Thompson on 7/7/14.
//
//

#import "CCSprite.h"

@interface Creature : CCSprite

// stores the current state of the creature
@property (nonatomic, assign) BOOL isAlive;

// stores the amount of living neighbors
@property (nonatomic, assign) NSInteger livingNeighbors;

- (id)initCreature;

@end
