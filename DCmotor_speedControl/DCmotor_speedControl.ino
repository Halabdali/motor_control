//Declaring where out module is wired
int motorR_F = 5; //Right motor forward pin
int motorR_B = 6; //Right motor backward pin
int motorL_F = 9;//Left motor forward pin
int motorL_B = 10;//Left motor backward pin
int sensor_pin = A0;
int val, motorSpeed;

void setup() {
 
 pinMode(motorR_F,OUTPUT);
 pinMode(motorR_B,OUTPUT);
 pinMode(motorL_F,OUTPUT);
 pinMode(motorL_B,OUTPUT);
}

void loop() {
  val = analogRead(sensor_pin); 
  motorSpeed = map(val, 0, 1023, 0, 255); //Mapping the potentiometer values with DC motor speeds,and save the vlue into a variable 
  
  analogWrite(motorR_F, motorSpeed); //Giving motorSpeed value to the right motor forward pin
  analogWrite(motorR_B, 0);//Giving 0 value to the right motor backward pin
  
  analogWrite(motorL_F, motorSpeed); //Giving motorSpeed value to the left motor forward pin
  analogWrite(motorL_B, 0); //Giving 0 value to the left motor backward pin

  delay(100);
}
