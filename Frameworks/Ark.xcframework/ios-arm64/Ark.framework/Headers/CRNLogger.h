
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(Logger)
@protocol CRNLogger <NSObject>
- (void)dumpLogMessage:(NSString *)logMessage NS_SWIFT_NAME(dumpMessage(_:));;
@end

NS_ASSUME_NONNULL_END
