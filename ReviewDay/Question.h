//
//  Question.h
//  ReviewDay
//
//  Created by David Monson on 3/19/15.
//  Copyright (c) 2015 Dev Mountain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Question : NSManagedObject

@property (nonatomic, retain) NSDate * submittedDate;
@property (nonatomic, retain) NSString * details;
@property (nonatomic, retain) NSNumber * status;
@property (nonatomic, retain) NSDate * dateSubmitted;
@property (nonatomic, retain) NSDate * dateAnswered;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSManagedObject *submittedBy;
@property (nonatomic, retain) NSManagedObject *answeredBy;

@end
