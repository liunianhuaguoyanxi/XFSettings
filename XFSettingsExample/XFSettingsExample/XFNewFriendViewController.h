//
//  XFNewFriendViewController.h
//  XFSettingsExample
//
//  Created by 付星 on 15/8/14.
//  Copyright (c) 2015年 Yizzuide. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XFSettings.h"

@interface XFNewFriendViewController : UIViewController <XFSettingIntentUserInfo>

@property (nonatomic, strong) NSDictionary *userInfo;
@end
