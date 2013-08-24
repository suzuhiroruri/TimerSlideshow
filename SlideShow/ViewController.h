//
//  ViewController.h
//  SlideShow
//
//  Created by Hiromasa Suzuki on 2013/08/24.
//  Copyright (c) 2013年 Dolice. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) UIImageView *imageView;
@property (nonatomic) NSMutableArray *slideShowImages;
@property (nonatomic) int slideShowImageNum;
@property (nonatomic) NSTimer *slideShowTimer;
@property (nonatomic) float slideShowTimerInterval;
@property (nonatomic) float slideShowFadeInDuration;
@property (nonatomic) int currentImageIndex;
@property (nonatomic) int imageWidth;
@property (nonatomic) int imageHeight;
@property (nonatomic) BOOL isRunningSlideShow;

@end
