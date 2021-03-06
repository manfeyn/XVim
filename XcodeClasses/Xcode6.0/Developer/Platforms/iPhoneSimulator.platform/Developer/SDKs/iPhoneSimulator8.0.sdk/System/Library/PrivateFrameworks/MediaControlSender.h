//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
// UUID: EEE69096-C608-350E-8199-CBEAA6EC9ADF
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 210.34.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol AirPlayControllerAsync
- (void)setProperty:(NSString *)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(void (^)(int))arg4;
- (void)getProperty:(NSString *)arg1 qualifier:(id)arg2 completion:(void (^)(int, id))arg3;
- (void)postEvent:(NSString *)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(void (^)(void))arg4;
- (void)performCommand:(NSString *)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(void (^)(int, NSDictionary *))arg4;
@end

@protocol AirPlayControllerSync
- (int)setProperty:(NSString *)arg1 qualifier:(id)arg2 value:(id)arg3;
- (id)getProperty:(NSString *)arg1 qualifier:(id)arg2 status:(int *)arg3;
- (void)postEvent:(NSString *)arg1 qualifier:(id)arg2 params:(id)arg3;
- (int)performCommand:(NSString *)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id *)arg4;
@end

@interface AirPlayController : NSObject <AirPlayControllerAsync, AirPlayControllerSync>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_xpcName;
    NSXPCConnection *_cnx;
}

@property(copy, nonatomic) NSString *xpcName; // @synthesize xpcName=_xpcName;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (int)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getProperty:(id)arg1 qualifier:(id)arg2 status:(int *)arg3;
- (void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3;
- (void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (int)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id *)arg4;
- (id)_setupConnection;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

@interface AirPlayRemoteSlideshow : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    MediaControlClient *_client;
    id <AirPlayRemoteSlideshowDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_userQueue;
    _Bool _started;
    double _startTime;
}

@property(nonatomic) id <AirPlayRemoteSlideshowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getFeaturesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getFeaturesWithOptions:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_configureEventHandler;
- (void)setPassword:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

@interface MediaControlClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct MediaControlClientImp *_client;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    CDUnknownBlockType _eventHandlerBlock;
}

- (void)setVolume:(float)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getVolumeWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setRate:(float)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setPosition:(float)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setPosition:(float)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getPositionWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getPlaybackInfoWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)stopWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)playWithParams:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)authorizeWithPICRequest:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)authorizeWithPICRequest:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setSlideshowInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getSlideshowInfoWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getSlideshowFeaturesWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)activateResource:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeResource:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addResource:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addResourceFile:(id)arg1 mimeType:(id)arg2 uuid:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)addResourceData:(id)arg1 mimeType:(id)arg2 uuid:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeItem:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)insertItem:(id)arg1 afterItem:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)sendPhotoData:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)sendPhotoData:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)startPresentation:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setEventHandlerQueue:(id)arg1 eventHandlerBlock:(CDUnknownBlockType)arg2;
- (void)performRemoteAction:(id)arg1 withParams:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)ensureDisconnected;
- (void)ensureConnected;
- (void)setPassword:(id)arg1;
- (void)setHost:(id)arg1;
- (void)checkAuthentication;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (struct MediaControlClientImp *)internalClient;

@end

