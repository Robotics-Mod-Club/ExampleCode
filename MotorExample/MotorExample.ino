/*
 * example for the L298N Motor Controller with 2 DC motors 
 */

/*
 * define all of our ports, these are along the front of the motor controller
 */
const int ENA = 0;
const int IN1 = 2;
const int IN2 = 3;
const int IN3 = 4;
const int IN4 = 5;
const int ENB = 1;

void setup() {
  /*
   * define all of the ports as output and start the serial monitor 
   */
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT):
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  Serial.begin(9600);
}

void loop() {

/*
 * set speed to 0 as a defualt 
 */
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  
/*
 * set which ports we are setting power to, IN1 should be forwards for eth 1st motor, IN2 is reverse and so on 
 */
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
/*
 * set the speed of the motors, this needs to be above 100 to move 
 */
  digitalWrite(ENA, 150);
  digitalWrite(ENB, 150);
/*
 * delay set motor running for delay time
 */
  delay(delayTime);
  digitalWrite(ENA, 0);
  digitalWrite(ENB, 0);
}
