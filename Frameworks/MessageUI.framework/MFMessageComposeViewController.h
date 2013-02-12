/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMessageComposeViewControllerDelegate>, NSArray, NSString;

@interface MFMessageComposeViewController : UINavigationController {
    NSString *_body;
    <MFMessageComposeViewControllerDelegate> *_messageComposeDelegate;
    NSArray *_recipients;
}

@property(copy) NSString *body;
@property <MFMessageComposeViewControllerDelegate> *messageComposeDelegate;
@property(copy) NSArray *recipients;

+ (BOOL)canSendText;

- (id)body;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)messageComposeDelegate;
- (id)recipients;
- (void)setBody:(id)arg1;
- (void)setMessageComposeDelegate:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
