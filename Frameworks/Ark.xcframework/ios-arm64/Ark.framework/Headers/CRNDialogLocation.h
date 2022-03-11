#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents the locations.
///
/// Ark Assistant needs users' locations to improve the ability to do
/// navigation.
typedef struct CRNDialogLocation{
    float longitude;
    float latitude;
} CRNDialogLocation __attribute__((swift_name("Location")));

NS_ASSUME_NONNULL_END
