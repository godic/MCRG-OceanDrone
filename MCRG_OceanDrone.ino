#include"MCRG_OceanDrone.h"

void setup() {
  Serial1.begin(9600);
  mainServo.attach(pinServo);
  mainBLDC.attach(pinBLDC);
  mainServo.write(setupServo);
  mainBLDC.writeMicroseconds(setupBLDC);
}

void loop() {
  dataRead(speedBLDC,angleServo,controlMode);

}
