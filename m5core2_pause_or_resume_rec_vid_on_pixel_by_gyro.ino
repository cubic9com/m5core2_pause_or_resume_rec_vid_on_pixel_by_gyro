#include <M5Core2.h>
#include <BleMouse.h>

#define PIXEL4A_DELTA_X 16
#define PIXEL4A_DELTA_Y -40

#define GYRO_THRESHOLD 115
#define INTERVAL_TO_IGNORE_GESTURE 1500

BleMouse bleMouse;
bool pointerOnButton = false;

TFT_eSprite disp(&M5.Lcd);

float gyroX = 0.0F;
float gyroY = 0.0F;
float gyroZ = 0.0F;

float offsetGyroZ = 0.0F;

void setup(){
  M5.begin();
  M5.IMU.Init();

  disp.createSprite(320, 240);

  bleMouse.begin();
}

void loop() {
  disp.fillScreen(TFT_BLACK);
  disp.setCursor(0, 0);

  if(bleMouse.isConnected()) {
    M5.IMU.getGyroData(&gyroX, &gyroY, &gyroZ);

    disp.printf("Your M5Stack Core2 is connected as a BLE mouse.\n");      

    if (pointerOnButton == true) {
      disp.printf("The mouse pointer has arrived on the button.\n");      
      disp.printf("gyroZ: %5.2f\n", gyroZ);
    } else {
      // move the mouse pointer to the button.
      delay(5000);
      for (int i = 0; i < 15; i++) {
        bleMouse.move(-100, 100);
        delay(150);
      }
      for (int i = 0; i < 10; i++) {
        bleMouse.move(PIXEL4A_DELTA_X, PIXEL4A_DELTA_Y);
        delay(150);
      }
      delay(150);
      pointerOnButton = true;
    }
    if (abs(gyroZ) > GYRO_THRESHOLD) {
      disp.printf("Clicking the button...\n");
      bleMouse.click();
      delay(INTERVAL_TO_IGNORE_GESTURE);
    }
  } else {
    disp.printf("Please pair your M5Stack Core2, as a BLE mouse,\n", gyroZ);
    disp.printf("with your Pixel phone by Operating the phone.\n", gyroZ);
  }

  disp.pushSprite(0, 0);
}
