//
//  TCDeviceModel.h
//  TC1-NG
//
//  Created by QAQ on 2019/4/24.
//  Copyright © 2019 TC1. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SocketModel.h"
#import "MQTTModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface TCDeviceModel : NSObject
//当前设备名称
@property (nonatomic,copy) NSString *name;
//设备类型编号,1表示zTC1排插
@property (nonatomic,copy) NSString *type;
//设备类型名称
@property (nonatomic,copy) NSString *type_name;
//当前设备的mac地址
@property (nonatomic,copy) NSString *mac;
//设备IP
@property (nonatomic,copy) NSString *ip;
//设备版本
@property (nonatomic,copy) NSString *version;
//mqtt服务器
@property (nonatomic,strong) MQTTModel *mqtt;
//各个插座的数据
@property (nonatomic,strong) NSArray <SocketModel *>*sockets;

@end

NS_ASSUME_NONNULL_END