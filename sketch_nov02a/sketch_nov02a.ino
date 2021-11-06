#include <Adafruit_NeoPixel.h>

#define LED_COUNT 5
#define PIN 1
#define PIN1 2
#define PIN2 3
#define PIN3 4

Adafruit_NeoPixel pixels(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

int step_num = 0;
int delta = 1;
/*int color[] = {255, 255, 0};*/

void setup() {
  pixels.begin();
  pinMode(PIN1, INPUT_PULLUP);
  pinMode(PIN2, INPUT_PULLUP);
  pinMode(PIN3, INPUT_PULLUP);
}


void loop() {
  pixels.clear();
  if(digitalRead(PIN1) == 1) {
    if(digitalRead(PIN2) == 1){
      if(digitalRead(PIN3) == 1) {
        
      for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(0,pixels.Color(0,0,100));
      }     
      }else{
      for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(0,pixels.Color(0,0,100));
      }
      
    }else{   
      if(digitalRead(PIN3) == 1) {
      for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(0,pixels.Color(0,0,100));
      }     
      }else{        
      for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(0,pixels.Color(0,0,100));
      }
    }
  }else{
    if(digitalRead(PIN2) == 1){
      if(digitalRead(PIN3) == 1) {
      for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(0,pixels.Color(100,0,0));
      }     
      }else{
      for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(0,pixels.Color(100,0,0));
      }
    }else{    
      if(digitalRead(PIN3) == 1) {
      for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(0,pixels.Color(100,0,0));
      }
      }else{
      for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(0,pixels.Color(100,0,0));
      }
      }
    }
  }
  pixels.show();
}
