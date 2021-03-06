/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLCommandEncoder : NSObject {
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    <MTLDevice> *_device;
    NSString *_label;
}

@property (nonatomic, readonly) <MTLDevice> *device;
@property (copy) NSString *label;

- (id)commandBuffer;
- (void)dealloc;
- (id)description;
- (id)device;
- (void)endEncoding;
- (id)initWithCommandBuffer:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (id)label;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setLabel:(id)arg1;

@end
