//
//  BLCDataSource.h
//  Blocstagram
//
//  Created by DAD on 4/29/15.
//  Copyright (c) 2015 Mark Carpenter. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BLCMedia;

typedef void (^BLCNewItemCompletionBlock)(NSError *error);

@interface BLCDataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;
@property (nonatomic, assign) BOOL isRefreshing;
@property (nonatomic, assign) BOOL isLoadingOlderItems;

- (void) deleteMediaItem:(BLCMedia *)item;

- (void) requestNewItemsWithCompletionHandler:(BLCNewItemCompletionBlock)completionHandler;

- (void) requestOldItemsWithCompletionHandler:(BLCNewItemCompletionBlock)completionHandler;

@end
