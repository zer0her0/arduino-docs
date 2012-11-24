// Secret Santa Picker

#include <ctype.h>
#define FAMILYMEM 7

// Input names
// Data file(from SD card or input) or hard coded internal data structure?

int santa[FAMILYMEM];
// string of santa names
// string of santa email addresses
//int santaLength = sizeof(santa);

// Pick name and make sure it's not the same as picker, not name of partner,
// hasn't been picked before. Use array # as santa #.

void santapicker() {
  for (int i = 0; i < FAMILYMEM; i++) {
    //Serial.println("Yea Santa Picked");
    // pick random # between 0 & 6 and not the same as i or i's partner.
    int randNomnom = FAMILYMEM + 1;  // set as un probable #
    randNomnom = random(7); // Pick a # 0 and 6
    if ( randNomnom == i || randNomnom > FAMILYMEM ) {
      randNomnom = random(7);
    } else {
      //Serial.println(randNomnom);
      if ( randNomnom == 0 && i == 1) {
        randNomnom = random(7);
      } else if ( randNomnom == 1 && i == 0 ) {
        randNomnom = random(7);
      } else if ( randNomnom == 2 && i == 3 ) {
        randNomnom = random(7);
      } else if ( randNomnom == 3 && i == 2 ) {
        randNomnom = random(7);
      } else if ( randNomnom == 4 && i == 5 ) {
        randNomnom = random(7);
      } else if ( randNomnom == 5 && i == 6 ) {
        randNomnom = random(7);
      } else  if( randNomnom == 6 && i == 5 ) {
        randNomnom = random(7);
      } else {
        
      }
      
      //santa[i] = randNomnom;
      //Serial.println(santa[i]);
    }
    santa[i] = randNomnom;
    Serial.println(santa[i]);
    //Serial.println(randNomnom);
  }
}

// Output names
// Local display and/or email.

void setup() {
  Serial.begin(9600);
  while(!Serial) {
    ; // wait for serial port to connecto, Needed for Leonardo only
  }
  
  // if analog input pin 0 is unconnected, random analog
  // noise will cause the call to randomSeed() to generate
  // different seed numbers each time the sketch runs.
  // randomSeed() will then shuffle the random function.
  randomSeed(analogRead(0));
}

void loop() {
  santapicker();
  Serial.println("end of loop");
}
