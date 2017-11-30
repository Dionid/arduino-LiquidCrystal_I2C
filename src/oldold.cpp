// WORKING CODE

// #include <LiquidCrystal_I2C.h>
//
// LiquidCrystal_I2C *lcd = NULL;
//
// void setup(void)
// {
//   lcd = new LiquidCrystal_I2C(0x3F,20,4);
//   printf("Setup start\n");
//   printf("Setup end\n");
// }
//
// void loop() {
//   delay(1000);
//   lcd->init();
//   lcd->backlight();
//   lcd->setCursor(0,0);
//   lcd->print("DAVID");
//   delay(1000);
//   printf("YOU MADE IT!\n");
// }

// ____________

// #include <Wire.h>
// #include "mgos_i2c.h"
// //
// TwoWire *w = NULL;
// //
// void setup() {
//   printf("SSSSSSSSSqweqweqweSSSSSS\n");
//   w = new TwoWire();
//   // w->begin();
//   // while (mgos_i2c_get_global() == nullptr) {
//   //     printf("I2C IS NULL!!!\n");
//       // delay(1000);
//   // }
//   // printf("OK!!!\n");
//   // w->beginTransmission(0x3F);
//   // size_t byttts = w->write(0 | 0x00);
//   // printf("%zu\n", byttts);
//   // uint8_t resss = w->endTransmission();
//   // printf("%u\n", resss);
//   // w->beginTransmission(0x3F);
//   // w->write(0 | 0x08);
//   // w->endTransmission();
//   // w->beginTransmission(0x3F);
//   // w->write(0 | 0x00);
//   // w->endTransmission();
//   printf("UUUUUUUUUUUUUUUU\n");
//   // w->begin();
//   // delay(1000);
//   // w->beginTransmission(0x3F);
//   // size_t byttts = w->write(0 | 0x00);
//   // printf("%zu\n", byttts);
//   // uint8_t resss = w->endTransmission();
//   // printf("%u\n", resss);
// }
//
//
// void loop(void)
// {
//   w->begin();
//   delay(1000);
//   w->beginTransmission(0x3F);
//   size_t byts = w->write(0 | 0x00);
//   printf("%zu\n", byts);
//   uint8_t res = w->endTransmission();
//   printf("%u\n", res);
//   delay(1000);
//   w->beginTransmission(0x3F);
//   size_t byttts = w->write(0 | 0x08);
//   printf("%zu\n", byttts);
//   uint8_t resss = w->endTransmission();
//   printf("%u\n", resss);
//   delay(1000);
//   w->beginTransmission(0x3F);
//   size_t bytttts = w->write(0 | 0x00);
//   printf("%zu\n", bytttts);
//   uint8_t ressss = w->endTransmission();
//   printf("%u\n", ressss);
//   // delay(1000);
// }

// #include <Wire.h>
//
// //
// void setup() {
//   printf("SSSSSSSSSqweqweqweSSSSSS\n");
//   printf("UUUUUUUUUUUUUUUU\n");
// }
//
// void loop(void)
// {
//   Wire.begin();
//   delay(1000);
//   Wire.beginTransmission(0x3F);
//   size_t byts = Wire.write(0 | 0x00);
//   printf("%zu\n", byts);
//   uint8_t res = Wire.endTransmission();
//   printf("%u\n", res);
//   delay(1000);
//   Wire.beginTransmission(0x3F);
//   size_t byttts = Wire.write(0 | 0x08);
//   printf("%zu\n", byttts);
//   uint8_t resss = Wire.endTransmission();
//   printf("%u\n", resss);
//   delay(1000);
//   Wire.beginTransmission(0x3F);
//   size_t bytttts = Wire.write(0 | 0x00);
//   printf("%zu\n", bytttts);
//   uint8_t ressss = Wire.endTransmission();
//   printf("%u\n", ressss);
//   // delay(1000);
// }
