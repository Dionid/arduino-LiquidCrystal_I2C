#include "mgos_arduino_liquidcrystal_i2c.h"

LiquidCrystal_I2C* mgos_liquidcrystal_i2c_create(uint8_t lcd_Addr,uint8_t lcd_cols,uint8_t lcd_rows) {
  return new LiquidCrystal_I2C(lcd_Addr,lcd_cols,lcd_rows);
}

void mgos_liquidcrystal_i2c_close(LiquidCrystal_I2C* lcd) {
  if (lcd != nullptr) {
    delete lcd;
    lcd = nullptr;
  }
}

void mgos_liquidcrystal_i2c_init(LiquidCrystal_I2C* lcd){
  if (lcd == nullptr) return;
  return lcd->init();
}

void mgos_liquidcrystal_i2c_backlight(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->backlight();
}

void mgos_liquidcrystal_i2c_noBacklight(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->noBacklight();
}

uint8_t mgos_liquidcrystal_i2c_getAddr(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return 0;
  return lcd->getAddr();
}

//
// void mgos_liquidcrystal_i2c_clear(LiquidCrystal_I2C* lcd){
//   if (lcd == nullptr) return;
//   return lcd->clear();
// }
//
// void mgos_liquidcrystal_i2c_home(LiquidCrystal_I2C* lcd){
//   if (lcd == nullptr) return;
//   return lcd->home();
// }
//
// void mgos_liquidcrystal_i2c_setCursor(LiquidCrystal_I2C* lcd, uint8_t col, uint8_t row){
//   if (lcd == nullptr) return;
//   return lcd->setCursor(col, row);
// }
//
// void mgos_liquidcrystal_i2c_printstr(LiquidCrystal_I2C* lcd, const char c[]){
//   if (lcd == nullptr) return;
//   return lcd->printstr(c);
// }
