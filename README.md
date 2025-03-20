# Claire40 Split Modular Keyboard

<div align="center">
  <table>
    <tr>
      <td width="70%" align="center">
        <img src="https://github.com/joekusuma/claire40_project/blob/main/pics/end.jpg" alt="Claire40 Keyboard - Completed" width="90%">
      </td>
      <td width="30%" align="center">
        <img src="https://github.com/joekusuma/claire40_project/blob/main/pics/walk_oled.gif" alt="Claire40 Keyboard - OLED Animation" width="40%">
        <br>
        <em>Emulated OLED</em>
      </td>
    </tr>
    <tr>
      <td colspan="2" align="center">
        <img src="https://github.com/joekusuma/claire40_project/blob/main/pics/stl.jpg" alt="Claire40 Keyboard - STL Files" width="48%" style="margin-top: 20px;">
      </td>
    </tr>
  </table>
</div>


Claire40 is my personal project—a customizable split modular mechanical keyboard featuring an EC11 encoder, OLED displays, and magnetic connections.

## Overview

Claire40 is a split ergonomic keyboard designed with modularity and customization in mind.

## Features

- Split ergonomic design
- Magnetic connections between halves
- OLED displays with customizable animations
- Encoder functionality
- QMK firmware support
- RP2040-based controller compatibility
- Hot-swappable switches
- Low profile design

## Wiring Guide

### Right Side

```
.------------------------------------------------------------------------------------------.
| R000 | R001 | R002 | R003 | R004 | R005 | R006 | R007 | R008 | R009 | R010 | R011 | R012 |  Row 4 (GP4)
|------+------+------+------+------+------+------+------+------+------+------+------+------|
| R100 | R101 | R102 | R103 | R104 | R105 | R106 | R107 | R108 | R109 | R110 |      | R112 |  Row 5 (GP5)
|------+------+------+------+------+------+------+------+------+------+------+------+------|
| R200 |      | R202 | R203 | R204 | R205 | R206 | R207 | R208 | R209 | R210 | R211 | R212 |  Row 6 (GP6)
|------+------+------+------+------+------+------+------+------+------+------+------+------|
| R300 | R301 | R302 |      |      |      | R306 |      |      |      | R310 | R311 | R312 |  Row 7 (GP7)
'------------------------------------------------------------------------------------------'
  |      |      |      |      |      |      |      |      |      |      |      |      |
 Col0   Col1   Col2   Col3   Col4   Col5   Col6   Col7   Col8   Col9   Col10  Col11  Col12
(GP8)  (GP9)  (GP12) (GP13) (GP14) (GP15) (GP16) (GP21) (GP23) (GP20) (GP22) (GP26) (GP27)
```

### Right Side Legends

```
.------------------------------------------------------------------------------------------.
|  Esc |  Q   |  W   |  E   |  R   |  T   |  Y   |  U   |  I   |  O   |  P   |BckSpc| EC11 |
|------+------+------+------+------+------+------+------+------+------+------+------+------|
|  Tab |  A   |  S   |  D   |  F   |  G   |  H   |  J   |  K   |  L   |  '   |      | Enter|
|------+------+------+------+------+------+------+------+------+------+------+------+------|
| Shift|      |  Z   |  X   |  C   |  V   |  B   |  N   |  M   |  ,   |  .   |  ↑   |  Fn  |
|------+------+------+------+------+------+------+------+------+------+------+------+------|
| Ctrl | Win  |  Alt |      |      |      | Space|      |      |      |  ←   |  ↓   |  →   |
'------------------------------------------------------------------------------------------'
```

### Left Side (Macro)

```
.---------------------------.
| L000 | L001 | L002 | L003 |  Row 0 (GP4)
|------+------+------+------|
| L100 | L101 | L102 | L103 |  Row 1 (GP5)
|------+------+------+------|
| L200 | L201 | L202 | L203 |  Row 2 (GP6)
|------+------+------+------|
| L300 | L301 | L302 | L303 |  Row 3 (GP7)
'---------------------------'
  |      |      |      |
  |      |      |      |
 Col0   Col1   Col2   Col3
(GP8)  (GP9)  (GP12) (GP13)
```

### Left Side Legends (Macro)

```
.---------------------------.
|  7   |  8   |  9   |  a   |
|------+------+------+------|
|  4   |  5   |  6   |  b   |
|------+------+------+------|
|  1   |  2   |  3   |  c   |
|------+------+------+------|
| shift|  0   |  .   |  d   |
'---------------------------'
```

## Bill of Materials

### Electronics
- 2× Elite Pi or any RP2040 microcontroller
- 2× 0.91" OLED display
- 1× EC11 rotary encoder
- 59× 1N4148 diodes
- 59× Mechanical keyboard switches of your choice
- Copper wiring for connections
- Adafruit 4-pin pogo connectors (https://www.adafruit.com/product/5358)

### Hardware
- 16× M3 20mm screws
- 16× M3 heat inserts
- 4× 7.5mm neodymium magnets
- 8× 5.5mm neodymium magnets
- 1× Acrylic sheet (200mm × 50mm × 2mm) for the back plate

### Printing Materials
- PLA filament

## Build Instructions

### 1. 3D Printing

All STL files are located in the `STL_Files` folder. Print with the following settings for best results:
- Layer height: 0.16mm
- Material: PLA (PETG or ABS will also work for higher durability)
- Infill: 30-50%
- Supports: Required for case (back)

### 2. Prepare the Case

1. Install M3 heat inserts into the designated holes in the case
2. Insert the 7.5mm and 5.5mm neodymium magnets into their slots
3. Cut the acrylic sheet to size and secure it to the bottom of the case

### 3. Wiring

1. Install diodes according to the wiring diagram
2. Wire the keyboard matrix following the pinout defined in the configuration
3. Install the OLED displays and connect to the controllers
4. Mount the rotary encoder and wire to the controllers

### 4. Controller Installation

1. Flash the QMK firmware to both Elite Pi (or RP2040) controllers
2. Mount the controllers in their designated areas
3. Install the pogo pin connectors for establishing connections between halves

### 5. Final Assembly

1. Install switches into the switch plate
2. Connect all components to the controllers
3. Secure the case together with M3 screws
4. Sanding may be required, hot glue may be required to affix OLED and Encoder

## Firmware Setup

The Claire40 runs on QMK firmware. The configuration is provided in the config files:

```json
{
    "keyboard_name": "claire40", 
    "manufacturer": "joekusuma", 
    "url": "joekusuma.com", 
    "usb": {
        "pid": "0x0111",
        "vid": "0x046A",
        "device_version": "1.0.0"
    },
    "maintainer": "qmk", 
    "processor": "RP2040",
    "bootloader": "rp2040",
    "diode_direction": "COL2ROW",
    "matrix_pins": {
        "rows": ["GP4", "GP5", "GP6", "GP7"],
        "cols": ["GP8", "GP9", "GP12", "GP13", "GP14", "GP15", "GP16", "GP21", "GP23", "GP20", "GP22", "GP26", "GP27"]
    },
    "encoder": {
        "rotary": [
            {"pin_a": "GP29", "pin_b": "GP28"}
        ]
    }
}
```

### Setting up QMK

1. Install QMK firmware following instructions at [qmk.fm](https://qmk.fm/)
2. Clone the repository: `git clone https://github.com/qmk/qmk_firmware.git`
3. Create a new keyboard directory: `keyboards/claire40`
4. Copy the provided configuration files to this directory
5. Compile using: `qmk compile -kb claire40 -km default`
6. Flash to your controllers

## Keyboard Layout

The default layout is as follows:

- Base layer: Standard QWERTY layout with modifiers and navigation
- Secondary layer: Numeric input and special characters
- Function layer: Function keys and media controls

The rotary encoder functions:
- Base layer: Left/Right navigation
- Secondary/Function layers: Volume control

## OLED Features

The OLED displays show:
- Current layer information
- WPM (words per minute) counter
- Caps Lock status
- Fun animations (Luna pet)

## Customization

### Keymaps

Edit the `keymap.c` file to customize your layout. The default configuration includes three layers:

```c
enum sofle_layers {
    _QWERTY,
    _SECONDARY,
    _FUNC
};
```

### OLED

You can customize the OLED animations in the `oled_task_user` function in the keymap file.

## Troubleshooting

### Common Issues

1. **Halves not connecting**: Check the pogo pin alignments and magnet polarity
2. **Keys not registering**: Verify diode orientation and matrix wiring
3. **OLED not working**: Check SDA/SCL connections and OLED initialization in firmware
4. **Encoder not functioning**: Verify pin connections and encoder definition in config

## Credits

- QMK Firmware: [qmk.fm](https://qmk.fm/)

## License

This project is released under the MIT License.

