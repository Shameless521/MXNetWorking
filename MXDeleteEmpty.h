//
//  MXDeleteEmpty.h
//  MXNetWorking
//
//  Created by hkqx on 2018/2/2.
//  Copyright © 2018年 maxin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MXDeleteEmpty : NSObject
//删除字典里的null值
+ (NSDictionary *)deleteEmpty:(NSDictionary *)dic;
@end
