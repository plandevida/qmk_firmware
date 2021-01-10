
# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
OLED_DRIVER_ENABLE = yes        # Enable the display driver

MOUSEKEY_ENABLE = yes           # Mouse keys(+4700)
RGBLIGHT_ENABLE = yes           # Enable WS2812 RGB underlight.
SWAP_HANDS_ENABLE = no         # Enable one-hand typing(+630)
NKRO_ENABLE = no               # Enable send more than 6 keys at once

## Disabled build options
WPM_ENABLE= no					# Enable the count of the words per minute
EXTRAKEY_ENABLE = no            # Enable to use system and audio control keys
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no           # Breathing sleep LED during USB suspend
BOOTMAGIC_ENABLE = no           # Enable access to eeprom settings
CONSOLE_ENABLE = no             # Enable print messages throught HID
MIDI_ENABLE = no                # Enable MIDI sending and receiving
UNICODE_ENABLE = no             # Enable send unicode characters
UNICODEMAP_ENABLE = no          # Enable send unicode characters a map in keymap.c by index
UCIS_ENABLE = no                # Enable send unicode by mnemonics
AUDIO_ENABLE = no               # Enable send audio over pin C6
FAUXCLICKY_ENABLE = no          # Enable use a buzzer
VARIABLE_TRACE = no             # Enable traces on variables
API_SYSEX_ENABLE = no           # Enable send string by SYSEX api
KEY_LOCK_ENABLE = no            # Enable key lock

# Custom transport allows to send layer status to the slave half
SPLIT_TRANSPORT = custom

BOOTLOADER = caterina

# If you want to change the display of OLED, you need to change here
SRC +=  ./keymaps/plandevida-jorne/layer_state_reader.c \
		# ./keymaps/plandevida-jorne/keylogger.c \
        # ./keymaps/plandevida-jorne/logo_reader.c

QUANTUM_LIB_SRC += ./keymaps/plandevida-jorne/transport.c \
				   ./drivers/avr/serial.c
