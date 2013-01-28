//
//  MGSAppDelegate.h
//  GRMustachio
//
//  Created by Mugginsoft on 22/01/2013.
//  MIT Licence
//

#import <Cocoa/Cocoa.h>

@interface MGSAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSTextView *JSONTextView;
@property (assign) IBOutlet NSTextView *templateTextView;
@property (assign) IBOutlet NSTextView *renderTextView;
@property (assign) IBOutlet NSObjectController *objectController;

@property (retain) NSString *JSONstring;
@property (retain) NSString *templateString;
@property (retain) NSString *renderString;
@property (nonatomic) NSUInteger contentType;

- (IBAction)renderAction:(id)sender;

@end
