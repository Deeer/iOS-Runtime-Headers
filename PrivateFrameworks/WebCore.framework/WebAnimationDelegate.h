/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CALayer, WebAnimationDelegate, WebLayer;

@interface WebAnimationDelegate : NSObject {
    struct GraphicsLayerCA { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x3; struct IntSize { 
            NSInteger m_width; 
            NSInteger m_height; 
        } x4; struct FloatPoint { 
            float m_x; 
            float m_y; 
        } x5; struct FloatPoint3D { 
            float m_x; 
            float m_y; 
            float m_z; 
        } x6; struct FloatSize { 
            float m_width; 
            float m_height; 
        } x7; struct TransformationMatrix { 
            double m_matrix[4][4]; 
        } x8; struct TransformationMatrix { 
            double m_matrix[4][4]; 
        } x9; struct Color { 
            NSUInteger m_color; 
            /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*m_valid; 
        } x10; float x11; float x12; float x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; NSInteger x21; NSInteger x22; NSInteger x23; struct Vector<WebCore::GraphicsLayer*,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { 
                struct GraphicsLayer {} **m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x24; struct GraphicsLayer {} *x25; struct GraphicsLayer {} *x26; struct GraphicsLayer {} *x27; struct GraphicsLayer {} *x28; struct FloatPoint { 
            float m_x; 
            float m_y; 
        } x29; struct IntRect { 
            struct IntPoint { 
                NSInteger m_x; 
                NSInteger m_y; 
            } m_location; 
            struct IntSize { 
                NSInteger m_width; 
                NSInteger m_height; 
            } m_size; 
        } x30; NSInteger x31; struct RetainPtr<WebLayer> { 
            WebLayer *m_ptr; 
        } x32; struct RetainPtr<CALayer> { 
            CALayer *m_ptr; 
        } x33; struct RetainPtr<CALayer> { 
            CALayer *m_ptr; 
        } x34; struct OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > > { 
            struct HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > > {} *m_ptr; 
        } x35; struct OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > > { 
            struct HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > > {} *m_ptr; 
        } x36; struct OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > > { 
            struct HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > > {} *m_ptr; 
        } x37; NSInteger x38; unsigned int x39 : 1; struct RetainPtr<WebAnimationDelegate> { 
            WebAnimationDelegate *m_ptr; 
        } x40; struct RetainPtr<CGImage*> { 
            struct CGImage {} *m_ptr; 
        } x41; struct Vector<WebCore::GraphicsLayerCA::LayerAnimation,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WebCore::GraphicsLayerCA::LayerAnimation,0ul> { 
                struct LayerAnimation {} *m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x42; struct HashSet<int,WTF::IntHash<unsigned int>,WTF::HashTraits<int> > { 
            struct HashTable<int,int,WTF::IdentityExtractor<int>,WTF::IntHash<unsigned int>,WTF::HashTraits<int>,WTF::HashTraits<int> > { 
                NSInteger *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x43; struct HashMap<WebCore::String,WebCore::GraphicsLayerCA::AnimationProcessingAction,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WebCore::GraphicsLayerCA::AnimationProcessingAction> > { 
            struct HashTable<WebCore::String,std::pair<WebCore::String, WebCore::GraphicsLayerCA::AnimationProcessingAction>,WTF::PairFirstExtractor<std::pair<WebCore::String, WebCore::GraphicsLayerCA::AnimationProcessingAction> >,WebCore::StringHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::String>, WTF::HashTraits<WebCore::GraphicsLayerCA::AnimationProcessingAction> >,WTF::HashTraits<WebCore::String> > { 
                struct pair<WebCore::String,WebCore::GraphicsLayerCA::AnimationProcessingAction> {} *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x44; struct HashMap<WebCore::String,WTF::Vector<std::pair<int, int>, 0ul>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::Vector<std::pair<int, int>, 0ul> > > { 
            struct HashTable<WebCore::String,std::pair<WebCore::String, WTF::Vector<std::pair<int, int>, 0ul> >,WTF::PairFirstExtractor<std::pair<WebCore::String, WTF::Vector<std::pair<int, int>, 0ul> > >,WebCore::StringHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::Vector<std::pair<int, int>, 0ul> > >,WTF::HashTraits<WebCore::String> > { 
                struct pair<WebCore::String,WTF::Vector<std::pair<int, int>, 0ul> > {} *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x45; struct Vector<WebCore::FloatRect,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WebCore::FloatRect,0ul> { 
                struct FloatRect {} *m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
     /* Encoded args for previous method: v12@0:4^{GraphicsLayerCA=^^?^{GraphicsLayerClient}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{IntSize=ii}{FloatPoint=ff}{FloatPoint3D=fff}{FloatSize=ff}{TransformationMatrix=[4[4d]]}{TransformationMatrix=[4[4d]]}{Color=IB}fffb1b1b1b1b1b1b1iii{Vector<WebCore::GraphicsLayer*,0ul>=I{VectorBuffer<WebCore::GraphicsLayer*,0ul>=^^{GraphicsLayer}I}}^{GraphicsLayer}^{GraphicsLayer}^{GraphicsLayer}^{GraphicsLayer}{FloatPoint=ff}{IntRect={IntPoint=ii}{IntSize=ii}}i{RetainPtr<WebLayer>=@}{RetainPtr<CALayer>=@}{RetainPtr<CALayer>=@}{OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > >=^{HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > >}}{OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > >=^{HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > >}}{OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > >=^{HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > >}}ib1{RetainPtr<WebAnimationDelegate>=@}{RetainPtr<CGImage*>=^{CGImage}}{Vector<WebCore::GraphicsLayerCA::LayerAnimation,0ul>=I{VectorBuffer<WebCore::GraphicsLayerCA::LayerAnimation,0ul>=^{LayerAnimation}I}}{HashSet<int,WTF::IntHash<unsigned int>,WTF::HashTraits<int> >={HashTable<int,int,WTF::IdentityExtractor<int>,WTF::IntHash<unsigned int>,WTF::HashTraits<int>,WTF::HashTraits<int> >=^iiiii}}{HashMap<WebCore::String,WebCore::GraphicsLayerCA::AnimationProcessingAction,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WebCore::GraphicsLayerCA::AnimationProcessingAction> >={HashTable<WebCore::String,std::pair<WebCore::String, WebCore::GraphicsLayerCA::AnimationProcessingAction>,WTF::PairFirstExtractor<std::pair<WebCore::String, WebCore::GraphicsLayerCA::AnimationProcessingAction> >,WebCore::StringHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::String>, WTF::HashTraits<WebCore::GraphicsLayerCA::AnimationProcessingAction> >,WTF::HashTraits<WebCore::String> >=^{pair<WebCore::String,WebCore::GraphicsLayerCA::AnimationProcessingAction>}iiii}}{HashMap<WebCore::String,WTF::Vector<std::pair<int, int>, 0ul>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::Vector<std::pair<int, int>, 0ul> > >={HashTable<WebCore::String,std::pair<WebCore::String, WTF::Vector<std::pair<int, int>, 0ul> >,WTF::PairFirstExtractor<std::pair<WebCore::String, WTF::Vector<std::pair<int, int>, 0ul> > >,WebCore::StringHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::Vector<std::pair<int, int>, 0ul> > >,WTF::HashTraits<WebCore::String> >=^{pair<WebCore::String,WTF::Vector<std::pair<int, int>, 0ul> >}iiii}}{Vector<WebCore::FloatRect,0ul>=I{VectorBuffer<WebCore::FloatRect,0ul>=^{FloatRect}I}}I}8 */
     /* Encoded args for previous method: ^{GraphicsLayerCA=^^?^{GraphicsLayerClient}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{IntSize=ii}{FloatPoint=ff}{FloatPoint3D=fff}{FloatSize=ff}{TransformationMatrix=[4[4d]]}{TransformationMatrix=[4[4d]]}{Color=IB}fffb1b1b1b1b1b1b1iii{Vector<WebCore::GraphicsLayer*,0ul>=I{VectorBuffer<WebCore::GraphicsLayer*,0ul>=^^{GraphicsLayer}I}}^{GraphicsLayer}^{GraphicsLayer}^{GraphicsLayer}^{GraphicsLayer}{FloatPoint=ff}{IntRect={IntPoint=ii}{IntSize=ii}}i{RetainPtr<WebLayer>=@}{RetainPtr<CALayer>=@}{RetainPtr<CALayer>=@}{OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > >=^{HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > >}}{OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > >=^{HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > >}}{OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > >=^{HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > >}}ib1{RetainPtr<WebAnimationDelegate>=@}{RetainPtr<CGImage*>=^{CGImage}}{Vector<WebCore::GraphicsLayerCA::LayerAnimation,0ul>=I{VectorBuffer<WebCore::GraphicsLayerCA::LayerAnimation,0ul>=^{LayerAnimation}I}}{HashSet<int,WTF::IntHash<unsigned int>,WTF::HashTraits<int> >={HashTable<int,int,WTF::IdentityExtractor<int>,WTF::IntHash<unsigned int>,WTF::HashTraits<int>,WTF::HashTraits<int> >=^iiiii}}{HashMap<WebCore::String,WebCore::GraphicsLayerCA::AnimationProcessingAction,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WebCore::GraphicsLayerCA::AnimationProcessingAction> >={HashTable<WebCore::String,std::pair<WebCore::String, WebCore::GraphicsLayerCA::AnimationProcessingAction>,WTF::PairFirstExtractor<std::pair<WebCore::String, WebCore::GraphicsLayerCA::AnimationProcessingAction> >,WebCore::StringHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::String>, WTF::HashTraits<WebCore::GraphicsLayerCA::AnimationProcessingAction> >,WTF::HashTraits<WebCore::String> >=^{pair<WebCore::String,WebCore::GraphicsLayerCA::AnimationProcessingAction>}iiii}}{HashMap<WebCore::String,WTF::Vector<std::pair<int, int>, 0ul>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::Vector<std::pair<int, int>, 0ul> > >={HashTable<WebCore::String,std::pair<WebCore::String, WTF::Vector<std::pair<int, int>, 0ul> >,WTF::PairFirstExtractor<std::pair<WebCore::String, WTF::Vector<std::pair<int, int>, 0ul> > >,WebCore::StringHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::Vector<std::pair<int, int>, 0ul> > >,WTF::HashTraits<WebCore::String> >=^{pair<WebCore::String,WTF::Vector<std::pair<int, int>, 0ul> >}iiii}}{Vector<WebCore::FloatRect,0ul>=I{VectorBuffer<WebCore::FloatRect,0ul>=^{FloatRect}I}}I}8@0:4 */
        } x46; NSUInteger x47; } *m_graphicsLayer;
}

- (struct GraphicsLayerCA { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct IntSize { NSInteger x_4_1_1; NSInteger x_4_1_2; } x4; struct FloatPoint { float x_5_1_1; float x_5_1_2; } x5; struct FloatPoint3D { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct FloatSize { float x_7_1_1; float x_7_1_2; } x7; struct TransformationMatrix { double x_8_1_1[4][4]; } x8; struct TransformationMatrix { double x_9_1_1[4][4]; } x9; struct Color { NSUInteger x_10_1_1; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_10_1_2; } x10; float x11; float x12; float x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; NSInteger x21; NSInteger x22; NSInteger x23; struct Vector<WebCore::GraphicsLayer*,0ul> { NSUInteger x_24_1_1; struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { struct GraphicsLayer {} **x_2_2_1; NSUInteger x_2_2_2; } x_24_1_2; } x24; struct GraphicsLayer {} *x25; struct GraphicsLayer {} *x26; struct GraphicsLayer {} *x27; struct GraphicsLayer {} *x28; struct FloatPoint { float x_29_1_1; float x_29_1_2; } x29; struct IntRect { struct IntPoint { NSInteger x_1_2_1; NSInteger x_1_2_2; } x_30_1_1; struct IntSize { NSInteger x_2_2_1; NSInteger x_2_2_2; } x_30_1_2; } x30; NSInteger x31; struct RetainPtr<WebLayer> { id x_32_1_1; } x32; struct RetainPtr<CALayer> { id x_33_1_1; } x33; struct RetainPtr<CALayer> { id x_34_1_1; } x34; struct OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > > { struct HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > > {} *x_35_1_1; } x35; struct OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > > { struct HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > > {} *x_36_1_1; } x36; struct OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > > { struct HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > > {} *x_37_1_1; } x37; NSInteger x38; unsigned int x39 : 1; struct RetainPtr<WebAnimationDelegate> { id x_40_1_1; } x40; struct RetainPtr<CGImage*> { struct CGImage {} *x_41_1_1; } x41; struct Vector<WebCore::GraphicsLayerCA::LayerAnimation,0ul> { NSUInteger x_42_1_1; struct VectorBuffer<WebCore::GraphicsLayerCA::LayerAnimation,0ul> { struct LayerAnimation {} *x_2_2_1; NSUInteger x_2_2_2; } x_42_1_2; } x42; struct HashSet<int,WTF::IntHash<unsigned int>,WTF::HashTraits<int> > { struct HashTable<int,int,WTF::IdentityExtractor<int>,WTF::IntHash<unsigned int>,WTF::HashTraits<int>,WTF::HashTraits<int> > { NSInteger *x_1_2_1; NSInteger x_1_2_2; NSInteger x_1_2_3; NSInteger x_1_2_4; NSInteger x_1_2_5; } x_43_1_1; } x43; struct HashMap<WebCore::String,WebCore::GraphicsLayerCA::AnimationProcessingAction,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WebCore::GraphicsLayerCA::AnimationProcessingAction> > { struct HashTable<WebCore::String,std::pair<WebCore::String, WebCore::GraphicsLayerCA::AnimationProcessingAction>,WTF::PairFirstExtractor<std::pair<WebCore::String, WebCore::GraphicsLayerCA::AnimationProcessingAction> >,WebCore::StringHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::String>, WTF::HashTraits<WebCore::GraphicsLayerCA::AnimationProcessingAction> >,WTF::HashTraits<WebCore::String> > { struct pair<WebCore::String,WebCore::GraphicsLayerCA::AnimationProcessingAction> {} *x_1_2_1; NSInteger x_1_2_2; NSInteger x_1_2_3; NSInteger x_1_2_4; NSInteger x_1_2_5; } x_44_1_1; } x44; struct HashMap<WebCore::String,WTF::Vector<std::pair<int, int>, 0ul>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::Vector<std::pair<int, int>, 0ul> > > { struct HashTable<WebCore::String,std::pair<WebCore::String, WTF::Vector<std::pair<int, int>, 0ul> >,WTF::PairFirstExtractor<std::pair<WebCore::String, WTF::Vector<std::pair<int, int>, 0ul> > >,WebCore::StringHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::Vector<std::pair<int, int>, 0ul> > >,WTF::HashTraits<WebCore::String> > { struct pair<WebCore::String,WTF::Vector<std::pair<int, int>, 0ul> > {} *x_1_2_1; NSInteger x_1_2_2; NSInteger x_1_2_3; NSInteger x_1_2_4; NSInteger x_1_2_5; } x_45_1_1; } x45; struct Vector<WebCore::FloatRect,0ul> { NSUInteger x_46_1_1; struct VectorBuffer<WebCore::FloatRect,0ul> { struct FloatRect {} *x_2_2_1; NSUInteger x_2_2_2; } x_46_1_2; } x46; NSUInteger x47; }*)graphicsLayer;
- (void)animationDidStart:(id)arg1;
- (void)setLayer:(struct GraphicsLayerCA { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct IntSize { NSInteger x_4_1_1; NSInteger x_4_1_2; } x4; struct FloatPoint { float x_5_1_1; float x_5_1_2; } x5; struct FloatPoint3D { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct FloatSize { float x_7_1_1; float x_7_1_2; } x7; struct TransformationMatrix { double x_8_1_1[4][4]; } x8; struct TransformationMatrix { double x_9_1_1[4][4]; } x9; struct Color { NSUInteger x_10_1_1; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_10_1_2; } x10; float x11; float x12; float x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; NSInteger x21; NSInteger x22; NSInteger x23; struct Vector<WebCore::GraphicsLayer*,0ul> { NSUInteger x_24_1_1; struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { struct GraphicsLayer {} **x_2_2_1; NSUInteger x_2_2_2; } x_24_1_2; } x24; struct GraphicsLayer {} *x25; struct GraphicsLayer {} *x26; struct GraphicsLayer {} *x27; struct GraphicsLayer {} *x28; struct FloatPoint { float x_29_1_1; float x_29_1_2; } x29; struct IntRect { struct IntPoint { NSInteger x_1_2_1; NSInteger x_1_2_2; } x_30_1_1; struct IntSize { NSInteger x_2_2_1; NSInteger x_2_2_2; } x_30_1_2; } x30; NSInteger x31; struct RetainPtr<WebLayer> { id x_32_1_1; } x32; struct RetainPtr<CALayer> { id x_33_1_1; } x33; struct RetainPtr<CALayer> { id x_34_1_1; } x34; struct OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > > { struct HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > > {} *x_35_1_1; } x35; struct OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > > { struct HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > > {} *x_36_1_1; } x36; struct OwnPtr<WTF::HashMap<WebCore::String, WTF::RetainPtr<CALayer>, WebCore::StringHash, WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::RetainPtr<CALayer> > > > { struct HashMap<WebCore::String,WTF::RetainPtr<CALayer>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::RetainPtr<CALayer> > > {} *x_37_1_1; } x37; NSInteger x38; unsigned int x39 : 1; struct RetainPtr<WebAnimationDelegate> { id x_40_1_1; } x40; struct RetainPtr<CGImage*> { struct CGImage {} *x_41_1_1; } x41; struct Vector<WebCore::GraphicsLayerCA::LayerAnimation,0ul> { NSUInteger x_42_1_1; struct VectorBuffer<WebCore::GraphicsLayerCA::LayerAnimation,0ul> { struct LayerAnimation {} *x_2_2_1; NSUInteger x_2_2_2; } x_42_1_2; } x42; struct HashSet<int,WTF::IntHash<unsigned int>,WTF::HashTraits<int> > { struct HashTable<int,int,WTF::IdentityExtractor<int>,WTF::IntHash<unsigned int>,WTF::HashTraits<int>,WTF::HashTraits<int> > { NSInteger *x_1_2_1; NSInteger x_1_2_2; NSInteger x_1_2_3; NSInteger x_1_2_4; NSInteger x_1_2_5; } x_43_1_1; } x43; struct HashMap<WebCore::String,WebCore::GraphicsLayerCA::AnimationProcessingAction,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WebCore::GraphicsLayerCA::AnimationProcessingAction> > { struct HashTable<WebCore::String,std::pair<WebCore::String, WebCore::GraphicsLayerCA::AnimationProcessingAction>,WTF::PairFirstExtractor<std::pair<WebCore::String, WebCore::GraphicsLayerCA::AnimationProcessingAction> >,WebCore::StringHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::String>, WTF::HashTraits<WebCore::GraphicsLayerCA::AnimationProcessingAction> >,WTF::HashTraits<WebCore::String> > { struct pair<WebCore::String,WebCore::GraphicsLayerCA::AnimationProcessingAction> {} *x_1_2_1; NSInteger x_1_2_2; NSInteger x_1_2_3; NSInteger x_1_2_4; NSInteger x_1_2_5; } x_44_1_1; } x44; struct HashMap<WebCore::String,WTF::Vector<std::pair<int, int>, 0ul>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WTF::Vector<std::pair<int, int>, 0ul> > > { struct HashTable<WebCore::String,std::pair<WebCore::String, WTF::Vector<std::pair<int, int>, 0ul> >,WTF::PairFirstExtractor<std::pair<WebCore::String, WTF::Vector<std::pair<int, int>, 0ul> > >,WebCore::StringHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::String>, WTF::HashTraits<WTF::Vector<std::pair<int, int>, 0ul> > >,WTF::HashTraits<WebCore::String> > { struct pair<WebCore::String,WTF::Vector<std::pair<int, int>, 0ul> > {} *x_1_2_1; NSInteger x_1_2_2; NSInteger x_1_2_3; NSInteger x_1_2_4; NSInteger x_1_2_5; } x_45_1_1; } x45; struct Vector<WebCore::FloatRect,0ul> { NSUInteger x_46_1_1; struct VectorBuffer<WebCore::FloatRect,0ul> { struct FloatRect {} *x_2_2_1; NSUInteger x_2_2_2; } x_46_1_2; } x46; NSUInteger x47; }*)arg1;

@end
