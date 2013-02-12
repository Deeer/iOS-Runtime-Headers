/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapSupport.framework/MapSupport
 */

@class <RotationPopoverSizingDelegate>, UIBarButtonItem, UIView;

@interface RotationPopoverController : UIPopoverController {
    UIBarButtonItem *_barButtonItem;
    NSInteger _permittedArrowDirection;
    NSInteger _presentationMethod;
    UIView *_referencedView;
    <RotationPopoverSizingDelegate> *_sizingDelegate;
}

@property(retain) UIBarButtonItem *barButtonItem;
@property(retain) UIView *referencedView;
@property <RotationPopoverSizingDelegate> *sizingDelegate;
@property NSInteger permittedArrowDirection;
@property NSInteger presentationMethod;

- (void)_presentPopoverFromBarButtonItemAnimated:(BOOL)arg1;
- (void)_presentPopoverFromViewAnimated:(BOOL)arg1;
- (id)barButtonItem;
- (NSInteger)permittedArrowDirection;
- (void)presentPopoverAnimated:(BOOL)arg1;
- (NSInteger)presentationMethod;
- (id)referencedView;
- (void)setBarButtonItem:(id)arg1;
- (void)setPermittedArrowDirection:(NSInteger)arg1;
- (void)setPresentationMethod:(NSInteger)arg1;
- (void)setReferencedView:(id)arg1;
- (void)setSizingDelegate:(id)arg1;
- (id)sizingDelegate;

@end
