//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class UIButton, UILabel, UIView;

@interface SCTextField : UITextField
{
    _Bool _isHighlighted;
    _Bool _justBeganEditing;
    UIButton *_xButton;
    UIView *_separator;
    UILabel *_errorLabel;
    struct CGRect _initialTextRect;
}

@property(nonatomic) struct CGRect initialTextRect; // @synthesize initialTextRect=_initialTextRect;
@property(nonatomic) _Bool justBeganEditing; // @synthesize justBeganEditing=_justBeganEditing;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIButton *xButton; // @synthesize xButton=_xButton;
@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
- (void).cxx_destruct;
- (void)textDidChange;
- (void)textDidBeginEditing;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (_Bool)isInErrorState;
- (void)setXButtonHidden:(_Bool)arg1;
- (void)setHighlightedState:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setError:(id)arg1;
- (void)clearInput;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <SCTextFieldDelegate> delegate; // @dynamic delegate;

@end

