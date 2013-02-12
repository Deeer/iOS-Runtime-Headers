/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class <QLPreviewItem>, NSURLRequest, QLDisplayBundle, QLErrorLayer, QLPreviewConverter, QLProgressLayer, UIViewController;

@interface QLPreviewViewReserved : NSObject {
    unsigned int displayBundleVisible : 1;
    unsigned int errorVisible : 1;
    unsigned int itemReloaded : 1;
    unsigned int isHTMLContent : 1;
    unsigned int isPreviewReady : 1;
    unsigned int isZooming : 1;
    QLPreviewConverter *converter;
    id delegate;
    QLDisplayBundle *displayBundle;
    QLErrorLayer *errorLayer;
    <QLPreviewItem> *previewItem;
    NSURLRequest *previewRequest;
    QLProgressLayer *progressLayer;
    UIViewController *viewController;
}

- (void)dealloc;

@end
