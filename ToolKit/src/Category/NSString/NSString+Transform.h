//
//  NSString+Transform.h
//  ToolKit
//
//  Created by 蔡杰 on 2018/11/2.
//  Copyright © 2018年 AllanCai. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Transform)
//汉字转拼音
+ (NSString *)transformPinYinWithString:(NSString *)chinese;
@end
