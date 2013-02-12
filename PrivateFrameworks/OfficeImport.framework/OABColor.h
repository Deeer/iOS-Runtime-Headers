/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABColor : NSObject {
}

+ (float)applyAlphaTransform:(id)arg1 toAlpha:(float)arg2;
+ (id)applyExpTransformWithValue:(float)arg1 toRgbColor:(id)arg2;
+ (id)applyHSLTransform:(id)arg1 toRgbColor:(id)arg2;
+ (id)applyRGBTransform:(id)arg1 toRgbColor:(id)arg2;
+ (id)applyTransforms:(id)arg1 toRgbColor:(id)arg2;
+ (unsigned short)eshSchemeColorIndexWithOADMapColorIndex:(NSInteger)arg1;
+ (NSInteger)oadMapColorIndexWithEshSchemeColorIndex:(unsigned short)arg1;
+ (struct EshColor { struct Data { NSInteger x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; })propertyColor:(NSInteger)arg1 colorPropertiesManager:(id)arg2;
+ (id)readColor:(const struct EshColor { struct Data { NSInteger x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; }*)arg1 colorPropertiesManager:(id)arg2 colorPalette:(id)arg3;
+ (NSInteger)readColorAdjustmentType:(NSInteger)arg1;
+ (NSInteger)readSystemColorID:(NSInteger)arg1;

@end
