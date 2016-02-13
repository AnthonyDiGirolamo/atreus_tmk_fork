if uname -a | grep 'arch'
then
	while [ 1 ] ; do sudo avrdude -p atmega32u4 -c avr109 -U flash:w:atreus.hex -P /dev/ttyACM0 ; done
else
	KEYMAP=colemak_tap make clean && KEYMAP=colemak_tap make upload USB=/dev/cu.usbmodem1421
fi

