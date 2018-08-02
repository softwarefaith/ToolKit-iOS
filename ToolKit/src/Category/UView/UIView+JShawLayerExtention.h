//
//  UIView+JShawLayerExtention.h
//  ToolKit
//
//  Created by 蔡杰 on 2018/8/2.
//  Copyright © 2018年 AllanCai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (JShawLayerExtention)

+ (void)addShadowToView:(UIView *)view
            withOpacity:(float)shadowOpacity
           shadowRadius:(CGFloat)shadowRadius
        andCornerRadius:(CGFloat)cornerRadius;

@end
