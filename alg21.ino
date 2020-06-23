void alg21(){
  for (int i = 0; i <= NUM_LEDS-1; i++) {
    leds[i] = CRGB::White;
  }
  FastLED.show();
  delay(wait);
}
