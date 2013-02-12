/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <EditPhotoControllerDelegate>, MLPhoto, NSArray, UIToolbar;

@interface EditPhotoController : UIViewController <PLCropPhotoControllerDelegate> {
    unsigned int _didInitializeNavigationItem : 1;
    unsigned int _toolbarWasHidden : 1;
    <EditPhotoControllerDelegate> *_delegate;
    MLPhoto *_editedPhoto;
    NSArray *_originalItems;
    UIToolbar *_toolbar;
}

@property <EditPhotoControllerDelegate> *delegate;
@property(readonly) MLPhoto *editedPhoto;
@property UIToolbar *toolbar;

- (void)cancelCropPhoto:(id)arg1;
- (void)cropPhoto:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)displayCropOverlay:(id)arg1;
- (void)editPhoto:(id)arg1 inParentController:(id)arg2;
- (id)editedPhoto;
- (id)navigationItem;
- (void)orderOut:(id)arg1;
- (void)rotatePhoto:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setToolbar:(id)arg1;
- (id)toolbar;
- (id)toolbarItems;

@end
