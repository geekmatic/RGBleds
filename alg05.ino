void alg5(){
  ledsclear();
  hline1(CRGB::Navy);
  FastLED.show();
  delay(wait);
  hline1(CRGB::SeaGreen);
  hline2(CRGB::Navy);
  FastLED.show();
  delay(wait);
  hline2(CRGB::SeaGreen);
  hline3(CRGB::Navy);
  FastLED.show();
  delay(wait);
  
  hline3(CRGB::SeaGreen);
  hline4(CRGB::Navy);
  FastLED.show();
  delay(wait);
  hline1(CRGB::Black);
  hline4(CRGB::SeaGreen);
  hline5(CRGB::Navy);
  FastLED.show();
  delay(wait);
  hline2(CRGB::Black);
  hline5(CRGB::SeaGreen);
  hline6(CRGB::Navy);
  FastLED.show();
  delay(wait);
  hline3(CRGB::Black);
  hline6(CRGB::SeaGreen);
  hline7(CRGB::Navy);
  FastLED.show();
  delay(wait);
    hline4(CRGB::Black);
   hline7(CRGB::SeaGreen);
  FastLED.show();
  delay(wait);
    hline5(CRGB::Black);

  FastLED.show();
  delay(wait);
      hline6(CRGB::Black);

  FastLED.show();
  delay(wait);
      hline7(CRGB::Black);

  FastLED.show();
  delay(wait);
}
