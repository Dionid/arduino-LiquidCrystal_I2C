

let LiquidCrystalI2C = {
  _create: ffi('void *mgos_liquidcrystal_i2c_create(int, int, int)'),
  _close: ffi('void mgos_liquidcrystal_i2c_close(void *)'),
  _init: ffi('void mgos_liquidcrystal_i2c_init(void *)'),
  _backlight: ffi('void mgos_liquidcrystal_i2c_backlight(void *)'),
  _noBacklight: ffi('void mgos_liquidcrystal_i2c_noBacklight(void *)'),
  _getAddr: ffi('int mgos_liquidcrystal_i2c_getAddr(void *)'),
  _setCursor: ffi('void mgos_liquidcrystal_i2c_setCursor(void *, int, int)'),
  _print: ffi('size_t mgos_liquidcrystal_i2c_print(void *, char *)'),
  _printChar: ffi('size_t mgos_liquidcrystal_i2c_printChar(void *, char *)'),
  _clear: ffi('void mgos_liquidcrystal_i2c_clear(void *)'),
  _home: ffi('void mgos_liquidcrystal_i2c_home(void *)'),
  _noDisplay: ffi('void mgos_liquidcrystal_i2c_noDisplay(void *)'),
  _display: ffi('void mgos_liquidcrystal_i2c_display(void *)'),
  _noBlink: ffi('void mgos_liquidcrystal_i2c_noBlink(void *)'),
  _blink: ffi('void mgos_liquidcrystal_i2c_blink(void *)'),
  _noCursor: ffi('void mgos_liquidcrystal_i2c_noCursor(void *)'),
  _cursor: ffi('void mgos_liquidcrystal_i2c_cursor(void *)'),
  _scrollDisplayLeft: ffi('void mgos_liquidcrystal_i2c_scrollDisplayLeft(void *)'),
  _scrollDisplayRight: ffi('void mgos_liquidcrystal_i2c_scrollDisplayRight(void *)'),
  _printLeft: ffi('void mgos_liquidcrystal_i2c_printLeft(void *)'),
  _printRight: ffi('void mgos_liquidcrystal_i2c_printRight(void *)'),
  _leftToRight: ffi('void mgos_liquidcrystal_i2c_leftToRight(void *)'),
  _rightToLeft: ffi('void mgos_liquidcrystal_i2c_rightToLeft(void *)'),
  _shiftIncrement: ffi('void mgos_liquidcrystal_i2c_shiftIncrement(void *)'),
  _shiftDecrement: ffi('void mgos_liquidcrystal_i2c_shiftDecrement(void *)'),
  _noBacklight: ffi('void mgos_liquidcrystal_i2c_noBacklight(void *)'),
  _autoscroll: ffi('void mgos_liquidcrystal_i2c_autoscroll(void *)'),
  _noAutoscroll: ffi('void mgos_liquidcrystal_i2c_noAutoscroll(void *)'),
  // _createChar: ffi('void mgos_liquidcrystal_i2c_createChar(void *, int, int[])'),
  _write: ffi('size_t mgos_liquidcrystal_i2c_write(void *, int)'),
  _command: ffi('void mgos_liquidcrystal_i2c_command(void *, int)'),

  create: function(lcd_Addr, lcd_cols, lcd_rows) {
    let obj = Object.create(LiquidCrystalI2C._proto);
    // Initialize DallasTemperature library.
    // Return value: handle opaque pointer.
    obj.lcd = LiquidCrystalI2C._create(lcd_Addr, lcd_cols, lcd_rows);
    return obj;
  },

  _proto: {
    close: function() {
      return LiquidCrystalI2C._close(this.lcd);
    },

    init: function() {
      return LiquidCrystalI2C._init(this.lcd);
    },

    backlight: function() {
      return LiquidCrystalI2C._backlight(this.lcd);
    },

    noBacklight: function() {
      return LiquidCrystalI2C._noBacklight(this.lcd);
    },
  }
}
