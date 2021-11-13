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
int color[] = {255, 255, 0};

void setup() {
  pixels.begin();
  pinMode(PIN1, INPUT);
  pinMode(PIN2, INPUT);
  pinMode(PIN3, INPUT);
  pinMode(Switch, INPUT_PULLUP);
}

void loop() {
  pixels.clear();
  //pixels.show();
  int SW = digitalRead(Switch);
  int PIN_A = digitalRead(PIN1);
  int PIN_B = digitalRead(PIN2);
  int PIN_C = digitalRead(PIN3);

  for(int i=0; i<LED_COUNT; i++) {
    int pixelHue = step_num + (i * 65536L / pixels.numPixels());
    pixels.setPixelColor(i, pixels.gamma32(pixels.ColorHSV(pixelHue)));
  }
  pixels.show();
  step_num += 256;
  if (step_num == 65536) {
    step_num = 0;
  }  
}