//
//  LFPhotoManager.m
//  LFPhotoPicker
//
//  Created by ios开发 on 2017/7/3.
//  Copyright © 2017年 ios开发. All rights reserved.
//

#import "LFPhotoManager.h"

#define iOS9Later ([UIDevice currentDevice].systemVersion.floatValue >= 9.1f)

@interface LFPhotoManager ()

@property (strong, nonatomic) NSMutableArray *albums;
@property (strong, nonatomic) NSMutableArray *allPhotos;
@property (strong, nonatomic) NSMutableArray *allVideos;
@property (strong, nonatomic) NSMutableArray *allObjs;

@end

@implementation LFPhotoManager

- (instancetype) initWithType:(LFPhotoManagerSelectedType)type {
    if (self = [super init]) {
        self.type = type;
        [self setUp];
    }
    return self;
}

- (instancetype)init
{
    if ([super init]) {
        self.type = LFPhotoManagerSelectedTypePhoto;
        [self setUp];
    }
    return self;
}

- (void)setUp {
    self.open3DTouchPreview = YES;
    self.showFullScreenCamera = NO;
    self.outerCamera = NO;
    self.openCamera = YES;
    self.lookLivePhoto = YES;
    self.lookGifPhoto = YES;
    self.selectTogether = YES;
    self.maxNum = 10;
    self.photoMaxNum = 9;
    self.videoMaxNum = 1;
    self.rowCount = 4;
    self.albums = [NSMutableArray array];
    self.selectedList = [NSMutableArray array];
    self.selectedPhotos = [NSMutableArray array];
    self.selectedVideos = [NSMutableArray array];
    self.endSelectedList = [NSMutableArray array];
    self.endSelectedPhotos = [NSMutableArray array];
    self.endSelectedVideos = [NSMutableArray array];
    self.cameraList = [NSMutableArray array];
    self.cameraPhotos = [NSMutableArray array];
    self.cameraVideos = [NSMutableArray array];
    self.endCameraList = [NSMutableArray array];
    self.endCameraPhotos = [NSMutableArray array];
    self.endCameraVideos = [NSMutableArray array];
    self.selectedCameraList = [NSMutableArray array];
    self.selectedCameraPhotos = [NSMutableArray array];
    self.selectedCameraVideos = [NSMutableArray array];
    self.endSelectedCameraList = [NSMutableArray array];
    self.endSelectedCameraPhotos = [NSMutableArray array];
    self.endSelectedCameraVideos = [NSMutableArray array];
    self.networkPhotoUrls = [NSMutableArray array];
    self.showDeleteNetworkPhotoAlert = YES;

}


/*
 获取系统的所有相册
 @param albums 相册集合
 */

- (void)FetchAllAlbum:(void (^)(NSArray *))albums IsShowSelectTag:(BOOL)isShow {
    if (self.albums.count > 0) {
        [self.albums removeAllObjects];
    }
    
    //获取系统相册
    PHFetchResult *smartAlbums = [PHAssetCollection fetchAssetCollectionsWithType:PHAssetCollectionTypeSmartAlbum subtype:PHAssetCollectionSubtypeAlbumRegular options:nil];
    [smartAlbums enumerateObjectsWithOptions:NSEnumerationConcurrent usingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        //是否按照创建时间排序
        
    }];
}














@end
