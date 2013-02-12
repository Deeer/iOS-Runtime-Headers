/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@interface CPTextObject : CPChunk {
    struct CGPoint { 
        float x; 
        float y; 
    } anchor;
    double maxFontLineHeight;
    float maxFontSize;
    BOOL metricInfoCalculated;
}

- (void)calculateMetrics;
- (float)center;
- (void)clearCachedInfo;
- (double)maxFontLineHeight;
- (float)maxFontSize;
- (void)translateObjectYBy:(float)arg1;

@end
