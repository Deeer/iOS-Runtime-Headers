/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSKeyValueAccessor : NSObject {
    int (*_implementation)();
    id _containerClassID;
    void *_extraArgument1;
    void *_extraArgument2;
    void *_extraArgument3;
    NSUInteger _extraArgumentCount;
    NSString *_key;
    SEL _selector;
}

- (id)containerClassID;
- (void)dealloc;
- (void*)extraArgument1;
- (void*)extraArgument2;
- (NSUInteger)extraArgumentCount;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 implementation:(int (*)())arg3 selector:(SEL)arg4 extraArguments:(void*[3])arg5 count:(NSUInteger)arg6;
- (id)key;
- (SEL)selector;

@end
