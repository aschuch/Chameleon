//
//  Chameleon.h
//  Chameleon
//
//  Created by Vicc Alexander on 9/24/15.
//  Copyright © 2015 Vicc Alexander. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Chameleon.
FOUNDATION_EXPORT double ChameleonVersionNumber;

//! Project version string for Chameleon.
FOUNDATION_EXPORT const unsigned char ChameleonVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Chameleon/PublicHeader.h>

#import "Chameleon_.h"

#import "UIColor+ChameleonPrivate.h"

#import "NSArray+Chameleon.h"
#import "UIColor+Chameleon.h"

#if TARGET_OS_IOS
#import "UIButton+Chameleon.h"
#import "UILabel+Chameleon.h"

#import "UIImage+ChameleonPrivate.h"
#import "UIView+ChameleonPrivate.h"
#import "UIAppearance+Swift.h"

#import "UINavigationController+Chameleon.h"
#import "UIViewController+Chameleon.h"
#endif // TARGET_OS_IOS