//
//  DeveloperDetailView.h
//  Revels'17
//
//  Created by Abhishek Vora on 17/02/17.
//  Copyright © 2017 Abhishek Vora. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DeveloperDetailView : UIView

@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (weak, nonatomic) IBOutlet UIImageView *personImageView;
@property (weak, nonatomic) IBOutlet UILabel *personNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *personDetailLabel;

@property (nonatomic) CGPoint actualCenter;

- (void)setPersonName:(NSString *)personName personDetail:(NSString *)personDetail personImage:(UIImage *)personImage;

- (void)showInView:(UIView *)superview animatedFromAnchorPoint:(CGPoint)anchorPoint;
- (void)dismissFromView:(UIView *)superview;


@end
