int trigPin = 7;  //Define the pins that you will work with
int echoPin = 8;
long duration, distance;
void setup() {
  pinMode(trigPin, OUTPUT);  //Define digital pin 7 as an output
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop()
{
 digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2;
  Serial.println(distance);
  //delay(100);
  while(1)
  {
    
  }
}
