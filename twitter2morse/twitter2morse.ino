/*

My tweet2morse project.

*/
#include <ctype.h>

char tweet[140] = "1 normal tweet";
String morseTweetArray[140];
char morseTweet[0];
int tweetLength = strlen(tweet);

void setup(){
Serial.begin(9600);
while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
}

void loop(){
morsetranslate();
//blinkled();
Serial.println(tweetLength);
}

//need morse code translation library/function here
void morsetranslate() {
  //morseTweet = "";
  for (int i = 0; i < tweetLength; i++){
  tweet[i] = toupper(tweet[i]); 
  //Serial.println(tweet[i]); //print to console to make sure it's working
  
  if (tweet[i] == 'A') { morseTweetArray[i] = ".-"; }
  else if (tweet[i] == 'B') { morseTweetArray[i] = "-..."; }
  else if (tweet[i] == 'C') { morseTweetArray[i] = "-.-."; }
  else if (tweet[i] == 'D') { morseTweetArray[i] = "-.."; }
  else if (tweet[i] == 'E') { morseTweetArray[i] = "."; }
  else if (tweet[i] == 'F') { morseTweetArray[i] = "..-."; }
  else if (tweet[i] == 'G') { morseTweetArray[i] = "--."; }
  else if (tweet[i] == 'H') { morseTweetArray[i] = "...."; }
  else if (tweet[i] == 'I') { morseTweetArray[i] = ".."; }
  else if (tweet[i] == 'J') { morseTweetArray[i] = ".---"; }
  else if (tweet[i] == 'K') { morseTweetArray[i] = "-.-"; }
  else if (tweet[i] == 'L') { morseTweetArray[i] = ".-.."; }
  else if (tweet[i] == 'M') { morseTweetArray[i] = "--"; }
  else if (tweet[i] == 'N') { morseTweetArray[i] = "-."; }
  else if (tweet[i] == 'O') { morseTweetArray[i] = "---"; }
  else if (tweet[i] == 'P') { morseTweetArray[i] = ".--."; }
  else if (tweet[i] == 'Q') { morseTweetArray[i] = "--.-"; }
  else if (tweet[i] == 'R') { morseTweetArray[i] = ".-."; }
  else if (tweet[i] == 'S') { morseTweetArray[i] = "..."; }
  else if (tweet[i] == 'T') { morseTweetArray[i] = "-"; }
  else if (tweet[i] == 'U') { morseTweetArray[i] = "..-"; }
  else if (tweet[i] == 'V') { morseTweetArray[i] = "...-"; }
  else if (tweet[i] == 'W') { morseTweetArray[i] = ".--"; }
  else if (tweet[i] == 'X') { morseTweetArray[i] = "-..-"; }
  else if (tweet[i] == 'Y') { morseTweetArray[i] = "-.--"; }
  else if (tweet[i] == 'Z') { morseTweetArray[i] = "..--"; }
  else if (tweet[i] == '0') { morseTweetArray[i] = "----"; }
  else if (tweet[i] == '1') { morseTweetArray[i] = ".----"; }
  else if (tweet[i] == '2') { morseTweetArray[i] = "..---"; }
  else if (tweet[i] == '3') { morseTweetArray[i] = "...--"; }
  else if (tweet[i] == '4') { morseTweetArray[i] = "....-"; }
  else if (tweet[i] == '5') { morseTweetArray[i] = "....."; }
  else if (tweet[i] == '6') { morseTweetArray[i] = "-...."; }
  else if (tweet[i] == '7') { morseTweetArray[i] = "--..."; }
  else if (tweet[i] == '8') { morseTweetArray[i] = "---.."; }
  else if (tweet[i] == '9') { morseTweetArray[i] = "----."; }
  else if (tweet[i] == '.') { morseTweetArray[i] = ".-.-.-"; }
  else if (tweet[i] == ',') { morseTweetArray[i] = "--..--"; }
  else if (tweet[i] == '?') { morseTweetArray[i] = "..--.."; }
  else if (tweet[i] == '!') { morseTweetArray[i] = "-.-.--"; }
  else if (tweet[i] == '@') { morseTweetArray[i] = ".--.-."; }
  else if (tweet[i] == '$') { morseTweetArray[i] = "...-..-"; }
  else if (tweet[i] == '&') { morseTweetArray[i] = ".-..."; }
  else if (tweet[i] == '+') { morseTweetArray[i] = ".-.-."; }
  else if (tweet[i] == '-') { morseTweetArray[i] = "-....-"; }
  else if (tweet[i] == '_') { morseTweetArray[i] = "..--.-"; }
  else if (tweet[i] == '=') { morseTweetArray[i] = "-...-"; }
  else if (tweet[i] == ':') { morseTweetArray[i] = "---..."; }
  else if (tweet[i] == ';') { morseTweetArray[i] = "-.-.-."; }
  else if (tweet[i] == '\'') { morseTweetArray[i] = ".----."; }
  else if (tweet[i] == '\"') { morseTweetArray[i] = ".-..-."; }
  else if (tweet[i] == '/') { morseTweetArray[i] = "-..-."; }
  else if (tweet[i] == '\\') { morseTweetArray[i] = "-..-."; }
  else if (tweet[i] == '(') { morseTweetArray[i] = "-.--."; }
  else if (tweet[i] == ')') { morseTweetArray[i] = "-.--.-"; }
  //else if (tweet[i] == '') {  }
  else if (tweet[i] == ' ') { morseTweetArray[i] = ""; }
  else { morseTweetArray[i] = ""; }
  
  Serial.println(morseTweetArray[i]);
  
  //morseTweet += morseTweetArray[i];
  
  delay(500);
  }
  
  //output array into single string, and/or then into array of chars
}

void blinkled() {
  
}

