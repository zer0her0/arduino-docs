/*

My tweet2morse project.

*/
#include <ctype.h>

char tweet[140] = "normal tweet @";
String morseTweet[140];
int tweetLength = strlen(tweet);
//int morseTweetLength = strlen(morseTweet);
//int tweetLength = tweet.length();

//tweet[] = "Just a normal tweet";

void setup(){
Serial.begin(9600);
while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
//Serial.println("\n\nString  length():");
//Serial.ptintln();
}

void loop(){
//blinkled();
for (int i = 0; i < tweetLength; i++){
  tweet[i] = toupper(tweet[i]); 
  //Serial.println(tweet[i]); //print to console to make sure it's working
  
  if (tweet[i] == 'A') { morseTweet[i] = ".-"; }
  else if (tweet[i] == 'B') { morseTweet[i] = "-..."; }
  else if (tweet[i] == 'C') { morseTweet[i] = "-.-."; }
  else if (tweet[i] == 'D') { morseTweet[i] = "-.."; }
  else if (tweet[i] == 'E') { morseTweet[i] = "."; }
  else if (tweet[i] == 'F') { morseTweet[i] = "..-."; }
  else if (tweet[i] == 'G') { morseTweet[i] = "--."; }
  else if (tweet[i] == 'H') { morseTweet[i] = "...."; }
  else if (tweet[i] == 'I') { morseTweet[i] = ".."; }
  else if (tweet[i] == 'J') { morseTweet[i] = ".---"; }
  else if (tweet[i] == 'K') { morseTweet[i] = "-.-"; }
  else if (tweet[i] == 'L') { morseTweet[i] = ".-.."; }
  else if (tweet[i] == 'M') { morseTweet[i] = "--"; }
  else if (tweet[i] == 'N') { morseTweet[i] = "-."; }
  else if (tweet[i] == 'O') { morseTweet[i] = "---"; }
  else if (tweet[i] == 'P') { morseTweet[i] = ".--."; }
  else if (tweet[i] == 'Q') { morseTweet[i] = "--.-"; }
  else if (tweet[i] == 'R') { morseTweet[i] = ".-."; }
  else if (tweet[i] == 'S') { morseTweet[i] = "..."; }
  else if (tweet[i] == 'T') { morseTweet[i] = "-"; }
  else if (tweet[i] == 'U') { morseTweet[i] = "..-"; }
  else if (tweet[i] == 'V') { morseTweet[i] = "...-"; }
  else if (tweet[i] == 'W') { morseTweet[i] = ".--"; }
  else if (tweet[i] == 'X') { morseTweet[i] = "-..-"; }
  else if (tweet[i] == 'Y') { morseTweet[i] = "-.--"; }
  else if (tweet[i] == 'Z') { morseTweet[i] = "..--"; }
  else if (tweet[i] == '0') { morseTweet[i] = "----"; }
  else if (tweet[i] == '1') { morseTweet[i] = ".----"; }
  else if (tweet[i] == '2') { morseTweet[i] = "..---"; }
  else if (tweet[i] == '3') { morseTweet[i] = "...--"; }
  else if (tweet[i] == '4') { morseTweet[i] = "....-"; }
  else if (tweet[i] == '5') { morseTweet[i] = "....."; }
  else if (tweet[i] == '6') { morseTweet[i] = "-...."; }
  else if (tweet[i] == '7') { morseTweet[i] = "--..."; }
  else if (tweet[i] == '8') { morseTweet[i] = "---.."; }
  else if (tweet[i] == '9') { morseTweet[i] = "----."; }
  else if (tweet[i] == '.') { morseTweet[i] = ".-.-.-"; }
  else if (tweet[i] == ',') { morseTweet[i] = "--..--"; }
  else if (tweet[i] == '?') { morseTweet[i] = "..--.."; }
  else if (tweet[i] == '!') { morseTweet[i] = "-.-.--"; }
  else if (tweet[i] == '@') { morseTweet[i] = ".--.-."; }
  else if (tweet[i] == '$') { morseTweet[i] = "...-..-"; }
  else if (tweet[i] == '&') { morseTweet[i] = ".-..."; }
  else if (tweet[i] == '+') { morseTweet[i] = ".-.-."; }
  else if (tweet[i] == '-') { morseTweet[i] = "-....-"; }
  else if (tweet[i] == '_') { morseTweet[i] = "..--.-"; }
  else if (tweet[i] == '=') { morseTweet[i] = "-...-"; }
  else if (tweet[i] == ':') { morseTweet[i] = "---..."; }
  else if (tweet[i] == ';') { morseTweet[i] = "-.-.-."; }
  else if (tweet[i] == '\'') { morseTweet[i] = ".----."; }
  else if (tweet[i] == '\"') { morseTweet[i] = ".-..-."; }
  else if (tweet[i] == '/') { morseTweet[i] = "-..-."; }
  else if (tweet[i] == '\\') { morseTweet[i] = "-..-."; }
  else if (tweet[i] == '(') { morseTweet[i] = "-.--."; }
  else if (tweet[i] == ')') { morseTweet[i] = "-.--.-"; }
  /*else if (tweet[i] == '') {  }
  else if (tweet[i] == '') {  }
  else if (tweet[i] == '') {  }
  else if (tweet[i] == '') {  }
  else if (tweet[i] == '') {  }
  else if (tweet[i] == '') {  }
  else if (tweet[i] == '') {  }
  else if (tweet[i] == '') {  }
  else if (tweet[i] == '') {  }
  else if (tweet[i] == '') {  }*/
  else if (tweet[i] == ' ') { morseTweet[i] = " "; }
  else {  }
  
  Serial.println(morseTweet[i]);
  
  delay(500);
  }
Serial.println(tweetLength);
}

//need morse code translation library/function here
/*void blinkled() {
  
}*/
