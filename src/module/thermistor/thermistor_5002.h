/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4267 K, 4.7 kOhm pull-up
// 100k ParCan thermistor (104GT-2)
// ATC Semitec 104GT-2/104NT-4-R025H42G (Used in ParCan)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
const short temptable_5002[][2] PROGMEM = {
  { OV(   1), 713 },
  { OV(  17), 300 }, // top rating 300C
  { OV(  20), 290 },
  { OV(  23), 280 },
  { OV(  27), 270 },
  { OV(  29), 260 },
  { OV(  31), 237 },
  { OV(  37), 227 },
  { OV(  46), 217 },
  { OV(  57), 208 },
  { OV(  69), 199 },
  { OV(  85), 192 },
  { OV( 101), 188 },
  { OV( 133), 175 },
  { OV( 155), 170 },
  { OV( 189), 160 },
  { OV( 230), 150 },
  { OV( 278), 140 },
  { OV( 336), 130 },
  { OV( 400), 119 },/////////////////
  { OV( 478), 109 },
  { OV( 555),  99 },
  { OV( 635),  88 },
  { OV( 710),  73 },
  { OV( 785),  64 },
  { OV( 845),  55 },
  { OV( 899),  47 },
  { OV( 924),  43 },
  { OV( 975),  25 },
  { OV( 986),  20 },
  { OV(1000),  10 },
  { OV(1010),   0 }
};
