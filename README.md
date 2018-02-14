# StabiliTeeth
A self-balancing toothbrush for people suffering from Parkinson's disease

## Setup

### Development Environment
 1. Install the [Arduino IDE](https://www.arduino.cc/en/Main/Software)
 2. Download the [I2Cdev library](https://codeload.github.com/jrowberg/i2cdevlib/zip/master)
 3. Extract the folders `i2cdevlib-master\Arduino\MPU6050` and `i2cdevlib-master\Arduino\I2Cdev` to a temp location
 4. Move the 2 folders to the Arduino libraries location - probably `C:\Program Files (x86)\Arduino\libraries`
 5. If this is done correctly, there should be an entry named "MPU6050" under File -> Examples

### 3D Processing (optional)
 1. Download and extract the [Processing software](https://processing.org/download/?processing)
 2. Download the [ToxicLibs complete zip](https://bitbucket.org/postspectacular/toxiclibs/downloads/)
 3. Extract the zip contents to the libraries folder in the processing sketchbook - for me this was found at `C:\Users\USERNAME\Documents\Processing\libraries`

## Running

### For 3D output
 1. Comment out the line `#define OUTPUT_READABLE_YAWPITCHROLL` (should be line 100)
 2. Uncomment the line `//#define OUTPUT_TEAPOT` (should be line 117)
 3. Upload the code to the microcontroller
 4. Open the processing app
 5. Go to File -> Open -> `C:\Program Files (x86)\Arduino\libraries\MPU6050\Examples\MPU6050_DMP6\Processing\MPUTeapot\MPUTeapot.ino`

 ---

 Setup instructions followed from both [DIYHacking](https://diyhacking.com/arduino-mpu-6050-imu-sensor-tutorial/) and [Instructables](http://www.instructables.com/id/MPU6050-Arduino-6-Axis-Accelerometer-Gyro-GY-521-B/?ALLSTEPS)