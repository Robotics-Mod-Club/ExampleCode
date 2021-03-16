
/*
 * Set all your variables here
 */
const int ledPin = 9; //set which pin the LED is connected to, it is set to a constant as it wont change 

/*
 * The setup function is called once at the start when the code runs
 * In here put up all your setup features like setting your pinMode
 */
void setup() {
  pinMode(ledPin, OUTPUT);
}

/*
 * The loop function runs over and over again
 */
void loop() {
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
