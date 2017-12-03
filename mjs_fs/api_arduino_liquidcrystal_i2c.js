


let LiquidCrystalI2C = {
  _create: ffi('void *mgos_liquidcrystal_i2c_create(int, int, int)'),
  _close: ffi('void mgos_liquidcrystal_i2c_close(void *)'),
  _init: ffi('void mgos_liquidcrystal_i2c_init(void *)'),
  _backlight: ffi('void mgos_liquidcrystal_i2c_backlight(void *)'),
  _noBacklight: ffi('void mgos_liquidcrystal_i2c_noBacklight(void *)'),
  _getAddr: ffi('int mgos_liquidcrystal_i2c_getAddr(void *)'),
  _setCursor: ffi('void mgos_liquidcrystal_i2c_setCursor(void *, int, int)'),
  _print: ffi('int mgos_liquidcrystal_i2c_print(void *, char *)'),
  // _printChar: ffi('int mgos_liquidcrystal_i2c_printChar(void *, char *)'),
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
  _leftToRight: ffi('void mgos_liquidcrystal_i2c_leftToRight(void *)'),
  _rightToLeft: ffi('void mgos_liquidcrystal_i2c_rightToLeft(void *)'),
  _autoscroll: ffi('void mgos_liquidcrystal_i2c_autoscroll(void *)'),
  _noAutoscroll: ffi('void mgos_liquidcrystal_i2c_noAutoscroll(void *)'),
  _write: ffi('int mgos_liquidcrystal_i2c_write(void *, int)'),
  _command: ffi('void mgos_liquidcrystal_i2c_command(void *, int)'),

  create: function(lcd_Addr, lcd_cols, lcd_rows) {
    let obj = Object.create(LiquidCrystalI2C._proto);
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

    print: function(str) {
      return LiquidCrystalI2C._print(this.lcd, str);
    },

    setCursor: function(row, col) {
      return LiquidCrystalI2C._setCursor(this.lcd, row, col);
    }

    backlight: function() {
      return LiquidCrystalI2C._backlight(this.lcd);
    },

    noBacklight: function() {
      return LiquidCrystalI2C._noBacklight(this.lcd);
    },

    clear: function() {
      return LiquidCrystalI2C._clear(this.lcd);
    },

    home: function() {
      return LiquidCrystalI2C._home(this.lcd);
    },

    noDisplay: function() {
      return LiquidCrystalI2C._noDisplay(this.lcd);
    },

    display: function() {
      return LiquidCrystalI2C._display(this.lcd);
    },

    noBlink: function() {
      return LiquidCrystalI2C._noBlink(this.lcd);
    },

    blink: function() {
      return LiquidCrystalI2C._blink(this.lcd);
    },

    noCursor: function() {
      return LiquidCrystalI2C._noCursor(this.lcd);
    },

    cursor: function() {
      return LiquidCrystalI2C._cursor(this.lcd);
    },

    scrollDisplayLeft: function() {
      return LiquidCrystalI2C._scrollDisplayLeft(this.lcd);
    },

    scrollDisplayRight: function() {
      return LiquidCrystalI2C._scrollDisplayRight(this.lcd);
    },

    leftToRight: function() {
      return LiquidCrystalI2C._leftToRight(this.lcd);
    },

    rightToLeft: function() {
      return LiquidCrystalI2C._rightToLeft(this.lcd);
    },

    autoscroll: function() {
      return LiquidCrystalI2C._autoscroll(this.lcd);
    },

    noAutoscroll: function() {
      return LiquidCrystalI2C._noAutoscroll(this.lcd);
    },

    write: function(b) {
      return LiquidCrystalI2C._write(this.lcd, b);
    },

    command: function(cmd) {
      return LiquidCrystalI2C._command(this.lcd, cmd);
    }
  }
}
