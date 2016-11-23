//
//  TimelineCellTableViewCell.h
//  Timeline_Demo
//
//  Created by douxindong on 16/8/3.
//  Copyright © 2016年 douxindong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TimelineCellTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIView *topLine;
@property (strong, nonatomic) IBOutlet UIView *buttomLine;
@property (strong, nonatomic) IBOutlet UILabel *lineLabel;

@end
