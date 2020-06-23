void alg16(){
  ledsclear();
   for (int i = 0; i <= 6; i++) {
    CRGB cvet = CHSV( random(50, 255),random(50, 255),random(50, 255));
    leds[i] = cvet;
    leds[14+i] = cvet;
    leds[28+i] = cvet;
    leds[42+i] = cvet;
    
    leds[41-i] = cvet;
    leds[27-i] = cvet;
    leds[13-i] = cvet;
    switch (i) {
  case 4:
    leds[0] = CRGB::Black;
    leds[14] = CRGB::Black;
    leds[28] = CRGB::Black;
    leds[42] = CRGB::Black;
    leds[41] = CRGB::Black;
    leds[27] = CRGB::Black;
    leds[13] = CRGB::Black;
    break;
  case 5:
    leds[0+1] = CRGB::Black;
    leds[14+1] = CRGB::Black;
    leds[28+1] = CRGB::Black;
    leds[42+1] = CRGB::Black;
    leds[41-1] = CRGB::Black;
    leds[27-1] = CRGB::Black;
    leds[13-1] = CRGB::Black;
    break;
  case 6:
    leds[0+2] = CRGB::Black;
    leds[14+2] = CRGB::Black;
    leds[28+2] = CRGB::Black;
    leds[42+2] = CRGB::Black;
    leds[41-2] = CRGB::Black;
    leds[27-2] = CRGB::Black;
    leds[13-2] = CRGB::Black;
    break;
  default:
    // statements
    break;
  }
    
    FastLED.show();
    delay(wait);
  }
  
 
}
