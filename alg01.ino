void alg1(){
  ledsclear();
  dot(CRGB::Green);
  FastLED.show();
  delay(wait);
//  ledsclear();
  dot(CRGB::SeaGreen);
  kvadrat1(CRGB::Green);
  FastLED.show();
  delay(wait);
//  ledsclear();
  kvadrat1(CRGB::SeaGreen);
  kvadrat2(CRGB::Green);
  FastLED.show();
  delay(wait);
//  ledsclear();
  kvadrat2(CRGB::SeaGreen);
  kvadrat3(CRGB::Green);
  FastLED.show();
  delay(wait);

  dot(CRGB::Red);
  FastLED.show();
  delay(wait);
  dot(CRGB::SeaGreen);
  FastLED.show();
  delay(wait);
  dot(CRGB::Red);
  FastLED.show();
  delay(wait);
}

