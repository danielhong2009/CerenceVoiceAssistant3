//
//  CRNCloudNLUVehicleContext.h
//  Ark
//
//  Created by Dada on 2021/8/24.
//

#import <Ark/CRNCloudNLUContext.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(CloudNLUVehicleContext)
@interface CRNCloudNLUVehicleContext : CRNCloudNLUContext
/// The temperature outside the vehicle, in Celsius
@property(assign, nonatomic) double outsideTemperature;
/// The rain detector detects precipitation outside the vehicle.
/// Specify null if no reading is available
@property(assign, nonatomic) BOOL rainDetected;
/// The frost detector detects ice. Indicates if the current ground temperature can lead to ice formation, or actual ice has been detected.
/// Specify null if no reading is available.
@property(assign, nonatomic) BOOL frostDetected;
/// The combined air quality index, using the EPA scale 0 to 500, outside the car. Indicates the current combined air quality index using the readings from all available sensors, such as NOx and fine particles.
/// Specify null if no reading is available.
@property(assign, nonatomic) NSInteger outsideAqi;
/// Indicates that at least one cabin window is not completely closed or, in other words, one cabin window is partially open.
/// Specify null if no reading is available.
@property(assign, nonatomic) BOOL windowOpen;
/// Fill level percentage, between 0 and 1, of the windshield cleaning fluid.
/// If there are multiple tanks, the tank with the lowest level should be indicated.
/// Specify null if no reading is available.
@property(assign, nonatomic) double windshieldWipersFluidLevel;
/// Whether the windshield wipers are operating, either due to a manual setting or automatically because rain was detected. Intermittent wiping is considered active.
/// Specify null if no reading is available.
@property(assign, nonatomic) BOOL windshieldWipersActive;
/// Fill level percentage, between 0 and 1, of the Diesel exhaust fluid, such as adBlue.
/// Specify null if no reading is available.
@property(assign, nonatomic) double dieselExhaustFluidLevel;
/// Instantaneous speed reading in kilometers per hour (km/h). Indicates the absolute current speed in km/h.
/// Specify null if no reading is available.
@property(assign, nonatomic) double currentSpeed;
/// Average speed in the last 15 minutes in km/h, using distance/time computation. If the drive train was powered, or left in the "P" position, less than 15 minutes ago, use that timespan instead.
/// Specify null if no reading is available.
@property(assign, nonatomic) double averageSpeedIn15Minutes;
/// The height, or required clearance, of the vehicle in centimeters. It can be adjusted by the user to take roof accessories or tire changes into account.
/// Specify null if no reading is available.
@property(assign, nonatomic) double height;
/// The total remaining range autonomy of the vehicle in kilometers, from all power sources such as fuel and battery.
/// Specify null if no reading is available.
@property(assign, nonatomic) double range;
/// The number of passengers in the vehicle, including the driver.
@property(assign, nonatomic) NSInteger passengerCount;
@end

NS_ASSUME_NONNULL_END
