//
//  Student.h
//  KVC-Demo
//
//  Created by LeeJay on 16/6/2.
//  Copyright © 2016年 LeeJay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Student : NSObject

@property (nonatomic, strong) NSArray *bookList;

- (instancetype)initWithBookList:(NSArray *)bookList;

@end
