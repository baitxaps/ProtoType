//
//  Mail.h
//  ProtoType
//
//  Created by hairong chen on 16/2/4.
//  Copyright © 2016年 hairong chen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdvTemplate.h"
@interface Mail : NSObject <NSCopying>

@property(nonatomic,strong)NSString         *receiver;
@property(nonatomic,strong)NSString         *subject;
@property(nonatomic,strong)NSString         *appellation;
@property(nonatomic,strong)NSString         *contxt;
@property(nonatomic,strong)NSString         *tail;
@property (nonatomic, strong) NSArray       *datas;
@property (nonatomic, strong) NSDictionary  *infomation;

- (instancetype)initWithObj:(AdvTemplate *)obj;

+ (instancetype)initWithObj:(AdvTemplate *)obj;

- (id)copyWithZone:(NSZone *)zone;



@end
