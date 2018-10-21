//
//  AppDelegate.h
//  BSBDJ-2
//
//  Created by  王 全 on 2018/10/21.
//  Copyright © 2018年 LiAo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

