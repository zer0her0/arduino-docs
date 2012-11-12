/*

My tweet2morse project.

*/
#include <ctype.h>
#include <WiFi.h>

// setting for WiFi shield
char ssid[] = "myNetwork";    // update for real network before uploading.
char pass[] = "myPassword";  // haha, this really is my network password, swear!
int status = WL_IDE_STATUS;  // the WiFi radio's status

// twitter2morse settings
const int Pin = 13; // the number of the LED pin
const int dot = 200; // dot blink length
const int dash = 800; // dash blink length
const int space = 1000; // spank length
const int endTimes = 10000; // gap before repeating
int State = LOW; // led state used to set the LED
char tweet[140] = "@zer0her0 hello there";
char morseTweet[1000] = ""; // = "...---... ...---..."; // lol
int tweetLength = strlen(tweet);
int morseTweetLength = strlen(morseTweet);

//morse code translation function
void morsetranslate() {
  for (int i = 0; i < tweetLength; i++){
  tweet[i] = toupper(tweet[i]); 
  
  if (tweet[i] == 'A') { strcat (morseTweet, ".-"); }
  else if (tweet[i] == 'B') { strcat (morseTweet, "-..."); }
  else if (tweet[i] == 'C') { strcat (morseTweet, "-.-."); }
  else if (tweet[i] == 'D') { strcat (morseTweet, "-.."); }
  else if (tweet[i] == 'E') { strcat (morseTweet, "."); }
  else if (tweet[i] == 'F') { strcat (morseTweet, "..-."); }
  else if (tweet[i] == 'G') { strcat (morseTweet, "--."); }
  else if (tweet[i] == 'H') { strcat (morseTweet, "...."); }
  else if (tweet[i] == 'I') { strcat (morseTweet, ".."); }
  else if (tweet[i] == 'J') { strcat (morseTweet, ".---"); }
  else if (tweet[i] == 'K') { strcat (morseTweet, "-.-"); }
  else if (tweet[i] == 'L') { strcat (morseTweet, ".-.."); }
  else if (tweet[i] == 'M') { strcat (morseTweet, "--"); }
  else if (tweet[i] == 'N') { strcat (morseTweet, "-."); }
  else if (tweet[i] == 'O') { strcat (morseTweet, "---"); }
  else if (tweet[i] == 'P') { strcat (morseTweet, ".--."); }
  else if (tweet[i] == 'Q') { strcat (morseTweet, "--.-"); }
  else if (tweet[i] == 'R') { strcat (morseTweet, ".-."); }
  else if (tweet[i] == 'S') { strcat (morseTweet, "..."); }
  else if (tweet[i] == 'T') { strcat (morseTweet, "-"); }
  else if (tweet[i] == 'U') { strcat (morseTweet, "..-"); }
  else if (tweet[i] == 'V') { strcat (morseTweet, "...-"); }
  else if (tweet[i] == 'W') { strcat (morseTweet, ".--"); }
  else if (tweet[i] == 'X') { strcat (morseTweet, "-..-"); }
  else if (tweet[i] == 'Y') { strcat (morseTweet, "-.--"); }
  else if (tweet[i] == 'Z') { strcat (morseTweet, "..--"); }
  else if (tweet[i] == '0') { strcat (morseTweet, "----"); }
  else if (tweet[i] == '1') { strcat (morseTweet, ".----"); }
  else if (tweet[i] == '2') { strcat (morseTweet, "..---"); }
  else if (tweet[i] == '3') { strcat (morseTweet, "...--"); }
  else if (tweet[i] == '4') { strcat (morseTweet, "....-"); }
  else if (tweet[i] == '5') { strcat (morseTweet, "....."); }
  else if (tweet[i] == '6') { strcat (morseTweet, "-...."); }
  else if (tweet[i] == '7') { strcat (morseTweet, "--..."); }
  else if (tweet[i] == '8') { strcat (morseTweet, "---.."); }
  else if (tweet[i] == '9') { strcat (morseTweet, "----."); }
  else if (tweet[i] == '.') { strcat (morseTweet, ".-.-.-"); }
  else if (tweet[i] == ',') { strcat (morseTweet, "--..--"); }
  else if (tweet[i] == '?') { strcat (morseTweet, "..--.."); }
  else if (tweet[i] == '!') { strcat (morseTweet, "-.-.--"); }
  else if (tweet[i] == '@') { strcat (morseTweet, ".--.-."); }
  else if (tweet[i] == '$') { strcat (morseTweet, "...-..-"); }
  else if (tweet[i] == '&') { strcat (morseTweet, ".-..."); }
  else if (tweet[i] == '+') { strcat (morseTweet, ".-.-."); }
  else if (tweet[i] == '-') { strcat (morseTweet, "-....-"); }
  else if (tweet[i] == '_') { strcat (morseTweet, "..--.-"); }
  else if (tweet[i] == '=') { strcat (morseTweet, "-...-"); }
  else if (tweet[i] == ':') { strcat (morseTweet, "---..."); }
  else if (tweet[i] == ';') { strcat (morseTweet, "-.-.-."); }
  else if (tweet[i] == '\'') { strcat (morseTweet, ".----."); }
  else if (tweet[i] == '\"') { strcat (morseTweet, ".-..-."); }
  else if (tweet[i] == '/') { strcat (morseTweet, "-..-."); }
  else if (tweet[i] == '\\') { strcat (morseTweet, "-..-."); }
  else if (tweet[i] == '(') { strcat (morseTweet, "-.--."); }
  else if (tweet[i] == ')') { strcat (morseTweet, "-.--.-"); }
  //else if (tweet[i] == '') {  }
  else if (tweet[i] == ' ') { strcat (morseTweet, " "); }
  else { /*morseTweetArray[i] = "";*/ }

  delay(500);
  }
  
  //output array into single string, and/or then into array of chars
}

void blinkled() {
  int morseTweetLength = strlen(morseTweet);
  for (int i = 0; i < morseTweetLength; i++){
    if(morseTweet[i] == '.') { 
      //Serial.println("dot!");
      if (State == LOW) { State = HIGH; }
      digitalWrite(Pin, State);
      delay(dot);
      State = LOW;
      digitalWrite(Pin, State);
    }
    else if(morseTweet[i] == '-') {
      //Serial.println("dash!"); 
      if (State == LOW) { State = HIGH; }
      digitalWrite(Pin, State);
      delay(dash);
      State = LOW;
      digitalWrite(Pin, State);
    }
    else if(morseTweet[i] == ' ') {
      //Serial.println("space!");
      if (State == HIGH) { State = LOW; }
      digitalWrite(Pin, State);
      delay(space);
    }
    else {
      //Serial.println("reset!");
      State = LOW;
      digitalWrite(Pin, State);
      delay(endTimes);
    }
    delay(500);
  }
}

void soundbuzzer(){
  //intermediate step of moving to buzzer/speaker before sounder
}

void morsesounder() {
  //final step to make and drive a morse sounder via Arduino
}

void setup(){
Serial.begin(9600);
while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }

// Attempt WiFi connection
Serial.println("Attempting to connect to WiFi.");
status = WiFi.begin(ssid, pass);

// If times out or errors
if (status != WL_CONNECTED) {
  Serial.println("WiFi connection timed out.");
  while(true);
} else {
  Serial.println("Connected to WiFi");
}

pinMode(Pin, OUTPUT);
}

void loop(){
morsetranslate();
blinkled(); 
Serial.println(morseTweet);
Serial.println(tweetLength);
memset(morseTweet, '\0', 1000);
}
