void alg4(){
  ledsclear();
  vline1(CRGB::Navy);
  FastLED.show();
  delay(wait);
  vline1(CRGB::SeaGreen);
  vline2(CRGB::Navy);
  FastLED.show();
  delay(wait);
  vline2(CRGB::SeaGreen);
  vline3(CRGB::Navy);
  FastLED.show();
  delay(wait);
  
  vline3(CRGB::SeaGreen);
  vline4(CRGB::Navy);
  FastLED.show();
  delay(wait);
  vline1(CRGB::Black);
  vline4(CRGB::SeaGreen);
  vline5(CRGB::Navy);
  FastLED.show();
  delay(wait);
  vline2(CRGB::Black);
  vline5(CRGB::SeaGreen);
  vline6(CRGB::Navy);
  FastLED.show();
  delay(wait);
  vline3(CRGB::Black);
  vline6(CRGB::SeaGreen);
  vline7(CRGB::Navy);
  FastLED.show();
  delay(wait);
    vline4(CRGB::Black);
   vline7(CRGB::SeaGreen);
  FastLED.show();
  delay(wait);
    vline5(CRGB::Black);

  FastLED.show();
  delay(wait);
  vline6(CRGB::Black);

  FastLED.show();
  delay(wait);
  vline7(CRGB::Black);

  FastLED.show();
  delay(wait);
}
