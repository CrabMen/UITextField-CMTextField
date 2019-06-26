//
//  UITextField+CMTextField.h
//  UITextField-CMTextField_Example
//
//  Created by 智借iOS on 2019/6/26.
//  Copyright © 2019 CrabMen. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,CMTextFieldKeyboardType) {
    CMTextFieldKeyboardType_Currency,
    CMTextFieldKeyboardType_IDCard
};

@interface UITextField (CMTextField)

/**占位符的颜色*/
@property (nonatomic,strong) UIColor *cm_placeholderColor;

/**下划线颜色*/
@property (nonatomic,strong) UIColor *cm_underlineColor;

/**下划线*/
@property (nonatomic,strong) UIColor *cm_underlineInset;

/**键盘类型*/
@property (nonatomic,assign) CMTextFieldKeyboardType cm_keyboardType;

/**内边距 只针对左右边距生效*/
@property (nonatomic,assign) UIEdgeInsets cm_contentInset;




@end

NS_ASSUME_NONNULL_END
