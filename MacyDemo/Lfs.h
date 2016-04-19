//
//  Lfs.h
//
//  Created by 钱骏  on 16/4/18
//  Copyright (c) 2016 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface Lfs : NSObject <NSCoding, NSCopying>

@property (nonatomic, assign) double freq;
@property (nonatomic, strong) NSString *lf;
@property (nonatomic, assign) double since;
@property (nonatomic, strong) NSArray *vars;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
