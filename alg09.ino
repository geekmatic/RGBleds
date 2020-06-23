void alg9(){
  ledsclear();
  CRGB cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  leds[0] = cvet1;
  leds[1] = cvet1;
  leds[7] = cvet1;
  leds[8] = cvet1;
  leds[5] = cvet1;
  leds[6] = cvet1;
  leds[12] = cvet1;
  leds[13] = cvet1;

  leds[36] = cvet1;
  leds[35] = cvet1;
  leds[40] = cvet1;
  leds[41] = cvet1;
  leds[43] = cvet1;
  leds[42] = cvet1;
  leds[47] = cvet1;
  leds[48] = cvet1;
  FastLED.show();
  delay(wait);
  
  ledsclear();
  cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  leds[2] = cvet1;
  leds[3] = cvet1;
  leds[4] = cvet1;
  
  leds[9] = cvet1;
  leds[10] = cvet1;
  leds[11] = cvet1;
  
  leds[16] = cvet1;
  leds[17] = cvet1;
  leds[18] = cvet1;
  
  leds[14] = cvet1;
  leds[15] = cvet1;
  leds[19] = cvet1;
  leds[20] = cvet1;
  leds[21] = cvet1;
  leds[22] = cvet1;
  leds[23] = cvet1;
  leds[24] = cvet1;
  leds[25] = cvet1;
  leds[26] = cvet1;
  leds[27] = cvet1;
  leds[28] = cvet1;
  leds[29] = cvet1;
  leds[30] = cvet1;
  leds[31] = cvet1;
  leds[32] = cvet1;
  leds[33] = cvet1;
  leds[34] = cvet1;
  leds[37] = cvet1;
  leds[38] = cvet1;
  leds[39] = cvet1;
  leds[44] = cvet1;
  leds[45] = cvet1;
  leds[46] = cvet1;
  FastLED.show();
  delay(wait);
  ledsclear();
  krest1(CHSV( random(50, 255),random(50, 255),random(50, 255)));
  FastLED.show();
  delay(wait);
  delay(wait);
}
