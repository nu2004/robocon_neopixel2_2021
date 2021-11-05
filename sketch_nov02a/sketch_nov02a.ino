#include <Adafruit_NeoPixel.h>

#define LED_COUNT 300
#define PIN         
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
  pixels.clear;
  if(digitalRead(PIN1) == 1) {
    if(digitalRead(PIN2) == 1){   
      if(digitalRead(PIN3) == 1) {
      pixels.setPixelColor(0,pixels.Color(30,0,0));
      }else{
      pixels.setPixelColor(0,pixels.Color(30,0,0)); 
      }
    }else{   
      if(digitalRead(PIN3) == 1) {
      pixels.setPixelColor(0,pixels.Color(30,0,0)); 
      }else{
      pixels.setPixelColor(0,pixels.Color(30,0,0)); 
      }
    }
  }else{
    if(digitalRead(PIN2) == 1){
      if(digitalRead(PIN3) == 1) {
      pixels.setPixelColor(0,pixels.Color(30,0,0));  
      }else{
      pixels.setPixelColor(0,pixels.Color(30,0,0));   
      }
    }else{    
      if(digitalRead(PIN3) == 1) {
      pixels.setPixelColor(0,pixels.Color(30,0,0));   
      }else{
      pixels.setPixelColor(0,pixels.Color(30,0,0));   
      }
    }
  }
  pixels.show;
