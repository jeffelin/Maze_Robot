// int AIN1 = 13; 
// int AIN2 = 12; 
// int PWMA = 11; 
// int BIN1 = 8;
// int BIN2 = 9;
// int PWMB = 10; 
// int MS = 0;

// // speed (int speed) {
// //   int speed = abs(MS); 
// //   analogWrite(PWMA, abs(MS)); 
// //   analogWrite(PWMB, abs(MS)); 
// //   delay(1000); 
// // }
// void spinmotor(int speed) {
//   //0-255 inputs
//   if (MS > 0) {
//     digitalWrite(AIN1, HIGH); 
//     digitalWrite(AIN2, LOW); 
//     digitalWrite(BIN1, HIGH); //backwards wheel code
//     digitalWrite(BIN2, LOW); 
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS)); 
//     delay(1000); 
//     // digitalWrite(AIN1, HIGH); 
//     // digitalWrite(AIN2, LOW); 
//     // digitalWrite(BIN1, HIGH); 
//     // digitalWrite(BIN2, LOW);
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS)); 
//     delay(1000); 
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS)); 
//     delay(1000); 
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS)); 
//     delay(1000); 
//   }
//   else if (MS <0) {
//     digitalWrite(AIN1, LOW); 
//     digitalWrite(AIN2, HIGH); 
//     digitalWrite(BIN1, LOW); 
//     digitalWrite(BIN2, HIGH); 
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS)); 
//     delay(1000); 
//     // digitalWrite(AIN1, LOW); 
//     // digitalWrite(AIN2, HIGH); 
//     // digitalWrite(BIN1, LOW); 
//     // digitalWrite(BIN2, HIGH);
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS));  
//     delay(1000); 
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS));
//     delay(1000);
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS)); 
//     delay(1000);  
//   }
//   else if (MS == 0) {
//     digitalWrite(AIN1, LOW);
//     digitalWrite(AIN2, LOW); 
//     digitalWrite(BIN1, LOW); 
//     digitalWrite(BIN2, LOW); 
//   }
//   analogWrite(PWMA, abs(MS)); 
//   analogWrite(PWMB, abs(MS));  
// }

// void setup() {
//   // put your setup code here, to run once:
// Serial.begin(9600); 
// Serial.println("Enter Motor Speed"); 
// pinMode(7, INPUT_PULLUP); 
// pinMode(AIN1, OUTPUT); //from arduino 
// pinMode(AIN2, OUTPUT); 
// pinMode(PWMA, OUTPUT); 
// pinMode(BIN1, OUTPUT); 
// pinMode(BIN2, OUTPUT); 
// pinMode(PWMB, OUTPUT); 
// }

// void loop() {
//   // put your main code here, to run repeatedly:

// if (Serial.available() == 1) {
//   MS = 600;
// }
// if (digitalRead(7) == HIGH) {
//   spinmotor(300); 
// }
// else if (digitalRead(7) == LOW) {
//   spinmotor(0); 
// }
// }






// speed (int speed) {
//   int speed = abs(MS); 
//   analogWrite(PWMA, abs(MS)); 
//   analogWrite(PWMB, abs(MS)); 
//   delay(1000); 
// }
// void spinmotor(int speed) {
//   //0-255 inputs
//   if (MS > 0) {
//     digitalWrite(AIN1, HIGH); 
//     digitalWrite(AIN2, LOW); 
//     digitalWrite(BIN1, HIGH); //backwards wheel code
//     digitalWrite(BIN2, LOW); 
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS)); 
//     delay(1000); 
//     // digitalWrite(AIN1, HIGH); 
//     // digitalWrite(AIN2, LOW); 
//     // digitalWrite(BIN1, HIGH); 
//     // digitalWrite(BIN2, LOW);
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS)); 
//     delay(1000); 
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS)); 
//     delay(1000); 
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS)); 
//     delay(1000); 
//   }
//   else if (MS <0) {
//     digitalWrite(AIN1, LOW); 
//     digitalWrite(AIN2, HIGH); 
//     digitalWrite(BIN1, LOW); 
//     digitalWrite(BIN2, HIGH); 
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS)); 
//     delay(1000); 
//     // digitalWrite(AIN1, LOW); 
//     // digitalWrite(AIN2, HIGH); 
//     // digitalWrite(BIN1, LOW); 
//     // digitalWrite(BIN2, HIGH);
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS));  
//     delay(1000); 
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS));
//     delay(1000);
//     analogWrite(PWMA, abs(MS)); 
//     analogWrite(PWMB, abs(MS)); 
//     delay(1000);  
//   }
//   else if (MS == 0) {
//     digitalWrite(AIN1, LOW);
//     digitalWrite(AIN2, LOW); 
//     digitalWrite(BIN1, LOW); 
//     digitalWrite(BIN2, LOW); 
//   }
//   analogWrite(PWMA, abs(MS)); 
//   analogWrite(PWMB, abs(MS));  
// }

int AIN1 = 13; 
int AIN2 = 12; 
int PWMA = 11; 
int BIN1 = 8;
int BIN2 = 9;
int PWMB = 10; 
int MS = 0;
int drive_time = 2; 
int distance_int; 
String dir; 
int turn_time = 8; 
int trig = 6; 
int echo = 5; 
float echotime; 

void spinright (int rightspeed) {

if (rightspeed> 0) {

digitalWrite(AIN2, HIGH); 
digitalWrite(AIN1, LOW ); 
}
else if (rightspeed< 0) {
digitalWrite(AIN2, LOW); 
digitalWrite(AIN1, HIGH); 
}
else if (rightspeed == 0)
{
  digitalWrite(AIN2, LOW); 
  digitalWrite(AIN1, LOW); 
}
analogWrite(PWMA, abs(rightspeed)); 
}

void spinleft (int leftspeed) {

if (leftspeed> 0) {

digitalWrite(BIN2, HIGH); 
digitalWrite(BIN1, LOW ); 
}
else if (leftspeed< 0) {
digitalWrite(BIN2, LOW); 
digitalWrite(BIN1, HIGH); 
}
else if (leftspeed ==0) {
  digitalWrite(BIN2, LOW); 
  digitalWrite(BIN1, LOW); 
}
analogWrite(PWMB, abs(leftspeed)); 
}
float computeD() {
  digitalWrite(trig,  HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trig, LOW); 
  float echoTime = pulseIn(echo, HIGH); 
  float distance = (echoTime/148);
  return distance;
}
void setup() {
  // put your setup code here, to run once:
// Serial.begin(9600); 
// Serial.println("Enter f, b, r, l"); 
pinMode(7, INPUT_PULLUP); 
pinMode(AIN1, OUTPUT); //from arduino 
pinMode(AIN2, OUTPUT); 
pinMode(PWMA, OUTPUT); 
pinMode(BIN1, OUTPUT); 
pinMode(BIN2, OUTPUT); 
pinMode(PWMB, OUTPUT); 
pinMode(echo, INPUT); 
pinMode(trig, OUTPUT); 
Serial.begin(9600);
}

// void loop() {
//   // put your main code here, to run repeatedly:

// if (Serial.available() == 1) {
//   MS = 600;
// }
// if (digitalRead(7) == HIGH) {
//   spinmotor(300); 
// }
// else if (digitalRead(7) == LOW) {
//   spinmotor(0); 
// }
// }

// 'f' forward, 'b' backward, 'r' right, 'l' left, 'd' distance
void loop () {
  // if(Serial.available() == 1) {
  //   String dir = Serial.readStringUntil(' '); 
  //   String dis = Serial.readStringUntil(' '); 
  //   distance_int = dis.toInt();
  int d = computeD(); 
  Serial.println(d); 
  if ( d < 10) {
    spinright(0); 
    spinleft(0); 
    delay(100); 
    spinright(-300); 
    spinleft(-300);  
    delay(100);
    spinright(300); 
    spinleft(200); 
    delay(100); 
  }
  else if (d>=10) {
    spinright(300); 
    spinleft(300); 
  

  }
 }
//   if (dir == 'f') {
//     spinright(400); 
//     spinleft(400); 
//     delay(drive_time * distance_int);
//     spinright(0); 
//     spinleft(0); 
//   }
//  else if (dir == 'b') {
//     spinright(-200); 
//     spinleft(-200); 
//     delay(drive_time * distance_int);
//     spinright(0); 
//     spinleft(0); 
//  }
//   else if (dir == 'r') {
//     spinright(-200); 
//     spinleft(255); 
//     delay(turn_time * distance_int);
//     spinright(0); 
//     spinleft(0); 
//   }
//   else if (dir == 'l') {
//     spinright(255); 
//     spinleft(-200); 
//     delay(turn_time * distance_int);
//     spinright(0); 
//     spinleft(200); 
//   }
//   else {
//     spinright(0); 
//     spinleft(0); 
//   }
// }


//   float d = computeD(); 
// if (d< 10) {
//  analogWrite(r, 255); 
//  tone(10, 400);
//  delay(10); 
//   analogWrite(g, 0); 
//   analogWrite(b, 0); 
