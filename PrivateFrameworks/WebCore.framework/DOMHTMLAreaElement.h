/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLAreaElement : DOMHTMLElement {
}

@property(copy,readonly) NSURL *absoluteLinkURL;
@property(copy) NSString *accessKey;
@property(copy) NSString *alt;
@property(copy) NSString *coords;
@property(copy,readonly) NSString *hashName;
@property(copy,readonly) NSString *host;
@property(copy,readonly) NSString *hostname;
@property(copy) NSString *href;
@property(copy,readonly) NSString *pathname;
@property(copy,readonly) NSString *port;
@property(copy,readonly) NSString *protocol;
@property(copy,readonly) NSString *search;
@property(copy) NSString *shape;
@property(copy) NSString *target;
@property BOOL noHref;

- (id)absoluteLinkURL;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })absoluteQuadWithOwner:(id)arg1;
- (id)absoluteQuadsAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)absoluteQuadsWithOwner:(id)arg1;
- (id)accessKey;
- (id)alt;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBoxWithOwner:(id)arg1;
- (id)boundingBoxesWithOwner:(id)arg1;
- (id)coords;
- (id)hashName;
- (id)host;
- (id)hostname;
- (id)href;
- (BOOL)noHref;
- (id)pathname;
- (id)port;
- (id)protocol;
- (id)search;
- (void)setAccessKey:(id)arg1;
- (void)setAlt:(id)arg1;
- (void)setCoords:(id)arg1;
- (void)setHref:(id)arg1;
- (void)setNoHref:(BOOL)arg1;
- (void)setShape:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)shape;
- (id)target;

@end
