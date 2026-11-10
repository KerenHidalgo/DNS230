#include <Adafruit_CircuitPlayground.h>
void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin(); 
}

void loop() {
  // put your main code here, to run repeatedly:
  if (CircuitPlayground.motionX() > 6 ||
      CircuitPlayground.motionY() > 6 ) {

      //Devient orange en mouvement
       for (int i = 0 ; i < 10; i++) {
          CircuitPlayground.setPixelColor(i,255,100,0);
       }
  } else {
    //Pas de mouvement = pas de lumière
     for (int i = 0 ; i < 10; i++) {
       CircuitPlayground.setPixelColor(i,0,0,0);
     }
  }

  delay(100);

}
