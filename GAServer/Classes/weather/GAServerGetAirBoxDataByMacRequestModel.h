//
//  GAServerGetAirBoxDataByMacRequestModel.h
//  AFNetworking
//
//  Created by 郑振兴 on 2018/5/7.
//

#import <GAServer/GAServer.h>

@interface GAServerGetAirBoxDataByMacRequestModel : GAServerRequestModel
    @property(nonatomic, strong) NSString *deviceMac;
    -(instancetype)initWithdeviceMac:(NSString *)deviceMac;
@end
