/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextBodyAutoFit, OADTextWarp;

@interface OADTextBodyProperties : OADProperties {
    unsigned int mRepectFirstLastParagraphSpacing : 1;
    unsigned int mIsUpright : 1;
    unsigned int mIsAnchorCenter : 1;
    unsigned int mIsLeftToRightColumns : 1;
    unsigned int mHasVerticalOverflowType : 1;
    unsigned int mHasHorizontalOverflowType : 1;
    unsigned int mHasTextBodyId : 1;
    unsigned int mHasVerticalType : 1;
    unsigned int mHasWrapType : 1;
    unsigned int mHasTextAnchorType : 1;
    unsigned int mHasIsAnchorCenter : 1;
    unsigned int mHasIsUpright : 1;
    unsigned int mHasRotation : 1;
    unsigned int mHasColumnCount : 1;
    unsigned int mHasColumnSpacing : 1;
    unsigned int mHasIsLeftToRightColumns : 1;
    unsigned int mHasRepectFirstLastParagraphSpacing : 1;
    unsigned int mHasTopInset : 1;
    unsigned int mHasLeftInset : 1;
    unsigned int mHasRightInset : 1;
    unsigned int mHasBottomInset : 1;
    OADTextBodyAutoFit *mAutoFit;
    double mBottomInset;
    unsigned short mColumnCount;
    double mColumnSpacing;
    unsigned char mHorizontalOverflowType;
    double mLeftInset;
    double mRightInset;
    double mRotation;
    unsigned char mTextAnchorType;
    unsigned short mTextBodyId;
    OADTextWarp *mTextWarp;
    double mTopInset;
    unsigned char mVerticalOverflowType;
    unsigned char mVerticalType;
    unsigned char mWrapType;
}

+ (id)defaultEscherWordArtProperties;
+ (id)defaultProperties;

- (id)autoFit;
- (double)bottomInset;
- (NSInteger)columnCount;
- (double)columnSpacing;
- (void)dealloc;
- (BOOL)hasAutoFit;
- (BOOL)hasBottomInset;
- (BOOL)hasColumnCount;
- (BOOL)hasColumnSpacing;
- (BOOL)hasHorizontalOverflowType;
- (BOOL)hasIsAnchorCenter;
- (BOOL)hasIsLeftToRightColumns;
- (BOOL)hasIsUpright;
- (BOOL)hasLeftInset;
- (BOOL)hasRespectLastFirstLineSpacing;
- (BOOL)hasRightInset;
- (BOOL)hasRotation;
- (BOOL)hasTextAnchorType;
- (BOOL)hasTextBodyId;
- (BOOL)hasTextWarp;
- (BOOL)hasTopInset;
- (BOOL)hasVerticalOverflowType;
- (BOOL)hasVerticalType;
- (BOOL)hasWrapType;
- (NSUInteger)hash;
- (NSInteger)horizontalOverflowType;
- (id)init;
- (id)initWithDefaults;
- (BOOL)isAnchorCenter;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLeftToRightColumns;
- (BOOL)isUpright;
- (double)leftInset;
- (void)removeUnnecessaryOverrides;
- (BOOL)respectLastFirstLineSpacing;
- (double)rightInset;
- (double)rotation;
- (void)setAutoFit:(id)arg1;
- (void)setBottomInset:(double)arg1;
- (void)setColumnCount:(NSInteger)arg1;
- (void)setColumnSpacing:(double)arg1;
- (void)setHorizontalOverflowType:(NSInteger)arg1;
- (void)setIsAnchorCenter:(BOOL)arg1;
- (void)setIsLeftToRightColumns:(BOOL)arg1;
- (void)setIsUpright:(BOOL)arg1;
- (void)setLeftInset:(double)arg1;
- (void)setRespectLastFirstLineSpacing:(BOOL)arg1;
- (void)setRightInset:(double)arg1;
- (void)setRotation:(double)arg1;
- (void)setTextAnchorType:(NSInteger)arg1;
- (void)setTextBodyId:(NSInteger)arg1;
- (void)setTextWarp:(id)arg1;
- (void)setTopInset:(double)arg1;
- (void)setVerticalOverflowType:(NSInteger)arg1;
- (void)setVerticalType:(NSInteger)arg1;
- (void)setWrapType:(NSInteger)arg1;
- (NSInteger)textAnchorType;
- (NSInteger)textBodyId;
- (id)textWarp;
- (double)topInset;
- (NSInteger)verticalOverflowType;
- (NSInteger)verticalType;
- (NSInteger)wrapType;

@end
