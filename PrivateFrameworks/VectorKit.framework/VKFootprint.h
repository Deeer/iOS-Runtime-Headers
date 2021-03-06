/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKFootprint : NSObject {
    struct { 
        double x0; 
        double x1; 
        double y0; 
        double y1; 
    } _boundingRect;
    double _centerDepth;
    struct VKFootprintConvexHull_struct { 
        int edgeCount; 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } edgeOrigin[6]; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } edgeNormal[6]; 
    } _convexHull;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _cornerGroundPoints;
    int _cornerGroundPointsCount;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _furthestGroundPoint;
    double _maxDepth;
    double _maxDistance;
    double _minDepth;
    double _minDistance;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _nearestGroundPoint;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } boundingRect;
@property (nonatomic, readonly) double centerDepth;
@property (nonatomic, readonly) struct VKFootprintConvexHull_struct { int x1; struct VKPoint { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2[6]; /* Warning: unhandled struct encoding: '{Matrix<double' */ struct x3[6]; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; struct x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; } convexHull; /* unknown property attribute:  1>=[3d]}]} */
@property (nonatomic, readonly) struct VKPoint { double x1; double x2; double x3; }*cornerGroundPoints;
@property (nonatomic, readonly) int cornerGroundPointsCount;
@property (nonatomic, readonly) struct VKPoint { double x1; double x2; double x3; } furthestGroundPoint;
@property (nonatomic, readonly) double maxDepth;
@property (nonatomic, readonly) double minDepth;
@property (nonatomic, readonly) struct VKPoint { double x1; double x2; double x3; } nearestGroundPoint;

- (id).cxx_construct;
- (struct { double x1; double x2; double x3; double x4; })_expandedBoundingRect;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationRectTest;
- (struct { double x1; double x2; double x3; double x4; })boundingRect;
- (double)centerDepth;
- (void)computeFromCamera:(id)arg1;
- (BOOL)containsGroundPoint:(struct VKPoint { double x1; double x2; double x3; }*)arg1;
- (struct VKFootprintConvexHull_struct { int x1; struct VKPoint { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2[6]; struct Matrix<double, 3, 1> { double x_3_1_1[3]; } x3[6]; })convexHull;
- (struct VKPoint { double x1; double x2; double x3; }*)cornerGroundPoints;
- (int)cornerGroundPointsCount;
- (struct VKPoint { double x1; double x2; double x3; })furthestGroundPoint;
- (double)maxDepth;
- (double)minDepth;
- (struct VKPoint { double x1; double x2; double x3; })nearestGroundPoint;
- (BOOL)rejectsRect:(const struct { double x1; double x2; double x3; double x4; }*)arg1;

@end
