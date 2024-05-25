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
    M5Cardputer.Display.setBrightness(0);
    M5Cardputer.Display.clear();
    
}

void loop() { 
}
