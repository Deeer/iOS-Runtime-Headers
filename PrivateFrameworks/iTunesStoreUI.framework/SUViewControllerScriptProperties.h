/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUGradient, UIColor;

@interface SUViewControllerScriptProperties : NSObject <NSCoding, NSCopying> {
    UIColor *_backgroundColor;
    BOOL _doubleTapEnabled;
    NSInteger _loadingIndicatorStyle;
    UIColor *_loadingTextColor;
    UIColor *_loadingTextShadowColor;
    SUGradient *_placeholderBackgroundGradient;
    BOOL _scrollingDisabled;
    BOOL _shouldLoadProgressively;
    BOOL _shouldShowFormAccessory;
    BOOL _showsBackgroundShadow;
    UIColor *_topExtensionColor;
}

@property(retain) UIColor *backgroundColor;
@property(retain) UIColor *loadingTextColor;
@property(retain) UIColor *loadingTextShadowColor;
@property(retain) SUGradient *placeholderBackgroundGradient;
@property(retain) UIColor *topExtensionColor;
@property(getter=isDoubleTapEnabled) BOOL doubleTapEnabled;
@property NSInteger loadingIndicatorStyle;
@property(getter=isScrollingDisabled) BOOL scrollingDisabled;
@property BOOL shouldLoadProgressively;
@property BOOL shouldShowFormAccessory;
@property BOOL showsBackgroundShadow;

- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDoubleTapEnabled;
- (BOOL)isScrollingDisabled;
- (NSInteger)loadingIndicatorStyle;
- (id)loadingTextColor;
- (id)loadingTextShadowColor;
- (id)placeholderBackgroundGradient;
- (void)setBackgroundColor:(id)arg1;
- (void)setDoubleTapEnabled:(BOOL)arg1;
- (void)setLoadingIndicatorStyle:(NSInteger)arg1;
- (void)setLoadingTextColor:(id)arg1;
- (void)setLoadingTextShadowColor:(id)arg1;
- (void)setPlaceholderBackgroundGradient:(id)arg1;
- (void)setScrollingDisabled:(BOOL)arg1;
- (void)setShouldLoadProgressively:(BOOL)arg1;
- (void)setShouldShowFormAccessory:(BOOL)arg1;
- (void)setShowsBackgroundShadow:(BOOL)arg1;
- (void)setTopExtensionColor:(id)arg1;
- (BOOL)shouldLoadProgressively;
- (BOOL)shouldShowFormAccessory;
- (BOOL)showsBackgroundShadow;
- (id)topExtensionColor;

@end
