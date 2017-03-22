@import Foundation;
@import UIKit;
@import AVFoundation;

@class WPVideoPlayerView;

@protocol WPVideoPlayerViewDelegate

- (void)videoPlayerView:(WPVideoPlayerView *)playerView didFailWithError:(NSError *)error;
 - (void)videoPlayerViewStarted:(WPVideoPlayerView *)playerView;
 - (void)videoPlayerViewFinish:(WPVideoPlayerView *)playerView;

@end

@interface WPVideoPlayerView: UIView


@property (nonatomic, assign) BOOL loop;

@property (nonatomic, weak) id<WPVideoPlayerViewDelegate> delegate;

@property (nonatomic, strong) NSURL *videoURL;

@property (nonatomic, strong) AVAsset *asset;

@property (nonatomic, assign) BOOL showControls;

- (void)play;

- (void)pause;

@end

