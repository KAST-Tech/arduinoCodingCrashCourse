// Variables
int ledPin = 13;
//int ledPin = 11; //pwm pin
int buttonPin = 9;
// int buttonState=0;
bool buttonState; // false = 0 | true = 1
int potPin = A0;
float potValue;

// setup function
void setup(){
	// pinMode(13, OUTPUT);
	pinMode(ledPin,OUTPUT);
  	pinMode(buttonPin,INPUT);
  	pinMode(potPin,INPUT);
  	Serial.begin(9600);
}

//loop function
void loop(){
  /*
  //digitalWrite function using pin number
  digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(13,LOW);
  delay(2000);
  */
  /*
  //digitalWrite function using variable name
  digitalWrite(ledPin,HIGH);
  delay(2000);
  digitalWrite(ledPin,LOW);
  delay(2000);
  */
  
  /*
  // digitalRead function
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  delay(3000);
  */
  
  /*
  // analogRead & analogWrite
  potValue = analogRead(potPin);
  Serial.println(potValue);
  analogWrite(ledPin,255);
  */
  
  /*
  // Operator
  Serial.print("Arithmetic Operator:");
  Serial.println(2+3);
  Serial.println(4-3);
  Serial.println(2*3);
  Serial.println(2/3);
  Serial.println(2%3);
  delay(2000);
  
  Serial.print("Comparison Operator => Equal to:");
  Serial.println(2==2); 
  delay(2000);
  Serial.print("Comparison Operator => Not equal to:");
  Serial.println(2!=2); 
  delay(2000);
  
  Serial.print("Comparison Operator => Greater than:");
  Serial.println(3>2);
  delay(2000);
  Serial.print("Comparison Operator => Less than:");
  Serial.println(2<3); 
  delay(2000);
  
  Serial.print("Comparison Operator => Greater than or equal:");
  Serial.println(5>=3);
  delay(2000);
  Serial.print("Comparison Operator => Less than or equal:");
  Serial.println(2<=3); 
  delay(2000);
  
  Serial.print("Boolean Operator => OR:");
  Serial.println(2<3 || 1<3);
  delay(2000);
  
  Serial.print("Boolean Operator => AND:");
  Serial.println(2<3 && 1>3);
  delay(2000);
  */
  
  // if else
  potValue = analogRead(potPin);
  Serial.println(potValue);
  if(potValue >= 500){
  	digitalWrite(ledPin,HIGH);
    delay(2000);
  }else{
  	digitalWrite(ledPin,LOW);
    delay(2000);
  }
}