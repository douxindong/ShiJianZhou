//
//  UIColor+Hex.h
//  Timeline_Demo
//
//  Created by douxindong on 16/8/4.
//  Copyright © 2016年 douxindong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor(Hex)

+ (UIColor *)colorWithHexString:(NSString *)colorString;

//从十六进制字符串获取颜色
/**
 *  color支持:
 *          @"#3F7813"  @"0X341141"、 @"312143"
 */
+ (UIColor *)colorWithHexString:(NSString *)colorString alpha:(CGFloat)alpha;

@end
