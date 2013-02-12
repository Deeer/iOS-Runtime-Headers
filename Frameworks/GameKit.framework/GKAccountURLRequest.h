/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKAccountURLRequest : GKGetStoreBagValuesRequest {
    NSString *_authorizeURL;
    NSString *_editURL;
    NSString *_reportURL;
    NSString *_setupURL;
}

@property(retain) NSString *authorizeURL;
@property(retain) NSString *editURL;
@property(retain) NSString *reportURL;
@property(retain) NSString *setupURL;

- (id)authorizeURL;
- (void)dealloc;
- (id)editURL;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)init;
- (id)reportURL;
- (void)setAuthorizeURL:(id)arg1;
- (void)setEditURL:(id)arg1;
- (void)setReportURL:(id)arg1;
- (void)setSetupURL:(id)arg1;
- (id)setupURL;

@end
