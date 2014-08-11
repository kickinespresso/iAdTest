//
//  ViewController.h
//  iAdTest
//
//  Created by cj on 8/11/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>

@interface ViewController : UIViewController <ADBannerViewDelegate>

@property (strong, nonatomic) IBOutlet ADBannerView* bannerView;
@end
