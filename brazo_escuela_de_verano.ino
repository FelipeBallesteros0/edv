#include <SoftwareSerial.h>
#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

int anguloservo1;
int anguloservo2;

//SoftwareSerial HC12(2,3);

//bool estado1 = LOW;
//bool estado2 = LOW;

void setup() {
  Serial.begin(9600);             // Serial port to computer
//  HC12.begin(9600);               // Serial port to HC12
  
  servo1.attach(9);
  servo2.attach(8);
  servo3.attach(10);
  
//  pinMode(9,OUTPUT);
//  pinMode(8,OUTPUT);
}

void loop() {
if (Serial.available()) {
    
    char texto = Serial.read();
        switch (texto) {
          
  case '1':
    anguloservo1 = anguloservo1 + 10;
    anguloservo1 = constrain(anguloservo1,0,180);
    servo1.write(anguloservo1);
    Serial.println(anguloservo1);
    break;
  
  case '2':
    anguloservo1 = anguloservo1 - 10;
    anguloservo1 = constrain(anguloservo1,0,180);
    servo1.write(anguloservo1);
    Serial.println(anguloservo1);
    break;

  case 'q':
    anguloservo2 = anguloservo2 + 10;
    anguloservo2 = constrain(anguloservo2,0,180);
    servo2.write(anguloservo2);
    Serial.println(anguloservo2);
    break;
  
  case 'w':
    anguloservo2 = anguloservo2 - 10;
    anguloservo2 = constrain(anguloservo2,0,180);
    servo2.write(anguloservo2);
    Serial.println(anguloservo2);
    break;

  case 'a':
    servo3.write(0);
    break;
  
  case 's':
    servo3.write(90);
    break;
    }
   }
  }
