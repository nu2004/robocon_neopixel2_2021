#include <Adafruit_NeoPixel.h>

#define LED_COUNT 300
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
  pixels.show();
  int SW = digitalRead(Switch);
  int PIN_A = digitalRead(PIN1);
  int PIN_B = digitalRead(PIN2);
  int PIN_C = digitalRead(PIN3);

  if(SW = 1){
    if((PIN_A = 0) && (PIN_B = 0) && (PIN_C = 0)){
      //0b000
    }else if((PIN_A = 0) && (PIN_B = 0) && (PIN_C = 1)){
      //0b001
    }else if((PIN_A = 0) && (PIN_B = 1) && (PIN_C = 0)){
      //0b010
    }else if((PIN_A = 0) && (PIN_B = 1) && (PIN_C = 1)){
      //0b011
    }else if((PIN_A = 1) && (PIN_B = 0) && (PIN_C = 0)){
      //0b100
    }else if((PIN_A = 1) && (PIN_B = 0) && (PIN_C = 1)){
      //0b101
    }else if((PIN_A = 1) && (PIN_B = 1) && (PIN_C = 0)){
      //0b110
    }else if((PIN_A = 1) && (PIN_B = 1) && (PIN_C = 1)){
      //0b111
    }

  }