//
//  NSString+DecimalNumber.m
//  ToolKit
//
//  Created by 蔡杰 on 2018/10/18.
//  Copyright © 2018年 AllanCai. All rights reserved.
//

#import "NSString+DecimalNumber.h"

@implementation NSString (DecimalNumber)
+ (NSString *)decimalNumberWithNSNumber:(NSNumber * )number
{
    double conversionValue = [number doubleValue];
    NSString *doubleString        = [NSString stringWithFormat:@"%lf", conversionValue];
    NSDecimalNumber *decNumber    = [NSDecimalNumber decimalNumberWithString:doubleString];
    return [decNumber stringValue];
}

+ (NSString *)decimalNumberWithDouble:(double)conversionValue
{
    NSString *doubleString        = [NSString stringWithFormat:@"%lf", conversionValue];
    NSDecimalNumber *decNumber    = [NSDecimalNumber decimalNumberWithString:doubleString];
    return [decNumber stringValue];
}
@end
