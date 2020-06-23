void alg8(){
  for (int i = 0; i <= 48; i++) {
    leds[i] = CRGB::Yellow;
  }
  hline1(CRGB::Navy);
  hline4(CRGB::Navy);
  hline7(CRGB::Navy);
  FastLED.show();
  delay(wait);
  for (int i = 0; i <= 48; i++) {
    leds[i] = CRGB::Yellow;
  }
  hline2(CRGB::Navy);
  hline5(CRGB::Navy);
  FastLED.show();
  delay(wait);
    for (int i = 0; i <= 48; i++) {
    leds[i] = CRGB::Yellow;
  }
  hline3(CRGB::Navy);
  hline6(CRGB::Navy);
  
  FastLED.show();
  delay(wait);

}
