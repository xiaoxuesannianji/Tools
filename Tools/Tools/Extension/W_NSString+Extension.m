//
//  NSString+Extension.m
//  Tools
//
//  Created by test on 2017/11/10.
//  Copyright © 2017年 jin. All rights reserved.
//

#import "W_NSString+Extension.h"

@implementation NSString (Extension)

- (instancetype)w_filterWithSet:(NSString *)strSet option:(W_StringFilterOptions)option{

    NSCharacterSet *set = [NSCharacterSet characterSetWithCharactersInString:strSet];
    if (option == W_StringFilter_Reserve){
        set = [set invertedSet];
    }

    NSString *filtStr = [[self componentsSeparatedByCharactersInSet:set] componentsJoinedByString:@""];

    return filtStr;
}



@end
