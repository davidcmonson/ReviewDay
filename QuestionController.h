//
//  QuestionController.h
//  ReviewDay
//
//  Created by David Monson on 3/19/15.
//  Copyright (c) 2015 Dev Mountain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Question.h"
#import "User.h"


@interface QuestionController : NSObject

@property (nonatomic, strong, readonly) NSArray *questions;
@property (nonatomic, strong, readonly) User *currentUser;


- (Question *)createQuestionWithTitle:(NSString *)title details:(NSString *)details;

- (void)removeQuestion:(Question *)question;

- (void)save;

typedef NS_ENUM(NSUInteger, QuestionStatus) {
    StatusActive,
    StatusAnswered,
    StatusDeleted,
};

typedef NS_ENUM(NSUInteger, UserRole) {
    RoleStudent,
    RoleMentor,
};



@end
