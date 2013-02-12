/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaLibrary, NSMachPort;

@interface MPMediaLibraryRemote : MPServerObjectProxy <MPMediaLibrary> {
    unsigned int _didCheckIn : 1;
    NSUInteger _clientPort;
    NSMachPort *_launchNotifyPort;
    NSInteger _launchNotifyPortToken;
    MPMediaLibrary *_mediaLibrary;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSUInteger _serverConnectionDeathCount;
    NSUInteger _serverPort;
}

- (void)_clientCheckIn;
- (void)_mediaLibraryDidLaunch;
- (void)_registerForLaunchNotifications;
- (void)_runMigServerOnPort:(NSUInteger)arg1;
- (void)_stopMigServer;
- (void)_unregisterForLaunchNotifications;
- (void)dealloc;
- (id)init;
- (void)prepareForDecodingWithCoder:(id)arg1;
- (void)prepareForQueryingWithMediaLibrary:(id)arg1;
- (BOOL)prepareForRemoteSelectorInvocation;
- (void)serverConnectionDied;

@end
