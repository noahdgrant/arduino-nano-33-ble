.PHONY: all upload

all:
	arduino-cli compile --fqbn arduino:mbed_nano:nano33ble elevator_kws.ino

upload:
	arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:mbed_nano:nano33ble elevator_kws.ino
