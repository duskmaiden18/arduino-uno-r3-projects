int START = 2 ;  // the I/O pin for the first LED
int END = 8;   // the I/O pin for the last LED

void setup()
{
   for (int i = START; i < END; i ++) 
   {
     pinMode(i, OUTPUT);   // set I/O pins as output
   }

}

void loop()
{
   for (int i = START; i < END; i ++) 
   {
     digitalWrite(i, HIGH);    // set I/O pins as “high”, turn on LEDs one by one.
     delay(200);        // delay
   }
   for (int i = START; i < END; i ++) 
   {
     digitalWrite(i, LOW);    // set I/O pins as “low”, turn off LEDs one by one
     delay(200);        // delay
   }  
}
