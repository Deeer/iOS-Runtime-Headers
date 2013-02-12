/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColor, OADDash, OADFill, OADLineEnd, OADLineJoin;

@interface OADStroke : OADProperties <NSCopying> {
    unsigned int mIsColorOverridden : 1;
    unsigned int mIsCompoundTypeOverridden : 1;
    unsigned int mIsCapOverridden : 1;
    unsigned int mIsWidthOverridden : 1;
    unsigned int mIsJoinOverridden : 1;
    unsigned int mIsDashOverridden : 1;
    unsigned int mIsFillOverridden : 1;
    unsigned int mIsPenAlignmentOverridden : 1;
    unsigned char mCap;
    OADColor *mColor;
    unsigned char mCompoundType;
    OADDash *mDash;
    OADFill *mFill;
    OADLineEnd *mHead;
    OADLineJoin *mJoin;
    unsigned char mPenAlignment;
    OADLineEnd *mTail;
    float mWidth;
}

@property(retain) OADLineEnd *head;
@property(retain) OADLineEnd *tail;

+ (id)blackStroke;
+ (id)defaultProperties;
+ (id)nullStroke;

- (NSInteger)cap;
- (id)color;
- (NSInteger)compoundType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dash;
- (void)dealloc;
- (id)fill;
- (NSUInteger)hash;
- (id)head;
- (id)init;
- (id)initWithDefaults;
- (BOOL)isCapOverridden;
- (BOOL)isColorOverridden;
- (BOOL)isCompoundTypeOverridden;
- (BOOL)isDashOverridden;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFillOverridden;
- (BOOL)isJoinOverridden;
- (BOOL)isPenAlignmentOverridden;
- (BOOL)isWidthOverridden;
- (id)join;
- (NSInteger)penAlignment;
- (void)setCap:(NSInteger)arg1;
- (void)setColor:(id)arg1;
- (void)setCompoundType:(NSInteger)arg1;
- (void)setDash:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setHead:(id)arg1;
- (void)setJoin:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPenAlignment:(NSInteger)arg1;
- (void)setStyleColor:(id)arg1;
- (void)setTail:(id)arg1;
- (void)setWidth:(float)arg1;
- (id)tail;
- (float)width;

@end
