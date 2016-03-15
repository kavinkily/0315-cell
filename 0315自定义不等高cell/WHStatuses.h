//
//  WHStatuses.h
//  0315自定义不等高cell
//
//  Created by LeeWiHong on 16/3/15.
//  Copyright © 2016年 LeeWiHong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface WHStatuses : NSObject

@property (nonatomic, copy) NSString *icon;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, assign, getter=isVip)BOOL vip;

@property (nonatomic, copy) NSString *text;

@property (nonatomic, copy) NSString *picture;

@property (nonatomic, assign) CGRect iconFrame;

@property (nonatomic, assign) CGRect nameFrame;

@property (nonatomic, assign) CGRect vipFrame;

@property (nonatomic, assign) CGRect textFrame;

@property (nonatomic, assign) CGRect pictureFrame;

@property (nonatomic, assign) CGFloat cellHeight;

@end
