
/*
 * Define our ultrasonic pin, 
 * this has to be the same for Trig and Echo ports on the ultrasonic
 */
const int pingPin = 7;

void setup() {
  /*
   * Start serial communication
   */
  Serial.begin(9600);
}

void loop() {
  long duration, cm;

  /*
   * gather input from the ultrasonic sensor
   */
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);
  
  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);

  cm = microsecondsToCentimeters(duration);

  /*
   * print the output
   */
  Serial.print(cm + "cm");
  Serial.println();

  /*
   * delay between getting and printing data each time 
   */
  delay(100);
}

long microsecondsToCentimeters(long microseconds) {
  /* 
   * The speed of sound is 340 m/s or 29 microseconds per centimeter.
   * The ping travels out and back, so to find the distance of the object we
   * take half of the distance travelled.
   */
  return microseconds / 29 / 2;
}
