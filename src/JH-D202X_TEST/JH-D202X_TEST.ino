/*
JH-D202X-R2/R4 Joystick Module Test
// CREDIT GOES TO: https://protosupplies.com/product/jh-d202x-r2-r4-joystick-5k/
Basic code for monitoring the outputs of the joystick. 
*/
int xPin = A1;      // Use any analog input pin to read X-Axis pot
int yPin = A0;      // Use any analog input pin to read Y-Axis pot
int xPosition = 0;  // Variable to hold current X-Axis reading
int yPosition = 0;  // Variable to hold current Y-Axis reading
//===============================================================================
//  Initialization
//===============================================================================
void setup() 
{ 
  Serial.begin(9600); 
}
//===============================================================================
//  Main
//===============================================================================
void loop() 
{
  xPosition = analogRead(xPin);         // Read the current state of both controls
  yPosition = analogRead(yPin);
  
  Serial.print("X: ");                  // Print state to Serial Monitor window
  Serial.print(xPosition);
  Serial.print(" | Y: ");
  Serial.println(yPosition);

  delay(250);    // add some delay between reads. 
}