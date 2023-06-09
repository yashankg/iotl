
void setup() 
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  digitalWrite(3, HIGH);   
  delay(200);              
  digitalWrite(3, LOW);    
  delay(200);              
}
