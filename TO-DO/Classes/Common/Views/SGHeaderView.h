//
//  SGHeaderView.h
//  TO-DO
//
//  Created by Siegrain on 16/5/14.
//  Copyright © 2016年 com.siegrain. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, HeaderAvatarPosition) {
    HeaderAvatarPositionBottom,
    HeaderAvatarPositionCenter
};

typedef NS_ENUM(NSInteger, HeaderTitleAlignement) {
    HeaderTitleAlignmentCenter,
    HeaderTitleAlignmentLeft
};

@interface SGHeaderView : UIView
/**
 *  标题Label
 */
@property(nonatomic, readonly, strong) UILabel *titleLabel;
/**
 *  副标题Label
 */
@property(nonatomic, readonly, strong) UILabel *subtitleLabel;
/**
 *  背景图
 */
@property(nonatomic, strong) UIImage *backgroundImage;
/**
 *  头像按钮
 */
@property(nonatomic, readonly, strong) UIButton *avatarButton;
/**
 *  右边的操作按钮
 */
@property(nonatomic, readonly, strong) UIButton *rightOperationButton;
/**
 *  头像按钮被按下的事件
 */
@property(nonatomic, readwrite, copy) void (^headerViewDidPressAvatarButton)();
/**
 *  按下右操作按钮
 */
@property(nonatomic, readwrite, copy) void (^headerViewDidPressRightOperationButton)();

+ (instancetype)headerViewWithAvatarPosition:(HeaderAvatarPosition)avatarPosition titleAlignement:(HeaderTitleAlignement)titleAlignment;

#pragma mark - parallax
/**
 *  需要设置视差特效的ScrollView
 */
@property(nonatomic, weak) UIScrollView* parallaxScrollView;
/**
 *  parallaxScrollView的初始高度
 */
@property(nonatomic, assign) CGFloat parallaxHeight;
/**
 *  保留高度
 */
@property(nonatomic, assign) CGFloat parallaxMinimumHeight;
@end