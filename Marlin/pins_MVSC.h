/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Board MVSC with TMC2208 pin assignments
 *
 *
 */

#if !defined(__AVR_ATmega644P__) && !defined(__AVR_ATmega1284P__)
  #error "Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "MVSC"
#endif

//
// Limit Switches
//
#define X_MIN_PIN          2
#define Y_MIN_PIN          1
#define Z_MIN_PIN          0

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  3	//on LO pin
#endif

//
// Steppers
//
#define X_STEP_PIN         11
#define X_DIR_PIN          10
#define X_ENABLE_PIN       18

#define Y_STEP_PIN         5
#define Y_DIR_PIN          7
#define Y_ENABLE_PIN       6

#define Z_STEP_PIN         23
#define Z_DIR_PIN          19
#define Z_ENABLE_PIN       21

#define E0_STEP_PIN        24
#define E0_DIR_PIN         25
#define E0_ENABLE_PIN      28


#if ENABLED(HAVE_TMC2208)
  /**
   * TMC2208 stepper drivers
   *
   * Hardware serial communication ports.
   * If undefined software serial is used according to the pins below
   */
  //#define X_HARDWARE_SERIAL  Serial1
  //#define X2_HARDWARE_SERIAL Serial1
  //#define Y_HARDWARE_SERIAL  Serial1
  //#define Y2_HARDWARE_SERIAL Serial1
  //#define Z_HARDWARE_SERIAL  Serial1
  //#define Z2_HARDWARE_SERIAL Serial1
  //#define E0_HARDWARE_SERIAL Serial1
  //#define E1_HARDWARE_SERIAL Serial1
  //#define E2_HARDWARE_SERIAL Serial1
  //#define E3_HARDWARE_SERIAL Serial1
  //#define E3_HARDWARE_SERIAL Serial1

  /**
   * Software serial
   */

  #define X_SERIAL_TX_PIN    17
  #define X_SERIAL_RX_PIN    16
  #define X2_SERIAL_TX_PIN   -1
  #define X2_SERIAL_RX_PIN   -1

  #define Y_SERIAL_TX_PIN    15
  #define Y_SERIAL_RX_PIN    14
  #define Y2_SERIAL_TX_PIN   -1
  #define Y2_SERIAL_RX_PIN   -1

  #define Z_SERIAL_TX_PIN    20
  #define Z_SERIAL_RX_PIN    22
  #define Z2_SERIAL_TX_PIN   -1
  #define Z2_SERIAL_RX_PIN   -1

  #define E0_SERIAL_TX_PIN   26
  #define E0_SERIAL_RX_PIN   27
  #define E1_SERIAL_TX_PIN   -1
  #define E1_SERIAL_RX_PIN   -1
  #define E2_SERIAL_TX_PIN   -1
  #define E2_SERIAL_RX_PIN   -1
  #define E3_SERIAL_TX_PIN   -1
  #define E3_SERIAL_RX_PIN   -1
  #define E4_SERIAL_TX_PIN   -1
  #define E4_SERIAL_RX_PIN   -1
#endif

//
// Temperature Sensors
//
#define TEMP_0_PIN         0   // Analog Input
#define TEMP_1_PIN         1   // Analog Input
#define TEMP_BED_PIN       2   // Analog Input

//
// Heaters / Fans
//
#define HEATER_BED_PIN     12
#define HEATER_0_PIN       13
//#define HEATER_1_PIN       3   //LO pin
#define FAN_PIN            4

