//
//  ViewController.m
//  0315自定义不等高cell
//
//  Created by LeeWiHong on 16/3/15.
//  Copyright © 2016年 LeeWiHong. All rights reserved.
//

#import "ViewController.h"
#import "WHStatuses.h"
#import "WHStatusesCell.h"
#import "MJExtension.h"
@interface ViewController ()

@property (nonatomic, strong) NSArray *statuses;

@end

@implementation ViewController

- (NSArray *)statuses
{
    if (_statuses == nil) {
        _statuses = [WHStatuses objectArrayWithFilename:@"statuses.plist"];
    }
    return _statuses;
}


- (void)viewDidLoad {
    [super viewDidLoad];
    NSLog(@"%@",self.statuses);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
