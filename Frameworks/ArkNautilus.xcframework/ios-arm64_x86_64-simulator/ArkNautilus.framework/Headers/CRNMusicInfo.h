
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
NS_SWIFT_NAME(MusicInfo)
@interface CRNMusicInfo: NSObject

/// :nodoc:
@property(strong, nonatomic) NSString * title;

/// genre of song, such as classical, rock
@property(strong, nonatomic) NSString * genre;

/// album name
@property(strong, nonatomic) NSString * album;

/// The singer of the song
@property(strong, nonatomic) NSString * artist;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)buildDictionary;
@end

NS_ASSUME_NONNULL_END