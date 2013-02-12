/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier, UIView;

@interface PSEditingPane : UIView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _requiresKeyboard : 1;
    id _delegate;
    } _pinstripeRect;
    UIView *_pinstripeView;
    PSSpecifier *_specifier;
}

@property CGRect pinstripeRect;

+ (id)defaultBackgroundColor;
+ (float)preferredHeight;

- (void)addNewValue;
- (BOOL)changed;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)doneEditing;
- (void)editMode;
- (BOOL)handlesDoneButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pinstripeRect;
- (id)preferenceSpecifier;
- (id)preferenceValue;
- (BOOL)requiresKeyboard;
- (void)setDelegate:(id)arg1;
- (void)setPinstripeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPreferenceSpecifier:(id)arg1;
- (void)setPreferenceValue:(id)arg1;
- (id)specifierLabel;
- (void)viewDidBecomeVisible;
- (BOOL)wantsNewButton;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
