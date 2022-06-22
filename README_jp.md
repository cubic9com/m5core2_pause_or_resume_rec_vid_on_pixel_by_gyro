[English](README.md) | 日本語

# 概要

[M5Stack Core2](https://docs.m5stack.com/#/en/core/core2)用のスケッチです。

GoogleのPixelスマートフォンで動画を撮る際、後でPCで動画を編集しなくて済むように、カメラアプリでの録画中に一時停止ボタンや再開ボタンを押すことがよくあります。ただ、片手でボタンを押す必要があるので不便です。そこで、M5Stack Core2のジャイロセンサーで足を上げていることを検知して、これらのボタンを押す装置を開発しました。PixelにM5StackをBluetoothマウスとして認識させることで、このデバイスを実現しています。

# 動画

[動画はTwitterでご覧いただけます。](https://twitter.com/cubic9com/status/1537970509526466560)

# 必要なもの

- ハードウェア
  - M5Stack Core2
  - Google Pixelスマートフォン
- ソフトウェア
  - [Arduino IDE](https://www.arduino.cc/en/software)
  - [CP210x driver](https://docs.m5stack.com/en/quick_start/m5core/arduino)
  - [M5Stack Arduino Library （Arduino IDEのボードマネージャで入手できます）](https://docs.m5stack.com/en/quick_start/m5core/arduino)
  - [ESP32 BLE Mouse library](https://github.com/T-vK/ESP32-BLE-Mouse) （下記参照）

# インストール方法

1. [ESP32 BLE Mouse library](https://github.com/T-vK/ESP32-BLE-Mouse) をインストールする。
1. [GitHub](https://github.com/cubic9com/m5core2_pause_or_resume_rec_vid_on_pixel_by_gyro/) からこのスケッチを入手する。
1. [Arduino IDE](https://www.arduino.cc/) を起動する。
1. このスケッチを開く。
1. このスケッチをコンパイルし、M5Stack Core2に書き込む。

# 使用方法

1. M5Stack Core2の電源を入れる。
1. Pixelスマートフォンを操作して、M5StackをBluetoothマウスとしてペアリングする。
1. ズボンのポケットにM5Stackを入れる。
1. Pixelでカメラアプリを起動する。
1. ビデオモードに切り替える。
1. 足を上げるたびに、M5Stackがビデオ録画を一時停止または再開する。

# ライセンス

Copyright (C) 2022, cubic9com All rights reserved.

このソースコードはMIT licenseにて提供されます。

詳細はLICENSEファイルをご覧ください。
