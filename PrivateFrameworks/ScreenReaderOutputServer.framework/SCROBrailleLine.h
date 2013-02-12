/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class <SCROBrailleDriverProtocol>, NSData, NSMutableAttributedString;

@interface SCROBrailleLine : NSObject {
    struct { 
        NSData *data; 
        NSInteger alignment; 
        NSInteger length; 
        char *cells; 
    BOOL _anyUnread;
    id _appToken;
    BOOL _blink;
    char *_blinkerBuffer;
    <SCROBrailleDriverProtocol> *_brailleDriver;
    struct __CFArray { } *_chunkArray;
    struct __CFDictionary { } *_chunkDictionary;
    BOOL _currentUnread;
    char *_displayBuffer;
    char *_displayFilter;
    NSInteger _displayMode;
    NSInteger _firstToken;
    NSInteger _iBeamLocation;
    NSInteger _insetSize;
    BOOL _isPanning;
    NSInteger _lastToken;
    NSInteger _leftInset;
    NSMutableAttributedString *_lineBuffer;
    NSInteger _lineOffset;
    NSInteger _masterStatusCellIndex;
    BOOL _needsDisplayFlush;
    BOOL _needsStatusFlush;
    NSInteger _rightInset;
    BOOL _showDotsSevenAndEight;
    NSInteger _size;
    NSData *_statusData;
    char *_statusFilter;
    NSInteger _statusSize;
    } _virtualStatus;
}

@property(readonly) BOOL needsDisplayFlush;

+ (void)initialize;

- (BOOL)_allowInset;
- (BOOL)_blink:(BOOL)arg1;
- (void)_flush;
- (void)_flushRealStatus;
- (void)_updateOffsets;
- (BOOL)anyUnread;
- (id)appToken;
- (void)blinker;
- (BOOL)canPanLeft;
- (BOOL)canPanRight;
- (id)createLineDescriptor;
- (BOOL)currentUnread;
- (void)dealloc;
- (BOOL)display;
- (NSInteger)displayMode;
- (NSInteger)firstToken;
- (BOOL)getStatusRouterIndex:(NSInteger*)arg1 forRawIndex:(NSInteger)arg2;
- (id)initWithDriver:(id)arg1 mainSize:(NSInteger)arg2 statusSize:(NSInteger)arg3;
- (NSInteger)lastToken;
- (NSInteger)masterStatusCellIndex;
- (BOOL)needsDisplayFlush;
- (BOOL)panLeft;
- (BOOL)panRight;
- (void)setAnyUnread:(BOOL)arg1;
- (void)setAppToken:(id)arg1;
- (void)setCurrentUnread:(BOOL)arg1;
- (void)setDisplayMode:(NSInteger)arg1;
- (void)setFormatter:(id)arg1;
- (void)setMainSize:(NSInteger)arg1;
- (void)setMasterStatusCellIndex:(NSInteger)arg1;
- (void)setRealStatus:(id)arg1;
- (void)setShowDotsSevenAndEight:(BOOL)arg1;
- (void)setStatusSize:(NSInteger)arg1;
- (void)setVirtualStatus:(id)arg1 alignment:(NSInteger)arg2;
- (BOOL)showDotsSevenAndEight;
- (NSInteger)tokenForRouterIndex:(NSInteger)arg1 location:(NSInteger*)arg2 appToken:(id*)arg3;

@end
