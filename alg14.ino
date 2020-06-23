void alg14(){
  ledsclear();
  for (int i = 0; i <= 25; i++) {
    leds[random(0, 48)] = CHSV( random(50, 255),random(50, 255),random(50, 255));
    FastLED.show();
    delay(wait);
  }
}

