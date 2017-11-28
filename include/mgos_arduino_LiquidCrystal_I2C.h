
/*
 * Arduino LiquidCrystal_I2C library API wrapper
 */
#ifndef _MGOS_ARDUINO_LIQUID_CRYSTAL_I2C_H_
#define _MGOS_ARDUINO_LIQUID_CRYSTAL_I2C_H_

#include "Wire.h"

#ifdef __cplusplus
#include "LiquidCrystal_I2C.h"
#else
typedef struct LiquidCrystal_I2CTag LiquidCrystal_I2C;
#endif

#ifdef __cplusplus
extern "C"
{
#endif

/*
 * Create an LiquidCrystal_I2C instance, with the given I2C address.
 */
// LiquidCrystal_I2C* mgos_liquidcrystal_i2c_create(uint8_t lcd_Addr,uint8_t lcd_cols,uint8_t lcd_rows);
//
// void mgos_liquidcrystal_i2c_begin(LiquidCrystal_I2C* lcd, uint8_t cols, uint8_t rows, uint8_t charsize = LCD_5x8DOTS );
//
// void mgos_liquidcrystal_i2c_close(LiquidCrystal_I2C* lcd);
//
// void mgos_liquidcrystal_i2c_init(LiquidCrystal_I2C* lcd);
//
// void mgos_liquidcrystal_i2c_backlight(LiquidCrystal_I2C* lcd);
//
// void mgos_liquidcrystal_i2c_clear(LiquidCrystal_I2C* lcd);
//
// void mgos_liquidcrystal_i2c_home(LiquidCrystal_I2C* lcd);
//
// void mgos_liquidcrystal_i2c_setCursor(LiquidCrystal_I2C* lcd, uint8_t, uint8_t);
//
// void mgos_liquidcrystal_i2c_printstr(LiquidCrystal_I2C* lcd, const char c[]);


#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif /* _MGOS_ARDUINO_LIQUID_CRYSTAL_I2C_H_ */
