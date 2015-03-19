//
//  User.h
//  ReviewDay
//
//  Created by David Monson on 3/19/15.
//  Copyright (c) 2015 Dev Mountain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Question;

@interface User : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * role;
@property (nonatomic, retain) NSOrderedSet *questionsAsked;
@property (nonatomic, retain) NSOrderedSet *questionsAnswered;
@end

@interface User (CoreDataGeneratedAccessors)

- (void)insertObject:(Question *)value inQuestionsAskedAtIndex:(NSUInteger)idx;
- (void)removeObjectFromQuestionsAskedAtIndex:(NSUInteger)idx;
- (void)insertQuestionsAsked:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeQuestionsAskedAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInQuestionsAskedAtIndex:(NSUInteger)idx withObject:(Question *)value;
- (void)replaceQuestionsAskedAtIndexes:(NSIndexSet *)indexes withQuestionsAsked:(NSArray *)values;
- (void)addQuestionsAskedObject:(Question *)value;
- (void)removeQuestionsAskedObject:(Question *)value;
- (void)addQuestionsAsked:(NSOrderedSet *)values;
- (void)removeQuestionsAsked:(NSOrderedSet *)values;
- (void)insertObject:(Question *)value inQuestionsAnsweredAtIndex:(NSUInteger)idx;
- (void)removeObjectFromQuestionsAnsweredAtIndex:(NSUInteger)idx;
- (void)insertQuestionsAnswered:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeQuestionsAnsweredAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInQuestionsAnsweredAtIndex:(NSUInteger)idx withObject:(Question *)value;
- (void)replaceQuestionsAnsweredAtIndexes:(NSIndexSet *)indexes withQuestionsAnswered:(NSArray *)values;
- (void)addQuestionsAnsweredObject:(Question *)value;
- (void)removeQuestionsAnsweredObject:(Question *)value;
- (void)addQuestionsAnswered:(NSOrderedSet *)values;
- (void)removeQuestionsAnswered:(NSOrderedSet *)values;
@end
