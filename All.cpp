1.// blinking

void setup()
 {
  pinMode(13, OUTPUT); 
 }

void loop() {
  digitalWrite(13, HIGH);  
  delay(1000);             
  digitalWrite(13, LOW);   
  delay(1000);             
}

2.// trafic light

int red = 9;
int yellow = 8;
int green = 7;

void setup(){
  
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  
}
void loop(){
digitalWrite(red, HIGH);
 delay(15000);
digitalWrite(red, LOW);
  
  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow, LOW);
delay(500);

digitalWrite(green, HIGH);
delay(20000);
digitalWrite(green, LOW);
}


3.// servo motor
  
}

#include <Servo.h> 

int servoPin = 3;  // declare pin mode

Servo Servo1; // servo1 is  name of motor 
void setup() { 
   
   Servo1.attach(servoPin); 
}
void loop(){ 
   // Make servo go to 0 degrees 
   Servo1.write(0); 
   delay(1000); 
   // Make servo go to 90 degrees 
   Servo1.write(90); 
   delay(1000); 
   // Make servo go to 180 degrees 
   Servo1.write(180); 
   delay(1000); 
}


4.// dht sensor 


#include<DFRobot_DHT11.h>
DFRobot_DHT11 DHT;
#define DHT11_PIN 10
void setup(){
  Serial.begin(9600);

}
void loop(){
  DHT.read(DHT11_PIN);
  Serial.print("temp");
  Serial.print(DHT.temperature);
  Serial.print("hum");
  Serial.print(DHT.humidity);
  delay(1000);
}




7.//Monitor temprature LM35A0

#define LM35 A0
#define RED 7
#define GREEN 6
void setup(){
  Serial.begin(9600);
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
}
void loop(){
  float lmvalue=analogRead(LM35);
  float tempr=(lmvalue*500)/1023;
  Serial.println(tempr);
  if(tempr>30.80){
    digitalWrite(RED,HIGH);
    digitalWrite(GREEN,LOW);
  }
  else{
    digitalWrite(GREEN,HIGH);
    digitalWrite(RED,LOW);
  }
  delay(500);
}






