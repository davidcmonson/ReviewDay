//
//  ViewController.m
//  ReviewDay
//
//  Created by David Monson on 3/19/15.
//  Copyright (c) 2015 Dev Mountain. All rights reserved.
//

#import "QuestionListViewController.h"
#import "Question.h"
#import "QuestionController.h"

typedef NS_ENUM(NSUInteger, TableViewSection) {
    SectionActive,
    SectionAnswered,
    SectionRemoved,
};

@interface QuestionListViewController () <UITableViewDataSource, UITableViewDelegate>

@end

@implementation QuestionListViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"questionCell"];
    
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:@"questionCell"];
    }
    
    Question *question = [QuestionController sharedInstance].questions[indexPath.row];
    
    cell.textLabel.text = question.title;
    cell.detailTextLabel.text = question.details;
    
    return cell;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    
    TableViewSection tableViewSection = section;
    
    switch (tableViewSection) {
        case SectionActive:
            return [[QuestionController sharedInstance] questionsWithStatus:StatusActive].count;
            break;
        case SectionAnswered:
            return [[QuestionController sharedInstance] questionsWithStatus:StatusAnswered].count;
            break;
        case SectionRemoved:
            return [[QuestionController sharedInstance] questionsWithStatus:StatusDeleted].count;
            break;
    }
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    
    return SectionRemoved +1;
    
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section {
    TableViewSection tableViewSection = section;
    
    switch (tableViewSection) {
        case SectionActive:
            return @"Active Questions";
            break;
        case SectionAnswered:
            return @"Answered Questions";
            break;
        case SectionRemoved:
            return @"Deleted Questions";
            break;
    }
}

@end
