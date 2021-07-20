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
    [bgView sd_setImageWithURL:[NSURL URLWithString:@"http://testabc.com/download/test.webp"]];
}


@end
