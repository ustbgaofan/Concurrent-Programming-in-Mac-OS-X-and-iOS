//
//  GCDAppDelegate.h
//  GCD
//
//  Created by Vandad Nahavandipoor on 11-04-06.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GCDAppDelegate : NSObject <UIApplicationDelegate> {
@protected
  NSString    *stringProperty;
}

@property (nonatomic, retain) NSString    *stringProperty;
@property (nonatomic, retain) IBOutlet UIWindow *window;

@end
