/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADynamicsBehavior : CABehavior {
}

@property(copy) NSArray *forceFields;
@property(copy) NSArray *springs;
@property float angularDrag;
@property double collisionInterval;
@property float drag;
@property double minimumTimeStep;
@property BOOL reactsToCollisions;
@property float springScale;
@property float stoppedAngularVelocity;
@property float stoppedVelocity;
@property double timeStep;

+ (id)defaultValueForKey:(id)arg1;

- (struct Object { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (float)angularDrag;
- (double)collisionInterval;
- (float)drag;
- (id)forceFields;
- (double)minimumTimeStep;
- (BOOL)reactsToCollisions;
- (void)setAngularDrag:(float)arg1;
- (void)setCollisionInterval:(double)arg1;
- (void)setDrag:(float)arg1;
- (void)setForceFields:(id)arg1;
- (void)setMinimumTimeStep:(double)arg1;
- (void)setReactsToCollisions:(BOOL)arg1;
- (void)setSpringScale:(float)arg1;
- (void)setSprings:(id)arg1;
- (void)setStoppedAngularVelocity:(float)arg1;
- (void)setStoppedVelocity:(float)arg1;
- (void)setTimeStep:(double)arg1;
- (float)springScale;
- (id)springs;
- (float)stoppedAngularVelocity;
- (float)stoppedVelocity;
- (double)timeStep;

@end
