// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <numbers>

#include <units/angle.h>
#include <units/angular_velocity.h>

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

inline constexpr bool kGyroReversed = true;

inline constexpr double kStabilizationP = 1;
inline constexpr double kStabilizationI = 0.5;
inline constexpr double kStabilizationD = 0;

inline constexpr double kTurnP = 1;
inline constexpr double kTurnI = 0;
inline constexpr double kTurnD = 0;

inline constexpr auto kTurnTolerance = 5_deg;
inline constexpr auto kTurnRateTolerance = 10_deg_per_s;

inline constexpr auto kMaxTurnRate = 100_deg_per_s;
inline constexpr auto kMaxTurnAcceleration = 300_deg_per_s / 1_s;
}  // namespace DriveConstants

namespace AutoConstants {
inline constexpr double kAutoDriveDistanceInches = 60;
inline constexpr double kAutoBackupDistanceInches = 20;
inline constexpr double kAutoDriveSpeed = 0.5;
}  // namespace AutoConstants

namespace OIConstants {
inline constexpr int kDriverControllerPort = 0;
}  // namespace OIConstants
