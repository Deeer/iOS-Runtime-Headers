/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class NSLock, UIPDFAccessoryView, UIPDFContentLayer, UIPDFContentLayerDelegate, UIPDFDocumentLayout, UIPDFMagnifier, UIPDFScrollViewDelegate, UIPDFSelectionLayer, UIPDFViewTouchHandler;

@interface UIPDFViewPrivateVars : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    UIPDFAccessoryView *accessoryView;
    float baseDocumentScale;
    UIPDFContentLayer *contentLayer;
    UIPDFContentLayerDelegate *contentLayerDelegate;
    } contentOffset;
    } contentSize;
    float documentScale;
    UIPDFViewTouchHandler *gestureHandler;
    BOOL laidOutSubviews;
    UIPDFDocumentLayout *layout;
    NSLock *lock_accessSelection;
    UIPDFMagnifier *magnifier;
    } originalFrame;
    struct UIPDFPageLayout { } *pageLayout;
    BOOL portraitMode;
    UIPDFScrollViewDelegate *scrollViewDelegate;
    UIPDFSelectionLayer *selectionLayer;
    } viewOffset;
}

@end
