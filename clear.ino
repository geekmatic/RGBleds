void ledsclear(){
  for (int i = 0; i <= NUM_LEDS-1; i++) {
    leds[i] = CRGB::Black;
  }
}

