//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "NSAnimationDelegate.h"

@class MorphingDragImageView, NSAnimation, NSImage, NSString, NSTimer, NSView, NSWindow;

@interface MorphingDragImageController : NSObject <NSAnimationDelegate>
{
    NSWindow *_windowUnderMouse;	// 8 = 0x8
    id <TabDraggingDestination> _targetUnderMouse;	// 16 = 0x10
    BOOL _dragDone;	// 24 = 0x18
    BOOL _targetAcceptsDrag;	// 25 = 0x19
    BOOL _mouseOverSystemWindow;	// 26 = 0x1a
    NSWindow *_dragWindow;	// 32 = 0x20
    NSImage *_acceptedDragImage;	// 40 = 0x28
    NSImage *_rejectedDragImage;	// 48 = 0x30
    id <TabBarViewItem> _dragItem;	// 56 = 0x38
    id <MorphingDragImageControllerDragSource> _dragSource;	// 64 = 0x40
    NSView *_sourceView;	// 72 = 0x48
    MorphingDragImageView *_dragImageView;	// 80 = 0x50
    NSAnimation *_morphAnimation;	// 88 = 0x58
    NSAnimation *_slideBackAnimation;	// 96 = 0x60
    NSTimer *_springTargetWindowToFrontTimer;	// 104 = 0x68
    NSTimer *_periodicEventTimer;	// 112 = 0x70
    struct CGSize _maxImageSize;	// 120 = 0x78
    struct CGSize _originalViewOffset;	// 136 = 0x88
    struct CGPoint _slideBackStartTranslation;	// 152 = 0x98
    struct CGPoint _slideBackEndTranslation;	// 168 = 0xa8
}

+ (void)dragTabWithDraggingItem:(id)arg1 tabButtonImage:(id)arg2 windowImage:(id)arg3 fromView:(id)arg4 at:(struct CGPoint)arg5 source:(id)arg6;	// IMP=0x000000010023fa3f
@property(nonatomic) BOOL mouseOverSystemWindow; // @synthesize mouseOverSystemWindow=_mouseOverSystemWindow;
@property(nonatomic) BOOL targetAcceptsDrag; // @synthesize targetAcceptsDrag=_targetAcceptsDrag;
@property(retain, nonatomic) NSTimer *periodicEventTimer; // @synthesize periodicEventTimer=_periodicEventTimer;
@property(retain, nonatomic) NSTimer *springTargetWindowToFrontTimer; // @synthesize springTargetWindowToFrontTimer=_springTargetWindowToFrontTimer;
@property(nonatomic) BOOL dragDone; // @synthesize dragDone=_dragDone;
@property(nonatomic) struct CGPoint slideBackEndTranslation; // @synthesize slideBackEndTranslation=_slideBackEndTranslation;
@property(nonatomic) struct CGPoint slideBackStartTranslation; // @synthesize slideBackStartTranslation=_slideBackStartTranslation;
@property(retain, nonatomic) NSAnimation *slideBackAnimation; // @synthesize slideBackAnimation=_slideBackAnimation;
@property(retain, nonatomic) NSAnimation *morphAnimation; // @synthesize morphAnimation=_morphAnimation;
@property(retain, nonatomic) MorphingDragImageView *dragImageView; // @synthesize dragImageView=_dragImageView;
@property(retain, nonatomic) NSView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) id <MorphingDragImageControllerDragSource> dragSource; // @synthesize dragSource=_dragSource;
@property(retain, nonatomic) id <TabBarViewItem> dragItem; // @synthesize dragItem=_dragItem;
@property(nonatomic) struct CGSize originalViewOffset; // @synthesize originalViewOffset=_originalViewOffset;
@property(nonatomic) struct CGSize maxImageSize; // @synthesize maxImageSize=_maxImageSize;
@property(retain, nonatomic) NSImage *rejectedDragImage; // @synthesize rejectedDragImage=_rejectedDragImage;
@property(retain, nonatomic) NSImage *acceptedDragImage; // @synthesize acceptedDragImage=_acceptedDragImage;
@property(retain, nonatomic) NSWindow *dragWindow; // @synthesize dragWindow=_dragWindow;
- (void).cxx_destruct;	// IMP=0x0000000100242957
- (struct CGPoint)_coreGraphicsScreenPointForAppKitScreenPoint:(struct CGPoint)arg1;	// IMP=0x00000001002424ed
- (void)_morphToDragImage:(id)arg1;	// IMP=0x0000000100242288
- (void)_updateDragImageForCurrentDragState;	// IMP=0x000000010024220b
- (void)_sendMovedToPointOnScreenToDragSource;	// IMP=0x0000000100242198
@property(retain, nonatomic) id <TabDraggingDestination> targetUnderMouse;
- (void)_draggingDidExitTargetWindow;	// IMP=0x0000000100241e42
- (void)_draggingDidEnterTargetWindow;	// IMP=0x0000000100241d0f
- (void)_performSpringToFront:(id)arg1;	// IMP=0x0000000100241cb3
@property(retain, nonatomic) NSWindow *windowUnderMouse;
- (void)_findWindowUnderMouse:(id *)arg1 level:(int *)arg2 viewUnderMouse:(id *)arg3;	// IMP=0x0000000100241943
- (id)_dragInfoForNoTargetUnderMouse;	// IMP=0x000000010024189e
- (id)_dragInfoForTargetUnderMouse;	// IMP=0x0000000100241688
- (void)_animateSlideBack;	// IMP=0x0000000100241529
- (void)_animateMorphWindow;	// IMP=0x00000001002413aa
- (void)_dragComplete;	// IMP=0x0000000100241299
- (void)_applicationDidResignActive;	// IMP=0x0000000100241266
- (void)_firePeriodicEvent:(id)arg1;	// IMP=0x0000000100241157
- (void)_stopPeriodicEventTimer;	// IMP=0x0000000100241032
- (void)_startPeriodicEventTimerIfNeeded;	// IMP=0x0000000100240e82
- (void)_handleMouseUp;	// IMP=0x0000000100240870
- (void)_handleFlagsChanged;	// IMP=0x0000000100240624
- (void)_handleMouseDragged;	// IMP=0x0000000100240454
- (void)_handleEvent:(id)arg1;	// IMP=0x0000000100240361
- (void)_runDrag;	// IMP=0x0000000100240163
- (void)_prepareForDragWithImage:(id)arg1;	// IMP=0x000000010023ff14
- (void)_dragTabWithDraggingItem:(id)arg1 tabButtonImage:(id)arg2 windowImage:(id)arg3 fromView:(id)arg4 at:(struct CGPoint)arg5 source:(id)arg6;	// IMP=0x000000010023fc73
- (void)animationDidEnd:(id)arg1;	// IMP=0x000000010023fb30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

