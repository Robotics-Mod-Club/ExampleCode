
/*
 * Define our ports, these wont change are so are consts 
 */
const int buttonPin = 2;
const int ledPin = 9;

/*
 * variables that will change 
 */
int buttonState = 0;
bool buttonToggle = false; // A boolean can either be true or false

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

  //start the serial monitor
  Serial.begin(9600);
}

void loop() {
  /*
   * Collect data from the button
   */
  buttonState = digitalRead(buttonPin);

  /*
   * Toggle button logic, 
   * If the button is pressed and has already been pressed before it turns the bool to false
   * if the button is pressed when it was false it is now true
   */
  if (buttonState == HIGH) {
    if (buttonToggle) {
      buttonToggle = false;
    } else {
      buttonToggle = true;
    }
  }

  /*
   * decide what to do when the button is toggled on and off 
   */
  if (buttonToggle) {
    digitalWrite(ledPin, HIGH); //Set the LED to on
  } else {
    digitalWrite(ledPin, LOW); //Turn the LED off 
  }
}
