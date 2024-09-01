/*
 * @file Display_off.ino
 * @author Kestrelrain
 * @brief M5Cardputer Display off for charging
 * @version 0.1
 * @date 2024-5-25
 *
 *
 * @Hardware: M5Cardputer
 * @Platform Version: Arduino M5Stack Board Manager v2.1.1
 * @Dependent Library:
 * M5GFX: https://github.com/m5stack/M5GFX
 * M5Unified: https://github.com/m5stack/M5Unified
 */
#include "M5Cardputer.h"
#include "M5GFX.h"
#include "M5Unified.h"

void setup() {
    auto cfg = M5.config();
    M5Cardputer.begin(cfg);
    M5.Lcd.setRotation(1);
    M5.Lcd.setTextSize(2.5);
    M5.Lcd.fillScreen(0x0000);
    M5.Lcd.setCursor(0, 1);
    M5.Lcd.println("Display_off_v0.3");
    M5.Lcd.setCursor(0, 30, 1);
    M5.Lcd.println("By Kestrelrain");
    delay(4000);
    
    M5Cardputer.Display.setBrightness(0);
    M5Cardputer.Display.clear();
    
}

void loop() { 
}
