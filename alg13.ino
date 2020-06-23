void alg13(){
  ledsclear();
  CRGB cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  leds[2] = cvet1;
  leds[3] = cvet1;
  leds[4] = cvet1;
  FastLED.show();
  delay(wait);
  leds[8] = cvet1;
  leds[12] = cvet1;
  FastLED.show();
  delay(wait);
  leds[14] = cvet1;
  leds[20] = cvet1;
  FastLED.show();
  delay(wait);
  leds[21] = cvet1;
  leds[27] = cvet1;
  FastLED.show();
  delay(wait);
  leds[28] = cvet1;
  leds[34] = cvet1;
  FastLED.show();
  delay(wait);
  leds[40] = cvet1;
  leds[36] = cvet1;
  FastLED.show();
  delay(wait);
  leds[44] = cvet1;
  leds[45] = cvet1;
  leds[46] = cvet1;
  FastLED.show();
  delay(wait);
  
  cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  leds[16] = cvet1;
  FastLED.show();
  delay(wait);
  
  leds[18] = cvet1;
  FastLED.show();
  delay(wait);
  
  leds[30] = cvet1;
  FastLED.show();
  delay(wait);
  leds[38] = cvet1;
  FastLED.show();
  delay(wait);
  leds[32] = cvet1;
  
  
  FastLED.show();
  delay(wait);
  delay(wait);
}
