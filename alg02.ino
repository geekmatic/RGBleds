void alg2(){
  byte krok[] = {0, 1, 2, 3, 4, 5, 6, 13, 20, 27, 34, 41, 48, 47, 46, 45, 44, 43, 42, 35, 28, 21, 14, 7,8,9,10,11,12,19, 26,33,40,39,38,37,36,29,22,15,16,17,18,25,32,31,30,23,24};
  ledsclear();
  CRGB cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  CRGB cvet2 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  for (int i = 0; i < sizeof(krok)+2; i++) {
    if(i<sizeof(krok))leds[krok[i]] = cvet1;
    if((i>0)&&(i<sizeof(krok)+1))leds[krok[i-1]] = cvet2;
    if(i>2)leds[krok[i-3]] = CRGB::Black;
    FastLED.show();
    delay(wait);
  }
  delay(wait);
  ledsclear();
  leds[24] = CRGB::Red;
  FastLED.show();
  delay(wait);
  leds[16] = CRGB::Red;
  leds[17] = CRGB::Red;
  leds[25] = CRGB::Red;
  leds[32] = CRGB::Red;
  leds[30] = CRGB::Red;
  FastLED.show();
  delay(wait);
  leds[9] = CRGB::Red;
  leds[33] = CRGB::Red;
  leds[29] = CRGB::Red;
  leds[37] = CRGB::Red;
  leds[18] = CRGB::Red;
  FastLED.show();
  delay(wait);
}
