//
//  BLCComment.h
//  Blocstagram
//
//  Created by DAD on 4/29/15.
//  Copyright (c) 2015 Mark Carpenter. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BLCUser;

@interface BLCComment : NSObject

@property (nonatomic, strong) NSString *idNumber;

@property (nonatomic, strong) BLCUser *from;
@property (nonatomic, strong) NSString *text;

@end
