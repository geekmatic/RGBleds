void alg20(){
  byte ochered[7], rand_array[7];
  for (int i = 0; i <= 6; i++) {
    rand_array[i] = random(1, 30000);
  }
  for (int i = 0; i <= 6; i++) {
    byte maxa = 0;
    for (int j = 1; j <= 6; j++) {
      if (rand_array[j]>rand_array[maxa]) {
        maxa=j;
        
      }
    }
    rand_array[maxa]=0;
    ochered[i]=maxa;
  }
  
  ledsclear();
  CRGB cvet1 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  CRGB cvet2 = CHSV( random(50, 255),random(50, 255),random(50, 255));
  for (int i = 0; i <= 6; i++) {
    for (int j = 0; j <= 8; j++) {
      if (j<7)leds[ochered[i]+j*7] = cvet1;
      if ((j>0)&&(j<8)) leds[ochered[i]+(j-1)*7] = cvet2;
      if (j>1) leds[ochered[i]+(j-2)*7] = CRGB::Black;
      FastLED.show();
      delay(wait);
    }
    
  }

}
