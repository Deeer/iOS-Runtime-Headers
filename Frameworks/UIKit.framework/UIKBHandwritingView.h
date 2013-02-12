/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIKBHandwritingDelegateProtocol>, UIKBKeyboard;

@interface UIKBHandwritingView : UIKBKeyView {
    struct KBStrokeList { struct COWQueue<writing_point16_t> { 
            NSUInteger m_size; 
            NSUInteger m_capacity; 
            struct SharedElements {} *m_elements; 
        } x1; struct COWQueue<int> { 
            NSUInteger m_size; 
            NSUInteger m_capacity; 
            struct SharedElements {} *m_elements; 
    struct CGPoint { 
        float x; 
        float y; 
    BOOL _captureEnabled;
    <UIKBHandwritingDelegateProtocol> *_delegate;
    NSInteger _down;
    BOOL _inGesture;
    struct CGColor { } *_inkColor;
    struct CGImage { } *_inkMask;
    UIKBKeyboard *_keyboard;
    } _last;
    BOOL _stroked;
        } x2; NSInteger x3; } *_strokes;
}

- (BOOL)cancelTouchTracking;
- (BOOL)clear;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboard:(id)arg2 key:(id)arg3 state:(NSInteger)arg4;
- (void)send;
- (void)setDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateKeyboard:(id)arg1 key:(id)arg2;

@end
