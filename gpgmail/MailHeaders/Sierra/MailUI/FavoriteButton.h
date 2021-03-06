//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MailBarContainerButton.h"

#import "FavoritesMenuDelegateProtocol.h"
#import "NSCopying.h"
#import "NSDraggingSource.h"
#import "NSPasteboardItemDataProvider.h"

@class FavoriteButtonMailboxProperties, FavoritesMenuController, MFMailbox, NSString, NSTimer;

@interface FavoriteButton : MailBarContainerButton <FavoritesMenuDelegateProtocol, NSCopying, NSDraggingSource, NSPasteboardItemDataProvider>
{
    BOOL _menuIsOpen;	// 172 = 0xac
    id <MFUIMailbox> _mailbox;	// 176 = 0xb0
    MFMailbox *_selectedSubMailbox;	// 184 = 0xb8
    FavoriteButtonMailboxProperties *_mailboxProperties;	// 192 = 0xc0
    FavoritesMenuController *_menuController;	// 200 = 0xc8
    NSTimer *_showMenuTimer;	// 208 = 0xd0
    NSTimer *_flashButtonTimer;	// 216 = 0xd8
    long long _flashCount;	// 224 = 0xe0
}

+ (BOOL)enabledStateforMailbox:(id)arg1;	// IMP=0x0000000100012d8b
+ (Class)cellClass;	// IMP=0x0000000100012031
+ (id)titleForMailbox:(id)arg1 selectedSubMailbox:(id)arg2 shouldUseExtendedName:(BOOL)arg3 countsChildren:(BOOL)arg4;	// IMP=0x0000000100012303
+ (unsigned long long)_unreadCountForMailbox:(id)arg1 countsChildren:(BOOL)arg2;	// IMP=0x00000001000125b6
+ (void)setDraggedButton:(id)arg1;	// IMP=0x00000001001750ed
+ (id)draggedButton;	// IMP=0x00000001000130ed
@property(nonatomic) BOOL menuIsOpen; // @synthesize menuIsOpen=_menuIsOpen;
@property(nonatomic) long long flashCount; // @synthesize flashCount=_flashCount;
@property(retain, nonatomic) NSTimer *flashButtonTimer; // @synthesize flashButtonTimer=_flashButtonTimer;
@property(retain, nonatomic) NSTimer *showMenuTimer; // @synthesize showMenuTimer=_showMenuTimer;
@property(retain, nonatomic) FavoritesMenuController *menuController; // @synthesize menuController=_menuController;
@property(retain, nonatomic) FavoriteButtonMailboxProperties *mailboxProperties; // @synthesize mailboxProperties=_mailboxProperties;
@property(retain, nonatomic) MFMailbox *selectedSubMailbox; // @synthesize selectedSubMailbox=_selectedSubMailbox;
@property(readonly, nonatomic) id <MFUIMailbox> mailbox; // @synthesize mailbox=_mailbox;
- (void).cxx_destruct;	// IMP=0x0000000100177803
@property(readonly, nonatomic) id <MFUIMailbox> selectedMailbox;
- (void)menuDidSelectMailbox:(id)arg1;	// IMP=0x0000000100177430
- (void)menuDidClose;	// IMP=0x00000001001773fe
- (void)menuDidPresent;	// IMP=0x00000001001773e7
- (void)showMenu;	// IMP=0x0000000100177359
- (void)_showMenuTimerFired:(id)arg1;	// IMP=0x0000000100177345
- (void)_toggleFlashState:(id)arg1;	// IMP=0x00000001001771a4
- (void)_stopShowMenuTimer;	// IMP=0x000000010017714a
- (void)_startShowMenuTimer;	// IMP=0x0000000100176fc7
@property(readonly, copy) NSString *description;
- (BOOL)_canAcceptMailboxAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000100176e56
- (BOOL)performDragOperation:(id)arg1;	// IMP=0x0000000100176b1d
- (void)draggingExited:(id)arg1;	// IMP=0x0000000100176a68
- (unsigned long long)draggingUpdated:(id)arg1;	// IMP=0x00000001001768b9
- (unsigned long long)draggingEntered:(id)arg1;	// IMP=0x00000001001766d3
- (unsigned long long)_dragOperationForCurrentEvent;	// IMP=0x000000010017664e
- (BOOL)_canDragMessageIntoSubMailboxesOrMailbox:(id)arg1;	// IMP=0x000000010017656a
- (BOOL)_canDragMessageIntoMailbox:(id)arg1;	// IMP=0x000000010017649e
- (void)flash;	// IMP=0x0000000100176449
- (void)_finishFlash:(id)arg1;	// IMP=0x0000000100176435
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;	// IMP=0x00000001001761f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001761e6
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;	// IMP=0x00000001001761ce
- (void)mouseUp:(id)arg1;	// IMP=0x0000000100176195
- (void)mouseDown:(id)arg1;	// IMP=0x000000010009d910
- (void)_presentContextualPopupForEvent:(id)arg1;	// IMP=0x000000010017604b
- (BOOL)_shouldDispayMenuForEvent:(id)arg1;	// IMP=0x000000010009dc41
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;	// IMP=0x0000000100176045
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;	// IMP=0x0000000100175e61
- (void)_performDragFromMouseDown:(id)arg1 withViewFrameOrigin:(struct CGPoint)arg2;	// IMP=0x0000000100175b89
- (struct CGSize)_currentEventOffsetFromEvent:(id)arg1;	// IMP=0x000000010009dcfe
- (BOOL)_canDragHorizontally:(BOOL)arg1 fromMouseDown:(id)arg2;	// IMP=0x0000000100175b30
- (id)_draggingImage;	// IMP=0x00000001001758d9
- (void)dealloc;	// IMP=0x000000010004e663
- (BOOL)_hasIndicator;	// IMP=0x00000001001758a5
- (void)_setIndicator:(BOOL)arg1;	// IMP=0x0000000100012d32
@property(readonly, nonatomic) id <MFUIMailbox> activeMailbox;
- (void)_fullScreenStateChanged:(id)arg1;	// IMP=0x0000000100175843
- (void)_mailboxSectionListingDidChange:(id)arg1;	// IMP=0x0000000100035534
- (void)_flagMailboxVisibilityChanged:(id)arg1;	// IMP=0x00000001001757a0
- (void)_unreadCountDidChange:(id)arg1;	// IMP=0x0000000100088076
- (void)_mailboxInfoDidChange:(id)arg1;	// IMP=0x000000010009c8ef
- (void)_mailboxWillBecomeInvalid:(id)arg1;	// IMP=0x0000000100175688
- (void)viewWillMoveToWindow:(id)arg1;	// IMP=0x000000010001462c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001755b9
- (void)_favoriteButtonCommonInit;	// IMP=0x00000001001751af
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010017516a
- (id)initWithMailbox:(id)arg1 selectedSubMailbox:(id)arg2;	// IMP=0x0000000100011ec3
- (void)_registerChildrenForUnreadCountChangesForMailbox:(id)arg1;	// IMP=0x0000000100012a95
- (void)registerForDraggedTypes;	// IMP=0x00000001000129ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

