//
//  NSString+Extension.h
//  Tools
//
//  Created by test on 2017/11/10.
//  Copyright © 2017年 jin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "W_ExtensionConst.h"

/**
 文字转拼音+首字母大写
 */
@interface NSString (Extension)

/**
 过滤字符串
 保留数字 strSet=@"1234567890" option:W_StringFilter_Reserve
 去掉数字 strSet=@"1234567890" option:W_StringFilter_Discarded
 @param strSet 字符集合
 @param option 选项
 @return 过滤后的字符
 */
- (instancetype)w_filterWithSet:(NSString *)strSet option:(W_StringFilterOptions)option;

//- (instancetype)w_filterWith

@end
