
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
LiquidCrystal_I2C* mgos_liquidcrystal_i2c_create(uint8_t lcd_Addr,uint8_t lcd_cols,uint8_t lcd_rows);

void mgos_liquidcrystal_i2c_close(LiquidCrystal_I2C* lcd);

void mgos_liquidcrystal_i2c_init(LiquidCrystal_I2C* lcd);

void mgos_liquidcrystal_i2c_backlight(LiquidCrystal_I2C* lcd);

void mgos_liquidcrystal_i2c_noBacklight(LiquidCrystal_I2C* lcd);

uint8_t mgos_liquidcrystal_i2c_getAddr(LiquidCrystal_I2C* lcd);

// void mgos_liquidcrystal_i2c_setCursor(LiquidCrystal_I2C* lcd, uint8_t, uint8_t);
//
// size_t mgos_liquidcrystal_i2c_print(LiquidCrystal_I2C* lcd, const String &);
//
// size_t mgos_liquidcrystal_i2c_print(LiquidCrystal_I2C* lcd, const char[]);
//
// size_t mgos_liquidcrystal_i2c_print(LiquidCrystal_I2C* lcd, char);


#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif /* _MGOS_ARDUINO_LIQUID_CRYSTAL_I2C_H_ */
