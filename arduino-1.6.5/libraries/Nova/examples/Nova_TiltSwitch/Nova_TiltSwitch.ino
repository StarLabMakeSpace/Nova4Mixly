 /*
Nova_TiltSwitch

Serial port will print "Hello",When the Tilt Switch Trigger.

Created 15 Dec 2015
By Blue

http://easy.cc/wiki/index.php/Nova
*/

#include <Nova.h>

TiltSwitch tilt = TiltSwitch(S0); // A0、A1、A2、A3、S0、S1、S2、S3 

void setup() {
 Serial.begin(9600);
}

void loop() {
  
  if(tilt.State() == true)
  {
    Serial.println("Hello");
  }
}
