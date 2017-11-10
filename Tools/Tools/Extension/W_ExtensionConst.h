//
//  W_ExtensionConst.h
//  Tools
//
//  Created by test on 2017/11/10.
//  Copyright © 2017年 jin. All rights reserved.
//

#import <Foundation/Foundation.h>

//MARK: NSString
/**
 过滤字符时
 - W_StingFilter_Reserve: 保留集合中的字符
 - W_StingFilter_Discarded: 去掉集合中的字符
 */
typedef NS_ENUM(NSUInteger, W_StringFilterOptions) {
    W_StringFilter_Reserve = 0,
    W_StringFilter_Discarded = 1,
};


/**
 判断类型
 - W_StringJudge_Number: 数字
 - W_StringJudge_Lowercase: 小写字母
 - W_StringJudge_Uppercase: 大写字母
 - W_StringJudge_Underline: 下划线
 - W_StringJudge_DecimalPoints: 小数点
 */
typedef NS_OPTIONS(NSUInteger, W_StringJudgeOption) {
    W_StringJudge_Number        = 1 << 0,
    W_StringJudge_Lowercase     = 1 << 1,
    W_StringJudge_Uppercase     = 1 << 2,
    W_StringJudge_Underline     = 1 << 3,
    W_StringJudge_DecimalPoints = 1 << 4,
};
