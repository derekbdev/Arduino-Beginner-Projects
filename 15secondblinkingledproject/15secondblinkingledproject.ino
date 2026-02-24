int redLED=11;
int yellowLED=8;
int greenLED= 7;
int blueLED=3;
int del=1000;
int dey=1000;
void setup() {
 pinMode (yellowLED,OUTPUT); 
 pinMode(redLED,OUTPUT);
 pinMode(greenLED,OUTPUT);   
 pinMode(blueLED,OUTPUT);
}

void loop() {
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,LOW);
  digitalWrite(greenLED,HIGH);
  digitalWrite(blueLED,HIGH);
  delay(del);

  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
  digitalWrite(greenLED,HIGH);
  digitalWrite(blueLED,HIGH);
  delay(del);

   digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,HIGH);
  digitalWrite(greenLED,HIGH);
  digitalWrite(blueLED,HIGH);
  delay(dey);

  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,HIGH);
  digitalWrite(greenLED,HIGH);
  digitalWrite(blueLED,HIGH);
  delay(dey);
  
digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,HIGH);
  delay(del);

   digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,HIGH);
  delay(dey);

  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,HIGH);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,HIGH);
  delay(dey);

  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,HIGH);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,HIGH);
  delay(dey);

  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,LOW);
  digitalWrite(greenLED,HIGH);
  digitalWrite(blueLED,LOW);
  delay(del);

digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
  digitalWrite(greenLED,HIGH);
  digitalWrite(blueLED,LOW);
  delay(del);

 digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,HIGH);
  digitalWrite(greenLED,HIGH);
  digitalWrite(blueLED,LOW);
  delay(del);
 
 digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,HIGH);
  digitalWrite(greenLED,HIGH);
  digitalWrite(blueLED,LOW);
  delay(del);
 
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,LOW);
  delay(del);

digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,LOW);
  delay(del);


digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,HIGH);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,LOW);
  delay(del);


   digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,HIGH);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,LOW);
  delay(del);


}
