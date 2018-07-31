//
//  NSString+StringHandleExtention.h
//  ToolKit
//
//  Created by 蔡杰 on 2018/7/31.
//  Copyright © 2018年 AllanCai. All rights reserved.
//

#import <Foundation/Foundation.h>

//数字
#define kNUM @"0123456789"
//字母
#define kALPHA @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
//数字和字母
#define kALPHANUM @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"

//身份证字母
#define kIDStirng @"0123456789XY"

//固话
#define kFixedTelephone @"0123456789-"


/*
 /*
 
 
 - (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string
 {
 NSCharacterSet *cs = [[NSCharacterSet characterSetWithCharactersInString:ALPHANUM] invertedSet];
 NSString *filtered = [[string componentsSeparatedByCharactersInSet:cs] componentsJoinedByString:@""];
 return [string isEqualToString:filtered];
 
 (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string {
 NSUInteger maxLimit = 9; // 模拟长度为9的情况.
 if (range.location == maxLimit && range.length == 0) { // 限制了输入时候的情况
 return NO;
 }
 if (range.location < maxLimit && (string.length + range.location) > maxLimit) { // 限制了粘贴字符时候的情况
 return NO;
 }
 return YES;
 }
 
 */


@interface NSString (StringHandleExtention)

- (NSString *)stringByURLEncode;
//正则校验身份证号
+ (BOOL)checkUserIDCard:(NSString *)IDNumber;
- (BOOL)matchChinese;
-  (BOOL)matchWithRegex:(NSString *)regex;
- (NSString *)stringFilterChinese;
- (NSString *)stringFilterAllCharactersButChinese;
- (NSString *)stringFilterWithRegex:(NSString *)regexStr;


- (NSString *)filterSpace;

/**  系统键盘
 *  判断字符串中是否存在emoji
 * @param string 字符串
 * @return YES(含有表情)
 */
+ (BOOL)stringContainsEmoji:(NSString *)string;

/**  第三方键盘
 *  判断字符串中是否存在emoji
 * @param string 字符串
 * @return YES(含有表情)
 */
+ (BOOL)hasEmoji:(NSString*)string;


/**
 判断是不是九宫格
 @param string  输入的字符
 @return YES(是九宫格拼音键盘)
 */
+(BOOL)isNineKeyBoard:(NSString *)string;

@end
