int PulseSensorPurplePin = 0;                                      // Pulse Sensor PURPLE WIRE connected to ANALOG PIN 0
int LED13 = 13;                                                    // The on-board Arduino LED
int Signal;                                                        
int Threshold = 550;                                               // Determine which Signal to "count as a beat", and which to ingore.

void setup() {
  pinMode(LED13, OUTPUT);                  // pin that will blink to your heartbeat
  Serial.begin(9600);                     // Sets up Serial Communication at certain speed.
}

void loop() {
  Signal = analogRead(PulseSensorPurplePin); 

 
  Serial.println(Signal);
   
  if(Signal > Threshold)
  {
    digitalWrite(LED13, HIGH);    // If the signal is above "550", then "turn-on" Arduino's on-Board LED.
  } else {
    digitalWrite(LED13, LOW);     //  Else, the signal must be below "550", so "turn-off" this LED.
  }
  delay(100);
}
