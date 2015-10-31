//
//  QYAuth.h
//  QYFramework
//
//  Created by zengfanping on 10/15/15.
//  Copyright © 2015 qyvideo. All rights reserved.
//

#ifndef QYAuth_h
#define QYAuth_h


#ifdef __cplusplus
#define QY_EXTERN extern "C" __attribute__((visibility ("default")))
#else
#define QY_EXTERN     extern __attribute__((visibility ("default")))
#endif


@interface QYAuth: NSObject



@property (nonatomic, readonly) NSString *appId;


@property (nonatomic, readonly) NSString *accessKey;



@property (nonatomic, readonly) NSString *secretKey;


@property (nonatomic, readonly) NSString *timeSeconds;



@property (nonatomic, readonly) NSString *mCode;


@property (nonatomic, readonly) NSString *sam;



+ (QYAuth *)sharedInstance;



- (void)setAuthInfo:(NSString *)appId accessKey:(NSString*) ak secretKeySign:(NSString*) skSign timeSeconds:(NSString*) seconds;

QY_EXTERN NSString * const QYAuthAppid;
QY_EXTERN NSString * const QYAuthAccessKey;
QY_EXTERN NSString * const QYAuthSecretKeySign;
QY_EXTERN NSString * const QYAuthTimeSeconds;
QY_EXTERN NSString * const QYAuthMCode;
QY_EXTERN NSString * const QYAuthSam;

@end
#endif 
