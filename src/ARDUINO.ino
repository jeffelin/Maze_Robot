// void setup() {
//   // put your setup code here, to run once:
//   pinMode(A3, INPUT);
//   pinMode(13, OUTPUT); 
//   Serial.begin(9600);


// }

// void loop() {
  // put your main code here, to run repeatedly:
// int val = analogRead(A3);
// Serial.println(val);
// digitalWrite(13, HIGH); 
// delay(val);
// digitalWrite(13, LOW);
// delay(val); 
// }


// Pin connections:
// Potentiometer pin 1 to Arduino 5V
// Potentiometer pin 2 to Arduino analog pin 0
// Potentiometer pin 3 to Arduino GND
// LED connected to Arduino pin 9

// int potPin = 0; // select analog pin for potentiometer
// int ledPin = 9; // select digital pin for LED 
// int val = 0; // variable to store potentiometer value

// void setup() {
//   pinMode(ledPin, OUTPUT); // set LED pin as output
// }

// void loop() {
//   val = analogRead(potPin); // read potentiometer value
//   val = map(val, 0, 1023, 0, 255); // map value 0-1023 to 0-255
//   analogWrite(ledPin, val); // set LED brightness
// }




// float C_F(float temp_C) {
//   temp_F = (temp_C* 9/5) + 32.0; 
//   return temp_F
// }

// void setup () {
// pinMode(A3, INPUT); 
// pinMode(13, OUTPUT); //night light 
// Serial.begin(9600);
// // while(!Serial) {;} 
// }

// void loop () {
//   int val = analogRead(A3); 
//   Serial.println(val); 
//   int threshold = 100;
// if (val < threshold ) {
//   digitalWrite(13, HIGH);
// }
// else if (val > threshold) {
//   digitalWrite(13, LOW); 
// }
// }



// int Red = 9;
// int Green = 10; 
// int Blue = 11; 

// void setup() {
//   Serial.begin(9600); 
//   pinMode(Red, OUTPUT);
//   pinMode(Green, OUTPUT); 
//   pinMode(Blue, OUTPUT); 
//   pinMode(A1, INPUT);
//   pinMode(A0, INPUT); 
// }

// void loop () {
//   analogWrite (Red, 100);
//   analogWrite (Green, 100 );
//   analogWrite (Blue,  0 );
//   int val1 = analogRead(A1); 
//   digitalWrite(Red, HIGH); 
//   digitalWrite(Green, HIGH); 
//   digitalWrite(Blue, HIGH); 
//   digitalWrite(Red, LOW); 
//   digitalWrite(Green, LOW); 
//   digitalWrite(Blue, LOW); 
//   delay (val1); 
//     int val2 = analogRead(A0); 
//   Serial.println(val2); 
//   int threshold = 100;
// if (val2 < threshold ) {
//   digitalWrite(Red, HIGH); 
//   digitalWrite(Green, HIGH); 
//   digitalWrite(Blue, HIGH); 
// }
// else if (val2 > threshold) {
//   digitalWrite(Red, LOW); 
//   digitalWrite(Green, LOW); 
//   digitalWrite(Blue, LOW); 
// }
// }


// arr = [1, 2, 3, 4, 5]
// int b = 0;
// int c = 0;
// for (i = 0, i< arr.length, i++)
// {
//   b = arr(i); 
//   c += b;
// }
// Serial.println(c); 


// const int b = 10;
// void setup() {
//   Serial.begin(9600); 
//   pinMode(b, OUTPUT); 

// }


// void loop() {
//   digitalWrite(b, HIGH); 
//   int val = digitalRead(b);
//   Serial.println(val); 
//   tone(b, 1000, 500);
//   noTone(b); 
// }

// void play(char note, int beats); 
// void play(char note, int beats) {
//   int num = 15; 
//   char notes [15] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C', 'D', 'E', 'F', 'G', 'A', 'B', ' '}; 
//   int freq[15] = {131, 147, 165, 175, 196, 220, 247, 262, 294, 330, 349, 392, 440, 494, 0}; 
//   int curr_f; 
//   int beat_l = 150; 
// for (int i = 0; i<num; i++)
// { if (note == notes[i]) {
//   curr_f = freq[i]; 
// }
// }
// int note_time = beats * beat_l; 
// tone( 10, curr_f, note_time);
// delay(note_time); 
// delay(50); 
// }



// void setup() {
//   pinMode(10, OUTPUT); 

// }

// void loop() {

// }
// void loop() {
// play('g', 2); //ha 
// play('g', 1); 
// play('a', 4); 
// play('g', 4); 
// play('c', 4); 
// play('b', 4); 
// play(' ', 2); 
// play('g', 2);
// play('g', 1); 
// play('a', 4); 
// play('g', 4); 
// play('D', 4); 
// play('c', 4); 
// play(' ', 2); 
// play('g', 2); 
// play('g', 1); 
// play('G', 4); 
// play('E', 4);
// play('C', 4); 
// play('b', 4);  
// play('a', 4); 
// play('a', 6); 
// play('F', 2); 
// play('F', 1); 
// play('E', 4); 
// play('C', 4); 
// play('D', 4); 
// play('C', 6); 
// }


// void setup() {
//   pinMode(10, OUTPUT); 
// pinMode(2, INPUT_PULLUP);
// pinMode(3, INPUT_PULLUP);
// pinMode(4, INPUT_PULLUP); 

// }




// void loop () {

 
// int red1 = digitalRead(2);
// int yellow1 = digitalRead(3);
// int green1 = digitalRead(4); 

// if (red1 == 0) {
//   tone(10, 262); 
// }
// else if (yellow1 == 0) {
//   tone(10, 330); 
// }
// else if (green1 == 0) {
//   tone(10, 392); 
// }
// else { 
//   noTone(10); 
// }

// }

// #include <Servo.h> 
// Servo mS;  
// // int pos = 0;  
// void setup() {
// pinMode(9, OUTPUT); 
// pinMode(A0, INPUT); 
// mS.attach(9); 
// Serial.begin(9600); 
// // map(pos, 0, 1023, 20, 160); 

// }


// void loop  () { 
//   int val = analogRead(A0); 
//   int pos = map(val, 0, 1023, 20, 320); 
//   mS.write(pos); 
//   Serial.println(pos); 
// for ( pos = 0; pos <= 180 ; pos +=1) { 
//   mS.write(pos);
//   delay(100); 
// }
// for ( pos = 180; pos >=0; pos-=1) {
//   mS.write(pos);
//   delay(100); 
// }


// float echoTime; 


// int r = 3;
// int g = 5;
// int b = 6;
// int trig = 11;
// int echo = 12;

// void setup() {
// Serial.begin(9600); 
// pinMode(r, OUTPUT); 
// pinMode(g, OUTPUT); 
// pinMode(b, OUTPUT); 
// pinMode(trig, OUTPUT);
// pinMode(echo, INPUT); 

// }

// float computeD() {
//   digitalWrite(trig,  HIGH); 
//   delayMicroseconds(10); 
//   digitalWrite(trig, LOW); 
//   float echoTime = pulseIn(echo, HIGH); 
//   float distance = (echoTime*340)/(20000);
//   Serial.println(echoTime); 
//   return distance;
// }
// void loop () {
//   float d = computeD(); 
// if (d< 10) {
//  analogWrite(r, 255); 
//   analogWrite(g, 0); 
//   analogWrite(b, 0); 
// }
// else if( d<20 && d>10 ) {
//   analogWrite(r, 255); 
//   analogWrite(g, 50); 
//   analogWrite(b, 0); 
// }
// else {
//   analogWrite(r, 0); 
//   analogWrite(g, 255); 
//   analogWrite(b, 0); 
// }
// Serial.println(d); 
// delay (50); 
// }


float echoTime; 
#include <Servo.h> 
Servo mS;  
// int pos = 0;  

int r = 3;
int g = 5;
int b = 6;
int trig = 11;
int echo = 12;

void setup() {
Serial.begin(9600); 
pinMode(r, OUTPUT); 
pinMode(g, OUTPUT); 
pinMode(b, OUTPUT); 
pinMode(trig, OUTPUT);
pinMode(echo, INPUT); 
pinMode(9, OUTPUT); 
mS.attach(9); 
}

float computeD() {
  digitalWrite(trig,  HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trig, LOW); 
  float echoTime = pulseIn(echo, HIGH); 
  float distance = (echoTime*340)/(20000);
  Serial.println(echoTime); 
  return distance;
}
void loop () {
  float d = computeD(); 
if (d< 10) {
 analogWrite(r, 255); 
 tone(10, 400);
 delay(10); 
  analogWrite(g, 0); 
  analogWrite(b, 0); 
  mS.write(100); 

}
else if( d<20 && d>10 ) {
  analogWrite(r, 255); 
  analogWrite(g, 50); 
  delay(10); 
  tone(10, 330); 
  analogWrite(b, 0); 
    int val = digitalRead(9); 
  int pos = map(val, 0, 1023, 20, 320); 
  mS.write(pos); 
for ( pos = 0; pos <= 180 ; pos +=30) { 
  mS.write(pos);
  delay(100); 
}
for ( pos = 180; pos >=0; pos-=30) {
  mS.write(pos);
  delay(100); 
}
}
else {
  analogWrite(r, 0); 
  analogWrite(g, 255);
  delay(10); 
  tone(10,392); 
  analogWrite(b, 0); 
  mS.write(45);
}
Serial.println(d); 
delay (100); 


}











