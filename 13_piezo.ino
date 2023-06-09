
void setup() 
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second
}


const int knockPin = A0;
const int piezoPin = 8;

int knockThreshold = 100; // Adjust this value to set the knock sensitivity

void setup() {
  pinMode(piezoPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(knockPin);
  Serial.println(sensorValue); // Print the sensor value to the serial monitor

  if (sensorValue > knockThreshold) {
    playTune(); // Call the function to play the tune
    delay(1000); // Wait for 1 second to avoid detecting multiple knocks
  }
}

void playTune() {
  // Define the melody as an array of note frequencies
  int melody[] = {
    262,  // C4
    330,  // E4
    392,  // G4
    523   // C5
  };
  int noteDurations[] = {4, 4, 4, 4}; // Corresponding note durations (change as needed)

  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    int noteDuration = 1000 / noteDurations[i];
    tone(piezoPin, melody[i], noteDuration);
    delay(noteDuration * 1.3); // Add a small delay between notes
    noTone(piezoPin); // Stop playing the note
    delay(50); // Add a small pause between notes
  }
}
