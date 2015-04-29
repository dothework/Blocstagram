//
//  BLCDataSource.h
//  Blocstagram
//
//  Created by DAD on 4/29/15.
//  Copyright (c) 2015 Mark Carpenter. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLCDataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end