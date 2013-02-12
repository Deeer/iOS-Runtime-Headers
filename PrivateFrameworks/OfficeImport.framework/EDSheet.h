/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDColorReference, EDHeaderFooter, EDPageSetup, EDProcessors, EDString, EDWarnings, EDWorkbook, ESDContainer, NSMutableArray, SFUPointerKeyDictionary;

@interface EDSheet : OCDDelayedNode {
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
    SFUPointerKeyDictionary *mCommentMap;
    EDColorReference *mDefaultGridlineColorReference;
    NSMutableArray *mDrawables;
    ESDContainer *mEscherDrawing;
    EDHeaderFooter *mHeaderFooter;
    EDString *mName;
    EDPageSetup *mPageSetup;
    EDProcessors *mProcessors;
    SFUPointerKeyDictionary *mTextBoxMap;
    EDWarnings *mWarnings;
    EDWorkbook *mWorkbook;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mDisplayFormulas;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mDisplayGridlines;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mHidden;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mIsDialogSheet;
}

@property bool isDialogSheet;

+ (id)sheetWithWorkbook:(id)arg1;

- (void)addDrawable:(id)arg1;
- (void)applyProcessors;
- (void)dealloc;
- (id)defaultGridlineColor;
- (id)defaultGridlineColorReference;
- (void)doneWithNonRowContent;
- (id)drawableAtIndex:(NSUInteger)arg1;
- (NSUInteger)drawableCount;
- (id)drawableEnumerator;
- (id)drawables;
- (id)edCommentForESDObject:(id)arg1;
- (id)edTextBoxForESDObject:(id)arg1;
- (id)escherDrawing;
- (id)headerFooter;
- (id)initWithWorkbook:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isDialogSheet;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isDisplayFormulas;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isDisplayGridlines;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isHidden;
- (id)name;
- (id)pageSetup;
- (id)processors;
- (void)reduceMemoryIfPossible;
- (void)removeDrawableAtIndex:(NSUInteger)arg1;
- (void)setDefaultGridlineColor:(id)arg1;
- (void)setDefaultGridlineColorReference:(id)arg1;
- (void)setDisplayFormulas:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setDisplayGridlines:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setEDComment:(id)arg1 forESDObject:(id)arg2;
- (void)setEDTextBox:(id)arg1 forESDObject:(id)arg2;
- (void)setEscherDrawing:(id)arg1;
- (void)setHeaderFooter:(id)arg1;
- (void)setHidden:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setIsDialogSheet:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setName:(id)arg1;
- (void)setPageSetup:(id)arg1;
- (void)setup;
- (void)teardown;
- (id)warnings;
- (id)workbook;

@end
