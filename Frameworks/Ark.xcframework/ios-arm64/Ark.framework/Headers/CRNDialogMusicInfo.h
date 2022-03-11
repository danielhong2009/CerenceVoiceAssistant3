#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents the available tracks.
///
/// Ark Assistant requires the list of tracks to improve ASR to help users to
/// play music.
NS_SWIFT_NAME(AssistantMusicInfo)
@interface CRNDialogMusicInfo: NSObject
/// Title of the track.
@property(strong, nonatomic) NSString * title;
/// Genre of the track.
@property(strong, nonatomic) NSString * genre;
/// Name of the album that contains the track.
@property(strong, nonatomic) NSString * album;
/// Name of the artist that performs the track.
@property(strong, nonatomic) NSString * artist;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)buildDictionary;
@end

NS_ASSUME_NONNULL_END
