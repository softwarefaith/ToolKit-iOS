//
//  NSString+DecimalNumber.h
//  ToolKit
//
//  Created by 蔡杰 on 2018/10/18.
//  Copyright © 2018年 AllanCai. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 
 
 https://developer.apple.com/documentation/foundation/nsdecimalnumber
 http://www.jianshu.com/p/4703d704c953
 https://eezytutorials.com/ios/nsdecimalnumber-by-example.php
 http://www.skyfox.org/ios-nsdecimalnumber-use.html
 https://stackoverflow.com/questions/421463/should-i-use-nsdecimalnumber-to-deal-with-money

 *、

@interface NSString (DecimalNumber)
+ (NSString *)decimalNumberWithNSNumber:(NSNumber * )number;
+ (NSString *)decimalNumberWithDouble:(double)conversionValue;
@end
