#include "mgos_arduino_liquidcrystal_i2c.h"

LiquidCrystal_I2C* mgos_liquidcrystal_i2c_create(int lcd_Addr, int lcd_cols, int lcd_rows) {
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

int mgos_liquidcrystal_i2c_getAddr(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return 0;
  return lcd->getAddr();
}

void mgos_liquidcrystal_i2c_setCursor(LiquidCrystal_I2C* lcd, int col, int row){
  if (lcd == nullptr) return;
  return lcd->setCursor(col, row);
}

int mgos_liquidcrystal_i2c_print(LiquidCrystal_I2C* lcd, const char *str) {
  if (lcd == nullptr) return 0;
  return lcd->print(str);
}

int mgos_liquidcrystal_i2c_printChar(LiquidCrystal_I2C* lcd, const char *c) {
  if (lcd == nullptr) return 0;
  return lcd->print(c);
}

void mgos_liquidcrystal_i2c_clear(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->clear();
}

void mgos_liquidcrystal_i2c_home(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->home();
}

void mgos_liquidcrystal_i2c_noDisplay(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->noDisplay();
}

void mgos_liquidcrystal_i2c_display(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->display();
}

void mgos_liquidcrystal_i2c_noBlink(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->noBlink();
}

void mgos_liquidcrystal_i2c_blink(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->blink();
}

void mgos_liquidcrystal_i2c_noCursor(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->noCursor();
}

void mgos_liquidcrystal_i2c_cursor(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->cursor();
}

void mgos_liquidcrystal_i2c_scrollDisplayLeft(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->scrollDisplayLeft();
}

void mgos_liquidcrystal_i2c_scrollDisplayRight(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->scrollDisplayRight();
}

void mgos_liquidcrystal_i2c_printLeft(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->printLeft();
}

void mgos_liquidcrystal_i2c_printRight(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->printRight();
}

void mgos_liquidcrystal_i2c_leftToRight(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->leftToRight();
}

void mgos_liquidcrystal_i2c_rightToLeft(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->rightToLeft();
}

void mgos_liquidcrystal_i2c_shiftIncrement(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->shiftIncrement();
}

void mgos_liquidcrystal_i2c_shiftDecrement(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->shiftDecrement();
}

void mgos_liquidcrystal_i2c_autoscroll(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->autoscroll();
}


void mgos_liquidcrystal_i2c_noAutoscroll(LiquidCrystal_I2C* lcd) {
  if (lcd == nullptr) return;
  return lcd->noAutoscroll();
}

// void mgos_liquidcrystal_i2c_createChar(LiquidCrystal_I2C* lcd, int location, int *charmap) {
//   if (lcd == nullptr) return;
//   return lcd->createChar(location, charmap);
// }

int mgos_liquidcrystal_i2c_write(LiquidCrystal_I2C* lcd, int value) {
  if (lcd == nullptr) return 0;
  return lcd->write(value);
}

void mgos_liquidcrystal_i2c_command(LiquidCrystal_I2C* lcd, int value) {
  if (lcd == nullptr) return;
  return lcd->command(value);
}
