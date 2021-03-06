//
//  LFPhotoTools.h
//  LFPhotoPicker
//
//  Created by ios开发 on 2017/7/3.
//  Copyright © 2017年 ios开发. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>
#import "LFPhotoModel.h"
//工具类
@interface LFPhotoTools : NSObject

+ (UIImage *)lf_imageNamed:(NSString *)imageName;


/**
 根据已选照片数组 返回原照片数组

 @param photos 选中照片的数组
 @param completion 返回
 */
+ (void)fetchOriginalForSelectedPhoto:(NSArray<LFPhotoModel *> *)photos completion:(void(^)(NSArray<UIImage *> *images))completion;

/**
 根据已选照片数组返回高清图片数组 (质量略小于原图)
 
 @param photos 选中照片数组
 @param completion 高清图片数组
 */
+ (void)fetchHDImageForSelectedPhoto:(NSArray<LFPhotoModel *> *)photos completion:(void(^)(NSArray<UIImage *> *images))completion;

//获取视频的时长
+ (NSString *)getNewTimeFromDurationSecond:(NSInteger)duration;



//相册名称转换
+ (NSString *)transFormPhotoTitle:(NSString *)englishName;

//根据PHAsset对象获取照片信息
+ (PHImageRequestID)FetchPhotoForPHAsset:(PHAsset *)asset Size:(CGSize)size resizeMode:(PHImageRequestOptionsResizeMode)resizeMode completion:(void(^)(UIImage *image,NSDictionary *info))completion;

+ (int32_t)fetchPhotoWithAsset:(id)asset photoSize:(CGSize)photoSize completion:(void (^)(UIImage *photo,NSDictionary *info,BOOL isDegraded))completion;

/**
 根据PHAsset对象获取LivePhoto
 */
+ (PHImageRequestID)FetchLivePhotoForPHAsset:(PHAsset *)asset Size:(CGSize)size Completion:(void(^)(PHLivePhoto *livePhoto, NSDictionary *info))completion;


/**
 获取图片NSData
 
 @param asset 图片对象
 @param completion 返回结果
 */
+ (PHImageRequestID)FetchPhotoDataForPHAsset:(PHAsset *)asset completion:(void(^)(NSData *imageData, NSDictionary *info))completion;

/**
 获取数组里面图片的大小
 */
+ (void)FetchPhotosBytes:(NSArray *)photos completion:(void (^)(NSString *totalBytes))completion;

/**
 获取指定字符串的宽度
 
 @param text 需要计算的字符串
 @param height 高度大小
 @param fontSize 字体大小
 @return 宽度大小
 */
+ (CGFloat)getTextWidth:(NSString *)text withHeight:(CGFloat)height fontSize:(CGFloat)fontSize;

/**
 根据PHAsset对象获取照片信息 带返回错误的block
 
 @param asset 照片的PHAsset对象
 @param size 指定请求的大小
 @param deliveryMode 请求模式
 @param completion 完成后的block
 @param error 失败后的block
 */
+ (PHImageRequestID)FetchPhotoForPHAsset:(PHAsset *)asset Size:(CGSize)size deliveryMode:(PHImageRequestOptionsDeliveryMode)deliveryMode completion:(void(^)(UIImage *image,NSDictionary *info))completion progressHandler:(void (^)(double progress, NSError *error, BOOL *stop, NSDictionary *info))progressHandler error:(void(^)(NSDictionary *info))error;

+ (void)FetchPhotoForPHAsset:(PHAsset *)asset Size:(CGSize)size resizeMode:(PHImageRequestOptionsResizeMode)resizeMode completion:(void(^)(UIImage *image,NSDictionary *info))completion error:(void(^)(NSDictionary *info))error;





@end
