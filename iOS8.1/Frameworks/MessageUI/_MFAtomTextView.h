//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class MFComposeRecipientTextView, NSArray;

@interface _MFAtomTextView : UITextView
{
    unsigned int _textStorageEditingDepth;
    MFComposeRecipientTextView *_hostRecipientView;
}

@property MFComposeRecipientTextView *hostRecipientView; // @synthesize hostRecipientView=_hostRecipientView;
- (void)_handleKeyUIEvent:(id)arg1;
- (BOOL)_delegateSupportsKeyboardEvents;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)undoManager;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cut:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (int)baseWritingDirection;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
- (id)selectionRectsForRange:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)batchTextStorageUpdates:(CDUnknownBlockType)arg1;
- (BOOL)isEditingTextStorage;
- (void)enumerateAtomAttachments:(CDUnknownBlockType)arg1;
- (void)enumerateAtomsInCharacterRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAtoms:(CDUnknownBlockType)arg1;
- (struct CGRect)convertGlyphRect:(struct CGRect)arg1;
@property(readonly) NSArray *atoms;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end

