# Arduino Nano 33 BLE

## Install Arduino CLI Toolchain

https://arduino.github.io/arduino-cli/

## Check What Boards Are Connected

```bash
arduino-cli board list
```

## Compile

```bash
arduino-cli compile --fqbn arduino:mbed_nano:nano33ble <sketch>
```

## Upload

The board needs to be in the bootloader before uploading the sketch. Double tap
the RST button to put the device into the bootloader.

```bash
arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:mbed_nano:nano33ble <sketch>
```
