//
//  UIButton+State.m
//  buttonState
//
//  Created by Jin on 2017/11/8.
//  Copyright © 2017年 Jin. All rights reserved.
//

#import "W_UIButton+Extension.h"

@implementation UIButton (Extension)

- (void)w_setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state{

    CGRect rect = self.bounds;
    CGSize size = self.bounds.size;

    UIGraphicsBeginImageContextWithOptions(size, YES, [UIScreen.mainScreen scale]);

    CGContextRef context = UIGraphicsGetCurrentContext();

    CGContextSetFillColorWithColor(context, backgroundColor.CGColor);

    CGContextFillRect(context, rect);

    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();

    UIGraphicsEndImageContext();

    [self setBackgroundImage:image forState:state];
}

@end
