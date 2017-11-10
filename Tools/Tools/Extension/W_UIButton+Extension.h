//
//  UIButton+StateBackgroundColor.h
//  buttonState
//
//  Created by test on 2017/11/9.
//  Copyright © 2017年 HuangZiJia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Extension)

/**
 设置不同状态下的背景颜色, 和 setBackgroundImage:forState:不能同时使用
 @param backgroundColor 颜色
 @param state 状态
 */
- (void)w_setBackgroundColor:(nonnull UIColor *)backgroundColor forState:(UIControlState)state;

@end
