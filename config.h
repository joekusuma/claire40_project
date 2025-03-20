
#pragma once

/*
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    joe
#define PRODUCT         claire40

#define MATRIX_ROW_PINS { GP4, GP5, GP6, GP7 }
#define MATRIX_COL_PINS { GP8, GP9, GP12, GP13, GP14, GP15, GP16, GP21, GP23, GP20, GP22, GP26, GP27 }
#define DIODE_DIRECTION COL2ROW

#undef STM32_I2C_USE_I2C2
#define STM32_I2C_USE_I2C2 TRUE
*/

#define MATRIX_ROWS 8  //double for split
#define MATRIX_COLS 13

#define HAL_USE_I2C TRUE


#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2500
#define SOFT_SERIAL_PIN GP0
/* 
#define SPLIT_USB_TIMEOUT_POLL 10
#define SOFT_SERIAL_PIN D2
#define SERIAL_DEBUG 
*/

#define SPLIT_HAND_PIN GP1

/* #define MASTER_LEFT 
#define MASTER_RIGHT */
#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 120

