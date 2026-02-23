int redLED=9;
int onTime=800;
int offTime=200;
int yellowLED=3;
int greenLED=1;
int del= 100;
void setup() {
 pinMode(redLED,OUTPUT);
 pinMode (yellowLED,OUTPUT);
pinMode(greenLED,OUTPUT);
}

void loop() {
 digitalWrite (redLED,HIGH);
 delay(500);
 digitalWrite (redLED,LOW);
delay(100);
 digitalWrite (yellowLED,HIGH);
 delay(500);
 digitalWrite(yellowLED,LOW);
 delay(100);
 digitalWrite (greenLED,HIGH);
 delay(900);
 digitalWrite(greenLED,LOW);
delay (800);
 

}