#include "mgos_arduino_LiquidCrystal_I2C.h"

LiquidCrystal_I2C* mgos_LiquidCrystal_I2C_create(uint8_t lcd_Addr,uint8_t lcd_cols,uint8_t lcd_rows) {
  return new LiquidCrystal_I2C(lcd_Addr,lcd_cols,lcd_rows);
}

void mgos_LiquidCrystal_I2C_begin(LiquidCrystal_I2C* lcd, uint8_t cols, uint8_t rows, uint8_t charsize){
  if (lcd == nullptr) return;
  return lcd->begin(cols, rows, charsize);
}

void mgos_LiquidCrystal_I2C_init(LiquidCrystal_I2C* lcd){
  if (lcd == nullptr) return;
  return lcd->init();
}

void mgos_LiquidCrystal_I2C_clear(LiquidCrystal_I2C* lcd){
  if (lcd == nullptr) return;
  return lcd->clear();
}

void mgos_LiquidCrystal_I2C_home(LiquidCrystal_I2C* lcd){
  if (lcd == nullptr) return;
  return lcd->home();
}

void mgos_LiquidCrystal_I2C_setCursor(LiquidCrystal_I2C* lcd, uint8_t col, uint8_t row){
  if (lcd == nullptr) return;
  return lcd->setCursor(col, row);
}

void mgos_LiquidCrystal_I2C_printstr(LiquidCrystal_I2C* lcd, const char c[]){
  if (lcd == nullptr) return;
  return lcd->printstr(c);
}
