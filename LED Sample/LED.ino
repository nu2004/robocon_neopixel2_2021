//昇降ロボ
    //0b000
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

    //0b001
    for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(i,pixels.Color(255,100,0));
    }   
    pixels.show();
    delay(100);
    pixels.clear();
    for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(i,pixels.Color(255,100,0));
    }
    pixels.show();
    delay(100);

    //0b010
    for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(i,pixels.Color(255,0,0));
    } 

    //0b011
    for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(i,pixels.Color(0,255,0));
    } 

    //0b100
    

    //0b101
    for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(i,pixels.Color(255,255,255));
    } 

    //0b110
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

    //0b111
    for(int i=0; i<pixels.numPixels()-450; i++) {
      int pixelHue = step_num + (i * 65536L / pixels.numPixels());
      pixels.setPixelColor(i, pixels.gamma32(pixels.ColorHSV(pixelHue)));
    }

//履帯ロボ
    //0b000
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

    //0b001
    for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(i,pixels.Color(0,255,0));
    }   
    pixels.show();
    delay(100);
    pixels.clear();
    for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(i,pixels.Color(0,255,0));
    }
    pixels.show();
    delay(100);

    //0b010
    for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(i,pixels.Color(255,0,0));
    } 

    //0b011
    for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(i,pixels.Color(0,255,0));
    } 

    //0b100

    //0b101
    for(int i=0; i<pixels.numPixels(); i++) {
        pixels.setPixelColor(i,pixels.Color(255,255,255));
    } 

    //0b110
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

    //0b111
    for(int i=0; i<pixels.numPixels()-450; i++) {
      int pixelHue = step_num + (i * 65536L / pixels.numPixels());
      pixels.setPixelColor(i, pixels.gamma32(pixels.ColorHSV(pixelHue)));
    }

//ムササビロボット
    //0b001
    