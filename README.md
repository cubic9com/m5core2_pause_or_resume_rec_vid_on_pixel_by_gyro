# Overview

A sketch for [M5Stack Core2](https://docs.m5stack.com/#/en/core/core2).

This sketch can be used to pause or resume recording video on your Google Pixel phone by detecting raising your leg with the gyro sensor of the M5Stack Core2.

# Video

Video is available on [Twitter](https://twitter.com/cubic9com/status/1537970509526466560).

# Requirements

- Hardware
  - M5Stack Core2
  - Google Pixel phone
- Software
  - [Arduino IDE](https://www.arduino.cc/en/software)
  - [CP210x driver](https://docs.m5stack.com/en/quick_start/m5core/arduino)
  - [M5Stack Arduino Library (you can get it on the board manager on the Arduino IDE)](https://docs.m5stack.com/en/quick_start/m5core/arduino)
  - [ESP32 BLE Mouse library](https://github.com/T-vK/ESP32-BLE-Mouse) (see below)

# Installation

1. Install [ESP32 BLE Mouse library](https://github.com/T-vK/ESP32-BLE-Mouse).
1. Download this sketch from [GitHub](https://github.com/cubic9com/m5core2_pause_or_resume_rec_vid_on_pixel_by_gyro/).
1. Launch [Arduino IDE](https://www.arduino.cc/).
1. Open this sketch.
1. Compile and upload this sketch to M5Stack Core2.

# Usage

1. Turn on your M5Stack Core2.
1. Pair the M5Stack, as a BLE mouse, by operating your Pixel phone.
1. Put the M5Stack in your pants pocket.
1. Launch the camera app on the Pixel.
1. Switch to the video mode.
1. Then, each time you raise your leg, the M5Stack pauses or resumes recording video.

# LICENSE

Copyright (C) 2022, cubic9com All rights reserved.

This code is licensed under the MIT license.

See file LICENSE for more information.
