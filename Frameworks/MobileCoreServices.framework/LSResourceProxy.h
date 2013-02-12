/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSArray, NSString, NSURL;

@interface LSResourceProxy : NSObject {
    NSString *_boundApplicationIdentifier;
    NSArray *_boundIconFileNames;
    BOOL _boundIconIsBadge;
    BOOL _boundIconIsPrerendered;
    NSURL *_boundResourcesDirURL;
    NSString *_boundRoleIdentifier;
    NSString *_localizedName;
}

@property(readonly) NSString *localizedName;

- (id)_initWithLocalizedName:(id)arg1 boundApplicationIdentifier:(id)arg2 boundRoleIdentifier:(id)arg3 boundResourcesDirectoryURL:(id)arg4 boundIconFileNames:(id)arg5 boundIconIsPrerendered:(BOOL)arg6 boundIconIsBadge:(BOOL)arg7;
- (id)_initWithLocalizedName:(id)arg1;
- (id)boundApplicationIdentifier;
- (id)boundIconFileNames;
- (BOOL)boundIconIsBadge;
- (BOOL)boundIconIsPrerendered;
- (id)boundResourcesDirectoryURL;
- (id)boundRoleIdentifier;
- (void)dealloc;
- (id)iconDataForVariant:(NSInteger)arg1;
- (id)localizedName;
- (void)setBoundApplicationIdentifier:(id)arg1;
- (void)setBoundIconFileNames:(id)arg1;
- (void)setBoundIconIsBadge:(BOOL)arg1;
- (void)setBoundIconIsPrerendered:(BOOL)arg1;
- (void)setBoundResourcesDirectoryURL:(id)arg1;
- (void)setBoundRoleIdentifier:(id)arg1;
- (void)setLocalizedName:(id)arg1;

@end
