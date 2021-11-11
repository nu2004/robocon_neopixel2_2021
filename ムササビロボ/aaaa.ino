#include <Adafruit_NeoPixel.h>

#define LED_COUNT 5
#define PIN 2
#define PIN1 3
#define PIN2 4
#define PIN3 5
#define LED_red 9
#define LED_blue 10
#define LED_green 11
#define Switch 12

Adafruit_NeoPixel pixels(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

int step_num = 0;
int delta = 1;

void setup() {
  pixels.begin();
  pinMode(PIN1, INPUT);
  pinMode(PIN2, INPUT);
  pinMode(PIN3, INPUT);
  pinMode(LED_red, INPUT);
  pinMode(LED_blue, INPUT);
  pinMode(LED_green, INPUT);
  pinMode(Switch, INPUT_PULLUP);
}

void loop() {
  pixels.clear();
  digitalWrite(PIN1, LOW);
  digitalWrite(PIN2, LOW);
  digitalWrite(PIN3, LOW);
  if(digitalRead(Switch) == 1){
    pixels.setPixelColor(0,pixels.Color(255,100,0));
  }
  pixels.show();

  if(digitalRead(PIN1) == 1){
    digitalWrite(LED_red, HIGH);
  }
  if(digitalRead(PIN2) == 1){
    digitalWrite(LED_blue, HIGH);
  }
  if(digitalRead(PIN3) == 1){
    digitalWrite(LED_green, HIGH);
  }
}