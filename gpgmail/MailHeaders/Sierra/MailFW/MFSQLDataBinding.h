//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFSQLBinding.h>

@class NSData;

@interface MFSQLDataBinding : MFSQLBinding
{
    NSData *_dataValue;	// 8 = 0x8
}

@property(readonly, copy, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
- (void).cxx_destruct;	// IMP=0x0000000000271d48
- (void)bindTo:(struct sqlite3_stmt *)arg1 withSQLIndex:(int)arg2;	// IMP=0x0000000000271c70
- (id)init;	// IMP=0x0000000000271ba1
- (id)initWithData:(id)arg1;	// IMP=0x0000000000271b26

@end

