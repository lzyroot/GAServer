//
//  GAServerGetCityWeatherByMacRequestModel.h
//  AFNetworking
//
//  Created by 郑振兴 on 2018/5/4.
//

#import <GAServer/GAServer.h>

@interface GAServerGetCityWeatherByMacRequestModel : GAServerRequestModel
@property(nonatomic, strong) NSString *deviceMac;
    -(instancetype)initWithdeviceMac:(NSString *)deviceMac;
@end
