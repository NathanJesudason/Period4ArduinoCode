
int motorPin = 10; 
int pressurePin = 0;
int calibrationVal = 400;
void setup()
{
 pinMode(motorPin, OUTPUT); 
 Serial.begin(9600);
}



void loop()                   
{
  int val = analogRead(pressurePin);
  Serial.println(val);
  val = constrain(val, 0, calibrationVal);
  val = map(val, 0, calibrationVal, 0, 255);
  analogWrite(motorPin, val);
}
