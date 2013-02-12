/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, NSMutableDictionary, OADColorMap, OADColorScheme, OADDrawingGroup, OADFontScheme, OADStyleMatrix, OAVState, OAXClient, OAXTableStyleCache, OCPPackagePart;

@interface OAXDrawingState : NSObject {
    OAXClient *mClient;
    OADColorMap *mColorMap;
    OADColorScheme *mColorScheme;
    id mDocumentState;
    OADFontScheme *mFontScheme;
    OAVState *mOavState;
    OCPPackagePart *mPackagePart;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mSrcURLToTgtBlipIndexMap;
    NSMutableDictionary *mSrcURLToTgtBulletBlipIndexMap;
    OADStyleMatrix *mStyleMatrix;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableArray *mTgtBulletBlips;
    OADDrawingGroup *mTgtDrawingGroup;
}

- (id)blipRefForURL:(id)arg1;
- (id)blipRefWithURL:(id)arg1 blipArray:(id)arg2 blipURLtoIndexMap:(id)arg3;
- (id)bulletBlipRefForURL:(id)arg1;
- (void)clearDrawableForShapeIdMap;
- (id)client;
- (id)colorMap;
- (id)colorScheme;
- (void)dealloc;
- (id)documentState;
- (id)drawableForShapeId:(unsigned long)arg1;
- (id)fontScheme;
- (id)init;
- (id)initWithClient:(id)arg1;
- (id)oavState;
- (id)packagePart;
- (void)setColorMap:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setDrawable:(id)arg1 forShapeId:(unsigned long)arg2;
- (void)setFontScheme:(id)arg1;
- (void)setOavState:(id)arg1;
- (void)setPackagePart:(id)arg1;
- (void)setStyleMatrix:(id)arg1;
- (void)setTableStyleCache:(id)arg1;
- (void)setTargetBulletBlipArray:(id)arg1;
- (void)setTargetDrawingGroup:(id)arg1;
- (id)styleMatrix;
- (id)tableStyleCache;
- (id)targetDrawingGroup;

@end
