int val;
int redled =10; // initialize digital pin 10.
int yellowled =7; // initialize digital pin 7.
int greenled =4; // initialize digital pin 4.
void setup()
{
  Serial.begin(9600);
  pinMode(redled, OUTPUT);// set the pin with red LED as “output”
  pinMode(yellowled, OUTPUT); // set the pin with yellow LED as “output”
  pinMode(greenled, OUTPUT); // set the pin with green LED as “output”
}
void loop()
{
  val=Serial.read();
  if(val=='R')// determine if the instruction or character received is “S”.
  {  // if it’s “S”,    
    digitalWrite(redled, HIGH);//// turn on green LED
    delay(5000);// wait 5 seconds
    digitalWrite(redled, LOW); // turn off green LED
    
    for(int i=0;i<3;i++)// blinks for 3 times
    {
      delay(500);// wait 0.5 second
      digitalWrite(yellowled, HIGH);// turn on yellow LED
      delay(500);// wait 0.5 second
      digitalWrite(yellowled, LOW);// turn off yellow LED
    } 
    
    delay(500);// wait 0.5 second
    digitalWrite(greenled, HIGH);// turn on red LED
    delay(5000);// wait 5 second
    digitalWrite(greenled, LOW);// turn off red LED
  }
  else {
    delay(500);// wait 0.5 second
    digitalWrite(yellowled, HIGH);// turn on yellow LED
    delay(500);// wait 0.5 second
    digitalWrite(yellowled, LOW);// turn off yellow LED
  }
}
