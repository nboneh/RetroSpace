//
//  Asteroid.h
//  RetroSpace
//
//  Created by Nir Boneh on 6/29/14.
//  Copyright (c) 2014 Clouby. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface WorldObject : SKSpriteNode

-(BOOL) hitBy: (SKSpriteNode *) obj;

-(void) destroy; 
@end
