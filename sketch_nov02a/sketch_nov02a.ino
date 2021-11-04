#include <Adafruit_NeoPixel.h>

#define LED_COUNT 300
#define PIN1        2
#define PIN2        3
#define PIN3        4

Adafruit_NeoPixel pixels(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);
int step_num = 0;
int delta = 1;

int color[] = {255, 255, 0};

void setup() {
  pixels.begin();
}


void loop() {
  if(digitalRead(PIN1) == 1) {
    
    if(digitalRead(PIN1) == 1)
    if(digitalRead(PIN1) == 1) {
      if(digitalRead(PIN1) == 1) {
    
      } else {
      
      }
    } else {
      
    }
  } else {
    
  }
  
  

}
