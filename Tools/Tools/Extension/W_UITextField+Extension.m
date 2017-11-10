//
//  UITextField+Extension.m
//  Tools
//
//  Created by test on 2017/11/10.
//  Copyright © 2017年 jin. All rights reserved.
//

#import "W_UITextField+Extension.h"
#import "W_NSString+Extension.h"

@implementation UITextField (Extension)

- (void)limit{

    [NSNotificationCenter.defaultCenter addObserver:self selector:@selector(textDidChange:) name:UITextFieldTextDidChangeNotification object:nil];
}


- (void)textDidChange:(NSNotification *)sender{
    NSString *text = self.text;

    text = [text w_filterWithSet:@"01234567890." option:W_StringFilter_Reserve];

    if ([text containsString:@"."]) {

    }

    self.text = text;
}


- (void)dealloc{
    [NSNotificationCenter.defaultCenter removeObserver:self name:UITextFieldTextDidChangeNotification object:nil];
}


@end
