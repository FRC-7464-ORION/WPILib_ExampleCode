// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <numbers>

#include <units/angle.h>
#include <units/angular_velocity.h>
#include <units/time.h>
#include <units/voltage.h>

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or bool constants.  This should not be used for any other purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */

namespace DriveConstants {
inline constexpr int kLeftMotor1Port = 0;
inline constexpr int kLeftMotor2Port = 1;
inline constexpr int kRightMotor1Port = 2;
inline constexpr int kRightMotor2Port = 3;

inline constexpr int kLeftEncoderPorts[]{0, 1};
inline constexpr int kRightEncoderPorts[]{2, 3};
inline constexpr bool kLeftEncoderReversed = false;
inline constexpr bool kRightEncoderReversed = true;

inline constexpr int kEncoderCPR = 1024;
inline constexpr double kWheelDiameterInches = 6;
inline constexpr double kEncoderDistancePerPulse =
    // Assumes the encoders are directly mounted on the wheel shafts
    (kWheelDiameterInches * std::numbers::pi) /
    static_cast<double>(kEncoderCPR);
}  // namespace DriveConstants

namespace ArmConstants {
inline constexpr int kMotorPort = 4;

inline constexpr double kP = 1;

// These are fake gains; in actuality these must be determined individually for
// each robot
inline constexpr auto kS = 1_V;
inline constexpr auto kG = 1_V;
inline constexpr auto kV = 0.5_V * 1_s / 1_rad;
inline constexpr auto kA = 0.1_V * 1_s * 1_s / 1_rad;

inline constexpr auto kMaxVelocity = 3_rad_per_s;
inline constexpr auto kMaxAcceleration = 10_rad / (1_s * 1_s);

inline constexpr int kEncoderPorts[]{4, 5};
inline constexpr int kEncoderPPR = 256;
inline constexpr auto kEncoderDistancePerPulse =
    2.0_rad * std::numbers::pi / kEncoderPPR;

// The offset of the arm from the horizontal in its neutral position,
// measured from the horizontal
inline constexpr auto kArmOffset = 0.5_rad;
}  // namespace ArmConstants

namespace AutoConstants {
inline constexpr auto kAutoTimeoutSeconds = 12_s;
inline constexpr auto kAutoShootTimeSeconds = 7_s;
}  // namespace AutoConstants

namespace OIConstants {
constexpr int kDriverControllerPort = 0;
}  // namespace OIConstants
