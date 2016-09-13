//
//  UIButton+ImageTitleSpacing.m
//  ButtonImageTitleSpacing
//
//  Created by Crow_Law on 16/8/11.
//  Copyright © 2016年 Crow. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, ButtonEdgeInsetStyle) {
    ButtonEdgeInsetsStyleTop, // image在上，label在下
    ButtonEdgeInsetsStyleLeft, // image在左，label在右
    ButtonEdgeInsetsStyleBottom, // image在下，label在上
    ButtonEdgeInsetsStyleRight // image在右，label在左
};

@interface UIButton (ImageTitleSpacing)

/**
*  设置imageView和Title布局方式和相互间距
*
*  @param style 布局
*  @param space 间距
*/
- (void)layoutButtonWithEdgeInsetsStyle:(ButtonEdgeInsetStyle)style
                        imageTitleSpace:(CGFloat)space;

@end
