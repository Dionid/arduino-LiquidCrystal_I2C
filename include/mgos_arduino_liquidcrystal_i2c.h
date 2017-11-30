
/*
 * Arduino LiquidCrystal_I2C library API wrapper
 */
#ifndef _MGOS_ARDUINO_LIQUID_CRYSTAL_I2C_H_
#define _MGOS_ARDUINO_LIQUID_CRYSTAL_I2C_H_

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
LiquidCrystal_I2C* mgos_liquidcrystal_i2c_create(uint8_t lcd_Addr,uint8_t lcd_cols,uint8_t lcd_rows);

void mgos_liquidcrystal_i2c_close(LiquidCrystal_I2C* lcd);

void mgos_liquidcrystal_i2c_init(LiquidCrystal_I2C* lcd);

void mgos_liquidcrystal_i2c_backlight(LiquidCrystal_I2C* lcd);

void mgos_liquidcrystal_i2c_noBacklight(LiquidCrystal_I2C* lcd);

uint8_t mgos_liquidcrystal_i2c_getAddr(LiquidCrystal_I2C* lcd);

void mgos_liquidcrystal_i2c_setCursor(LiquidCrystal_I2C* lcd, uint8_t col, uint8_t row);

size_t mgos_liquidcrystal_i2c_print(LiquidCrystal_I2C* lcd, const char str[]);

size_t mgos_liquidcrystal_i2c_printChar(LiquidCrystal_I2C* lcd, char c);

void mgos_liquidcrystal_i2c_clear(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_home(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_noDisplay(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_display(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_noBlink(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_blink(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_noCursor(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_cursor(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_scrollDisplayLeft(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_scrollDisplayRight(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_printLeft(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_printRight(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_leftToRight(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_rightToLeft(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_shiftIncrement(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_shiftDecrement(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_noBacklight(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_autoscroll(LiquidCrystal_I2C* lcd);
void mgos_liquidcrystal_i2c_noAutoscroll(LiquidCrystal_I2C* lcd);

void mgos_liquidcrystal_i2c_createChar(LiquidCrystal_I2C* lcd, uint8_t, uint8_t);
size_t mgos_liquidcrystal_i2c_write(LiquidCrystal_I2C* lcd, uint8_t);
void mgos_liquidcrystal_i2c_command(LiquidCrystal_I2C* lcd, uint8_t);


#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif /* _MGOS_ARDUINO_LIQUID_CRYSTAL_I2C_H_ */
