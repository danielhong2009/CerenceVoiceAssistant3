#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString * const CRNEventKey NS_TYPED_ENUM;

/// Represents the events.
NS_SWIFT_NAME(Event)
@interface CRNBaseEvent : NSObject

/// Creates a new instance with an event name.
/// @param inName The event name.
- (instancetype)initWithName:(NSString *)inName;

/// Creates a dictionary representation.
- (NSDictionary *)buildDictionary;

/// Creates the 'section' of the event.
- (NSDictionary *)buildData;

/// If the event should interrupt the current dialog flow.
- (BOOL)shouldInterruptDialog;

/// Name of the event.
@property(strong, nonatomic) NSString *name;
@end

NS_ASSUME_NONNULL_END
