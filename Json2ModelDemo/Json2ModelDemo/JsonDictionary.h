//
//  JsonDictionary.h
//  BaseFoundationDemo
//
//  Created by Cailiang on 14-7-24.
//  Copyright (c) 2014年 Home. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JsonDictionary : NSObject

@property (nonatomic, assign) NSInteger    retcode;
@property (nonatomic, strong) NSString      *name;
@property (nonatomic, strong) NSDictionary  *info;
@property (nonatomic, strong) NSArray       *friends;
@property (nonatomic, assign) BOOL          married;

@end
