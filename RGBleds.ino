#include <FastLED.h>
#include <TimerOne.h>
#include <EEPROM.h>

#define R_PIN     A0
#define LED_PIN     5
#define BUT1_PIN     2
#define BUT2_PIN     3
#define NUM_LEDS    53
#define BRIGHTNESS  64
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];
volatile unsigned int wait = 300;
byte mode=0, alg=0, beliy = 0;
bool BUT2_old;

void setup() { 
  Serial.begin(9600);
  pinMode(BUT1_PIN, INPUT_PULLUP);
  pinMode(BUT2_PIN, INPUT_PULLUP);
  delay( 2000 );
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
  FastLED.setBrightness(  BRIGHTNESS );
  Timer1.initialize(500000);
  Timer1.attachInterrupt(blinkLed);
  EEPROM.get(0, mode);
}

void loop() { 
  switch (mode) {
    case 0:
      alg = 0; break;
    case 1:
      alg = 1; break;
    case 2:
      alg = 2; break;
    case 3:
      alg = 3; break;
    case 4:
      alg = 4; break;
    case 5:
      alg = 5; break;
    case 6:
      alg = 6; break;
    case 7:
      alg = 7; break;
    case 8:
      alg = 8; break;
    case 9:
      alg = 9; break;
    case 10:
      alg = 10; break;
    case 11:
      alg = 11; break;
    case 12:
      alg = 12; break;
    case 13:
      alg = 13; break;
    case 14:
      alg = 14; break;
    case 15:
      alg = 15; break;
    case 16:
      alg = 16; break;  
    case 17:
      alg = 17; break;
    case 18:
      alg = 18; break;
    case 19:
      alg = 19; break;
    case 20:
      alg = 20; break;
    case 21:
      alg = random(1, 21); break;
    case 22:
      if(alg<21) alg ++; else alg=1; break;
    default:
      alg = 1;
    break;
  }
  switch (alg) {
    case 0:
      alg21();
      break;
    case 1:
      alg1();
      break;
    case 2:
      alg2();
      break;
    case 3:
      alg3();
      break;
    case 4:
      alg4();
      break;
    case 5:
      alg5();
      break;
    case 6:
      alg6();
      break;
    case 7:
      alg7();
      break;
    case 8:
      alg8();
      break;
    case 9:
      alg9();
      break;
    case 10:
      alg10();
      break;
    case 11:
      alg11();
      break;
    case 12:
      alg12();
      break;
    case 13:
      alg13();
      break;
    case 14:
      alg14();
      break;
    case 15:
      alg15();
      break;
    case 16:
      alg16();
      break;
    case 17:
      alg17();
      break;
    case 18:
      alg18();
      break;
    case 19:
      alg19();
      break;
    case 20:
      alg20();
      break;
    case 21:
      alg21();
      break;
    default:
      alg21();
      break;
  }
}

void blinkLed(){
  wait = 50 + analogRead(R_PIN);
  if(!digitalRead(BUT1_PIN)) {alg=1; if(mode<22) {mode ++; Serial.println(mode);} else {mode=1; Serial.println(mode);} EEPROM.put(0, mode);}
  if((!digitalRead(BUT2_PIN))&&(BUT2_old)) {alg=1; if(beliy==0) {beliy=1; mode = 0;Serial.println(mode);} else {beliy=0; mode = EEPROM.get(0, mode); Serial.println(mode);} }
  BUT2_old = digitalRead(BUT2_PIN);
}


/*
CRGB::Blue,
    CRGB::DarkBlue,
    CRGB::DarkBlue,
    CRGB::DarkBlue,

    CRGB::DarkBlue,
    CRGB::DarkBlue,
    CRGB::DarkBlue,
    CRGB::DarkBlue,

    CRGB::Blue,
    CRGB::DarkBlue,
    CRGB::SkyBlue,
    CRGB::SkyBlue,

    CRGB::LightBlue,
    CRGB::White,
    CRGB::LightBlue,
    CRGB::SkyBlue
};

extern const TProgmemRGBPalette16 LavaColors_p FL_PROGMEM =
{
    CRGB::Black,
    CRGB::Maroon,
    CRGB::Black,
    CRGB::Maroon,

    CRGB::DarkRed,
    CRGB::Maroon,
    CRGB::DarkRed,

    CRGB::DarkRed,
    CRGB::DarkRed,
    CRGB::Red,
    CRGB::Orange,

    CRGB::White,
    CRGB::Orange,
    CRGB::Red,
    CRGB::DarkRed
};


extern const TProgmemRGBPalette16 OceanColors_p FL_PROGMEM =
{
    CRGB::MidnightBlue,
    CRGB::DarkBlue,
    CRGB::MidnightBlue,
    CRGB::Navy,

    CRGB::DarkBlue,
    CRGB::MediumBlue,
    CRGB::SeaGreen,
    CRGB::Teal,

    CRGB::CadetBlue,
    CRGB::Blue,
    CRGB::DarkCyan,
    CRGB::CornflowerBlue,

    CRGB::Aquamarine,
    CRGB::SeaGreen,
    CRGB::Aqua,
    CRGB::LightSkyBlue
};

extern const TProgmemRGBPalette16 ForestColors_p FL_PROGMEM =
{
    CRGB::DarkGreen,
    CRGB::DarkGreen,
    CRGB::DarkOliveGreen,
    CRGB::DarkGreen,

    CRGB::Green,
    CRGB::ForestGreen,
    CRGB::OliveDrab,
    CRGB::Green,

    CRGB::SeaGreen,
    CRGB::MediumAquamarine,
    CRGB::LimeGreen,
    CRGB::YellowGreen,

    CRGB::LightGreen,
    CRGB::LawnGreen,
    CRGB::MediumAquamarine,
    CRGB::ForestGreen*/
