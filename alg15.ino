void alg15(){
  ledsclear();

  CRGB cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  leds[21] = cvet1;
  FastLED.show();
  delay(wait);
  leds[15] = cvet1;
  leds[29] = cvet1;
  leds[22] = cvet1;
  FastLED.show();
  delay(wait);
  leds[9] = cvet1;
  leds[16] = cvet1;
  leds[37] = cvet1;
  leds[30] = cvet1;
  leds[23] = cvet1;
  FastLED.show();
  delay(wait);
  leds[24] = cvet1;
  leds[17] = cvet1;
  leds[31] = cvet1;
  leds[3] = cvet1;
  leds[38] = cvet1;
  leds[45] = cvet1;
  leds[10] = cvet1;
  FastLED.show();
  delay(wait);
  leds[32] = cvet1;
  leds[18] = cvet1;
  leds[25] = cvet1;
  FastLED.show();
  delay(wait);
  leds[26] = cvet1;
  
  
  
  
  
  FastLED.show();
  delay(wait);
  leds[27] = cvet1;
  leds[20] = cvet1;
  leds[34] = cvet1;

  FastLED.show();
  delay(wait);

}
