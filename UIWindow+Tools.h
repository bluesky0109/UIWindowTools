//
//  UIWindow+Tools.h
//  MiFit
//
//  Created by yongfeng Zhang on 2016/12/5.
//  Copyright © 2016年 Anhui Huami Information Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIWindow (Tools)

+ (UIWindow *) topNormalLevelWindow;

+ (UIViewController *)topMostViewController;

@end
