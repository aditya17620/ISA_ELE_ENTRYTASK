//Project to get information from an ultrasonic sensor to 
//find the distance between obstacles and display the proximity
//using and RGB LED.

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float dist;
  digitalWrite(13, HIGH);
  delay(10);
  digitalWrite(13, LOW);
  //to find distance in meters
  dist = 0.0001723*(pulseIn(12, HIGH));
  Serial.println(dist);
  if(dist < 1)
  {
    //to display red in the LED
    digitalWrite(7, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
  }
  else if(dist<2 && dist>=1)
  {
    //to display yellow in the LED
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    
  }
  else if(dist >= 2)
  {
    //to display green in the LED
    digitalWrite(7, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    
  }
}