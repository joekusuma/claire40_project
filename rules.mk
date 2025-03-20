# MCU name
MCU = RP2040

# Bootloader selection
#CONVERT_TO = elite_pi
BOOTLOADER = rp2040
LTO_ENABLE = no
SERIAL_DRIVER = vendor
# CONVERT_TO = elite_pi
# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
SPLIT_KEYBOARD = yes	
# SERIAL_DRIVER = bitbang
CONSOLE_ENABLE = yes
WPM_ENABLE = yes
OLED_ENABLE = yes            
OLED_DRIVER = SSD1306
ENCODER_ENABLE = yes
# ENCODER_MAP_ENABLE = yes
# EXTRAFLAGS += -flto