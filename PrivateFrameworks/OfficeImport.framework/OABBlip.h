/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface OABBlip : NSObject {
     /* Encoded args for previous method: @12@0:4r^{OcBinaryData=^^?IIII*B^{SsrwOOStream}}8 */
     /* Encoded args for previous method: @12@0:4r^{EshMetafileBlipInfo=^S{UID=[16C]}{OcBinaryData=^^?IIII*B^{SsrwOOStream}}i{CsRect<long int>=[4l]}{CsPoint<long int>=[2l]}iCC}8 */
     /* Encoded args for previous method: @12@0:4r^{EshMetafileBlipInfo=^S{UID=[16C]}{OcBinaryData=^^?IIII*B^{SsrwOOStream}}i{CsRect<long int>=[4l]}{CsPoint<long int>=[2l]}iCC}8 */
     /* Encoded args for previous method: v16@0:4@8^{EshMetafileBlipInfo=^S{UID=[16C]}{OcBinaryData=^^?IIII*B^{SsrwOOStream}}i{CsRect<long int>=[4l]}{CsPoint<long int>=[2l]}iCC}12 */
     /* Encoded args for previous method: @16@0:4@8^{EshMetafileBlipInfo=^S{UID=[16C]}{OcBinaryData=^^?IIII*B^{SsrwOOStream}}i{CsRect<long int>=[4l]}{CsPoint<long int>=[2l]}iCC}12 */
}

+ (struct EshBlip { int (**x1)(); unsigned short x2; struct EshHeader { NSInteger x_3_1_1; NSUInteger x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; struct UID { unsigned char x_4_1_1[16]; } x4; }*)writeBlip:(id)arg1;
+ (NSInteger)blipTypeForBlipSignature:(NSInteger)arg1;
+ (id)compressMetafileData:(id)arg1 info:(struct EshMetafileBlipInfo { unsigned short *x1; struct UID { unsigned char x_2_1_1[16]; } x2; struct OcBinaryData { int (**x_3_1_1)(); NSUInteger x_3_1_2; NSUInteger x_3_1_3; NSUInteger x_3_1_4; NSUInteger x_3_1_5; char *x_3_1_6; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_3_1_7; struct SsrwOOStream {} *x_3_1_8; } x3; NSInteger x4; struct CsRect<long int> { long x_5_1_1[4]; } x5; struct CsPoint<long int> { long x_6_1_1[2]; } x6; NSInteger x7; unsigned char x8; unsigned char x9; }*)arg2;
+ (id)delayedSubBlipWithMetafileInfo:(const struct EshMetafileBlipInfo { unsigned short *x1; struct UID { unsigned char x_2_1_1[16]; } x2; struct OcBinaryData { int (**x_3_1_1)(); NSUInteger x_3_1_2; NSUInteger x_3_1_3; NSUInteger x_3_1_4; NSUInteger x_3_1_5; char *x_3_1_6; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_3_1_7; struct SsrwOOStream {} *x_3_1_8; } x3; NSInteger x4; struct CsRect<long int> { long x_5_1_1[4]; } x5; struct CsPoint<long int> { long x_6_1_1[2]; } x6; NSInteger x7; unsigned char x8; unsigned char x9; }*)arg1;
+ (id)dibFileContentsWithDibBlipData:(const struct OcBinaryData { int (**x1)(); NSUInteger x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; char *x6; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x7; struct SsrwOOStream {} *x8; }*)arg1;
+ (id)readBlipFromBse:(id)arg1;
+ (id)readBlipFromEshBlip:(struct EshBlip { int (**x1)(); unsigned short x2; struct EshHeader { NSInteger x_3_1_1; NSUInteger x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; struct UID { unsigned char x_4_1_1[16]; } x4; }*)arg1;
+ (void)setMetafileBoundsFromPictData:(id)arg1 info:(struct EshMetafileBlipInfo { unsigned short *x1; struct UID { unsigned char x_2_1_1[16]; } x2; struct OcBinaryData { int (**x_3_1_1)(); NSUInteger x_3_1_2; NSUInteger x_3_1_3; NSUInteger x_3_1_4; NSUInteger x_3_1_5; char *x_3_1_6; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_3_1_7; struct SsrwOOStream {} *x_3_1_8; } x3; NSInteger x4; struct CsRect<long int> { long x_5_1_1[4]; } x5; struct CsPoint<long int> { long x_6_1_1[2]; } x6; NSInteger x7; unsigned char x8; unsigned char x9; }*)arg2;
+ (id)subBlipWithMetafileInfo:(const struct EshMetafileBlipInfo { unsigned short *x1; struct UID { unsigned char x_2_1_1[16]; } x2; struct OcBinaryData { int (**x_3_1_1)(); NSUInteger x_3_1_2; NSUInteger x_3_1_3; NSUInteger x_3_1_4; NSUInteger x_3_1_5; char *x_3_1_6; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_3_1_7; struct SsrwOOStream {} *x_3_1_8; } x3; NSInteger x4; struct CsRect<long int> { long x_5_1_1[4]; } x5; struct CsPoint<long int> { long x_6_1_1[2]; } x6; NSInteger x7; unsigned char x8; unsigned char x9; }*)arg1;
+ (void)writeBlip:(id)arg1 toBlipStoreEntry:(struct EshBSE { int (**x1)(); unsigned short x2; struct EshHeader { NSInteger x_3_1_1; NSUInteger x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; struct EshBlip {} *x4; unsigned short *x5; NSUInteger x6; NSUInteger x7; NSUInteger x8; unsigned short x9; NSInteger x10; unsigned char x11; NSInteger x12; NSInteger x13; unsigned char x14; unsigned char x15; struct UID { unsigned char x_16_1_1[16]; } x16; }*)arg2;
+ (void)writeEmptyBlipStoreEntry:(struct EshBSE { int (**x1)(); unsigned short x2; struct EshHeader { NSInteger x_3_1_1; NSUInteger x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; struct EshBlip {} *x4; unsigned short *x5; NSUInteger x6; NSUInteger x7; NSUInteger x8; unsigned short x9; NSInteger x10; unsigned char x11; NSInteger x12; NSInteger x13; unsigned char x14; unsigned char x15; struct UID { unsigned char x_16_1_1[16]; } x16; }*)arg1;

@end
