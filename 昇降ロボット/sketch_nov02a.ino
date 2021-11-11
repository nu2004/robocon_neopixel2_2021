#include <Adafruit_NeoPixel.h>

#define LED_COUNT 5
#define PIN 2
#define PIN1 3
#define PIN2 4
#define PIN3 5
#define Switch 12

Adafruit_NeoPixel pixels(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

int step_num = 0;
int delta = 1;

void setup() {
  pixels.begin();
  pinMode(PIN1, INPUT);
  pinMode(PIN2, INPUT);
  pinMode(PIN3, INPUT);
  pinMode(Switch, INPUT_PULLUP);
}

void loop() {
  pixels.clear();
  if(digitalRead(Switch) == 1){
    if(digitalRead(PIN1) == 1) {
      if(digitalRead(PIN2) == 1){
        if(digitalRead(PIN3) == 1) {
          
        for(int i=0; i<pixels.numPixels(); i++) {
          for(int i=0; i<pixels.numPixels()-450; i++) {
            int pixelHue = step_num + (i * 65536L / pixels.numPixels());
          pixels.setPixelColor(i, pixels.gamma32(pixels.ColorHSV(pixelHue)));
          }

        }else{
          for(int i=0; i<pixels.numPixels(); i++) {
            pixels.setPixelColor(i,pixels.Color(255,255,0));
          }   
          pixels.show();
          delay(100);
          pixels.clear();
          for(int i=0; i<pixels.numPixels(); i++) {
            pixels.setPixelColor(i,pixels.Color(255,255,0));
          } 
    pixels.show();
    delay(100);
        }
      }else{   
        if(digitalRead(PIN3) == 1) {
          for(int i=0; i<pixels.numPixels(); i++) {
            pixels.setPixelColor(i,pixels.Color(255,255,255));
          } 
        }else{        
        //0b100
        }
      }
    }else{
      if(digitalRead(PIN2) == 1){
        if(digitalRead(PIN3) == 1) {
          for(int i=0; i<pixels.numPixels(); i++) {
            pixels.setPixelColor(i,pixels.Color(0,255,0));
          }
        }else{
          for(int i=0; i<pixels.numPixels(); i++) {
            pixels.setPixelColor(i,pixels.Color(255,0,0));
          } 
        }
        
      }else{    
        if(digitalRead(PIN3) == 1) {
          for(int i=0; i<pixels.numPixels(); i++) {
            pixels.setPixelColor(i,pixels.Color(0,255,0));
          } 
        }else{
          for(int i=0; i<pixels.numPixels(); i++) {
            pixels.setPixelColor(i,pixels.Color(255,0,0));
          }   
          pixels.show();
          delay(100);
          pixels.clear();
          for(int i=0; i<pixels.numPixels(); i++) {
            pixels.setPixelColor(i,pixels.Color(255,0,0));
          } 
          pixels.show();
          delay(100);
        }
      }
    }
    pixels.show();
  }else{
    
  }
}
