//
//  UIImageView+ImageLoader.h
//  ImageLoader
//
//  Created by Hirohisa Kawasaki on 2014/06/27.
//  Copyright (c) 2014年 Hirohisa Kawasaki. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (ImageLoader)

- (void)il_setImageWithURL:(NSURL *)URL placeholderImage:(UIImage *)placeholderImage;
- (void)il_setImageWithURL:(NSURL *)URL placeholderImage:(UIImage *)placeholderImage completion:(void (^)(BOOL finished))completion;

@end
