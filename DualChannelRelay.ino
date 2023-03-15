#include "arduino_secrets.h"
#include "thingProperties.h"

void setup() {
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);

  Serial.begin(9600);
  delay(1500);

  initProperties();

  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();


}
void onRelay1Change()  {
  if (relay1)
  {
    digitalWrite(D0, LOW);

  }
  else
  {
    digitalWrite(D0, HIGH);
  }
}
void onRelay2Change()  {
  if (relay2)
  {
    digitalWrite(D1, LOW);
  }
  else
  {
    digitalWrite(D1, HIGH);
  }

}

/*
  Since MasaLambasi is READ_WRITE variable, onMasaLambasiChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onMasaLambasiChange()  {
  // Add your code here to act upon MasaLambasi change
}