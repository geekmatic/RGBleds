void alg11(){
  ledsclear();
  CRGB cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  dot(cvet1);
  kvadrat2(cvet1);
  FastLED.show();
  delay(wait);
  cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  //kvadrat1(cvet1);
  krest1(cvet1);
  kvadrat3(cvet1);
  FastLED.show();
  delay(wait);

}
