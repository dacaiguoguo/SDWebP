//
//  ViewController.m
//  SDWebP
//
//  Created by dacaiguoguo on 2021/7/20.
//

#import "ViewController.h"
@import VendorsSet;
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UIImageView *bgView = [[UIImageView alloc] initWithFrame:self.view.bounds];
    [self.view addSubview:bgView];
    SDImageWebPCoder *webPCoder = [SDImageWebPCoder sharedCoder];
    [[SDImageCodersManager sharedManager] addCoder:webPCoder];
    [bgView sd_setImageWithURL:[NSURL URLWithString:@"http://10.200.4.12/download/test.webp"] completed:^(UIImage * _Nullable image, NSError * _Nullable error, SDImageCacheType cacheType, NSURL * _Nullable imageURL) {
        NSLog(@"%@", error);
    }];
}


@end
