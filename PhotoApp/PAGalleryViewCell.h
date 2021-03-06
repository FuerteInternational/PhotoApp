//
//  PAGalleryViewCell.h
//  PhotoApp
//
//  Created by Ondrej Rafaj on 30/04/2012.
//  Copyright (c) 2012 Fuerte International. All rights reserved.
//

#import "AQGridViewCell.h"
#import <AssetsLibrary/AssetsLibrary.h>
#import "PAGalleryShareButton.h"


@interface PAGalleryViewCell : AQGridViewCell

@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, assign) ALAsset *asset;
@property (nonatomic, strong) PAGalleryShareButton *shareButton;


@end
