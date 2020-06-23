void alg18(){
  CRGB cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  for (int i = 0; i <= 48; i++) {
    leds[i] = cvet1;
  }
  cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  vline1(cvet1);
  vline4(cvet1);
  vline7(cvet1);
  FastLED.show();
  delay(wait);
  cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  for (int i = 0; i <= 48; i++) {
    leds[i] = cvet1;
  }
  cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  vline2(cvet1);
  vline5(cvet1);
  FastLED.show();
  delay(wait);
  cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  for (int i = 0; i <= 48; i++) {
    leds[i] = cvet1;
  }
  cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  vline3(cvet1);
  vline6(cvet1);
  
  FastLED.show();
  delay(wait);

}
