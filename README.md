# Arduino Nano 33 BLE

## Setup

### Install Arduino CLI Toolchain

https://arduino.github.io/arduino-cli/

### Install Nano 33 BLE Board Support

```bash
$ arduino-cli core install arduino:mbed_nano
```

### Install Libraries
```bash
$ arduino-cli lib install Arduino_LSM9DS1
$ arduino-cli lib install ArduinoBLE
```

## Usage

### Check What Boards Are Connected

```bash
$ arduino-cli board list
```

### Compile

```bash
$ arduino-cli compile --fqbn arduino:mbed_nano:nano33ble <sketch>
```

### Upload

The board needs to be in the bootloader before uploading the sketch. Double tap
the RST button to put the device into the bootloader.

```bash
$ arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:mbed_nano:nano33ble <sketch>
```
