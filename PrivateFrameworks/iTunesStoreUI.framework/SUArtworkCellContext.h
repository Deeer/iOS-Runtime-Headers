/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISURLOperationPool, SUImageCache, SUImageDataProvider, UIImage;

@interface SUArtworkCellContext : SUCellConfigurationContext {
    SUImageCache *_imageCache;
    ISURLOperationPool *_imagePool;
    SUImageDataProvider *_imageProvider;
    UIImage *_placeholderImage;
}

@property(retain) SUImageCache *imageCache;
@property(retain) ISURLOperationPool *imagePool;
@property(retain) SUImageDataProvider *imageProvider;
@property(retain) UIImage *placeholderImage;

- (void)dealloc;
- (id)imageCache;
- (id)imagePool;
- (id)imageProvider;
- (id)placeholderImage;
- (void)setImageCache:(id)arg1;
- (void)setImagePool:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;

@end
