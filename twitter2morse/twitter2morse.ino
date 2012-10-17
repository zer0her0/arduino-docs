/*

My tweet2morse project.

*/
#include <ctype.h>

char tweet[140] = "@zer0her0 just a normal tweet";
char *morseTweet[140][10];
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
  Serial.println(tweet[i]); //print to console to make sure it's working
  
  
  
  /*for (int j = 0; j < 10; j++){
    Serial.println(morseTweet[i][j]);
  }*/
  delay(500);
  }
//Serial.println("before convert");
//morseconvert(morseTweet);
//Serial.println("after convert");
}

//need morse code translation library/function here
/*void blinkled() {
  
}*/

void morseconvert(char *morseTweet[140][10]){
  Serial.println("before loop");
  for (int i = 0; i < tweetLength; i++){
    //convert to uppercase
    //tweet[i] = toupper(tweet[i]);
    //Serial.println(tweet[i]); //print to console to make sure it's working
    //Serial.println("in loop");
    //convert to morse
    switch (tweet[i]) {
      case 'A':
        //do something when var equals A
        morseTweet[i][10] = ".-";
        break;
      case 'B':
        morseTweet[i][10] = "-...";
        //do something when var equals B
        break;
      case 'C':
        morseTweet[i][10] = "-.-.";
        break;
      case 'D':
        morseTweet[i][10] = "-..";
        break;
      case 'E':
        morseTweet[i][10] = ".";
        break; 
      case 'F':
        morseTweet[i][10] = "..-.";
        break; 
      case 'G':
        morseTweet[i][10] = "--.";
        break; 
      case 'H':
        morseTweet[i][10] = "....";
        break; 
      case 'I':
        morseTweet[i][10] = "..";
        break; 
      case 'J':
        morseTweet[i][10] = ".---";
        break; 
      case 'K':
        morseTweet[i][10] = "-.-";
        break; 
      case 'L':
        morseTweet[i][10] = ".-..";
        break; 
      case 'M':
        morseTweet[i][10] = "--";
        break;
      case 'N':
        morseTweet[i][10] = "-.";
        break; 
      case 'O':
        morseTweet[i][10] = "---";
        break; 
      case 'P':
        morseTweet[i][10] = ".--.";
        break; 
      case 'Q':
        morseTweet[i][10] = "--.-";
        break; 
      case 'R':
        morseTweet[i][10] = ".-.";
        break;
      case 'S':
        morseTweet[i][10] = "...";
        break; 
      case 'T':
        morseTweet[i][10] = "-";
        break; 
      case 'U':
        morseTweet[i][10] = "..-";
        break; 
      case 'V':
        morseTweet[i][10] = "...-";
        break; 
      case 'W':
        morseTweet[i][10] = ".--";
        break; 
      case 'X':
        morseTweet[i][10] = "-..-";
        break; 
      case 'Y':
        morseTweet[i][10] = "-.--";
        break; 
      case 'Z':
        morseTweet[i][10] = "..--";
        break; 
      case '0':
        morseTweet[i][10] = "----";
        break; 
      case '1':
        morseTweet[i][10] = ".----";
        break;
      case '2':
        morseTweet[i][10] = "..---";
        break; 
      case '3':
        morseTweet[i][10] = "...--";
        break;
      case '4':
        morseTweet[i][10] = "....-";
        break;
      case '5':
        morseTweet[i][10] = ".....";
        break; 
      case '6':
        morseTweet[i][10] = "-....";
        break; 
      case '7':
        morseTweet[i][10] = "--...";
        break; 
      case '8':
        morseTweet[i][10] = "---..";
        break; 
      case '9':
        morseTweet[i][10] = "----.";
        break; 
      case '.':
        morseTweet[i][10] = ".-.-.-";
        break;
      case ',':
        morseTweet[i][10] = "--..--";
        break;
      case '?':
        morseTweet[i][10] = "..--..";
        break;
      case '!':
        morseTweet[i][10] = "-.-.--";
        break;
      case '@':
        morseTweet[i][10] = ".--.-.";
        break;
      case '$':
        morseTweet[i][10] = "...-..-";
        break;
      case '&':
        morseTweet[i][10] = ".-...";
        break;
      case '+':
        morseTweet[i][10] = ".-.-.";
        break;
      case '-':
        morseTweet[i][10] = "-....-";
        break;
      case '_':
        morseTweet[i][10] = "..--.-";
        break;
      case '=':
        morseTweet[i][10] = "-...-";
        break;
      case ':':
        morseTweet[i][10] = "---...";
        break;
      case ';':
        morseTweet[i][10] = "-.-.-.";
        break;
      case '\'':
        morseTweet[i][10] = ".----.";
        break;
      case '\"':
        morseTweet[i][10] = ".-..-.";
        break;
      case '/':
        morseTweet[i][10] = "-..-.";
        break;
      case '\\':
        morseTweet[i][10] = "-..-.";
        break;
      case '(':
        morseTweet[i][10] = "-.--.";
        break;
      case ')':
        morseTweet[i][10] = "-.--.-";
        break;
      default: 
        // if nothing else matches, do the default
        // default is optional
        break;
    }
  }
}
/*
A = .-
B = -...
C = -.-.
D = -..
E = .
F = ..-.
G = --.
H = ....
I = ..
J = .---
K = -.-
L = .-..
M = --
N = -.
O = ---
P = .--.
Q = --.-
R = .-.
S = ...
T = -
U = ..-
V = ...-
W = .--
X = -..-
Y = -.--
Z = ..--
0 = ----
1 = .----
2 = ..---
3 = ...--
4 = ....-
5 = .....
6 = -....
7 = --...
8 = ---..
9 = ----.
. = .-.-.-
, = --..--
? = ..--..
! = -.-.--
@ = .--.-.
$ = ...-..-
& =  .-...
+ = .-.-.
- = -....-
_ = ..--.-
//equals = = -...-
//colon : = ---...
//semicolon ; = -.-.-.
//appostophe ' = .----.
//quote " = .-..-.
//slash / = -..-.
//open parans ( = -.--.
//closed parans ) = -.--.-
*/

